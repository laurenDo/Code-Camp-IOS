//
//  log.swift
//  test1
//
//  Created by Lavan on 19/04/2016.
//  Copyright © 2016 Lavan. All rights reserved.
//

import UIKit

class Log: UIViewController {
    
    
    
    @IBOutlet weak var userEmailTextField: UITextField!
    
    
    @IBOutlet weak var userPasswordTextField: UITextField!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Do any additional setup after loading the view.
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    @IBAction func loginButtonTapped(sender: AnyObject) {
        
        let userEmail = userEmailTextField.text;
        let userPassword = userPasswordTextField.text;
        
        if(userPassword!.isEmpty || userPassword!.isEmpty) { return; }
        
        let myUrl = NSURL(string: "http://127.0.0.1:8888/login.php");
        let request = NSMutableURLRequest(URL:myUrl!);
        request.HTTPMethod = "POST";
        
        let postString = "email=\(userEmail!)&password=\(userPassword!)";
        
        request.HTTPBody = postString.dataUsingEncoding(NSUTF8StringEncoding);
        
        let task = NSURLSession.sharedSession().dataTaskWithRequest(request) {
            data, response, error in
            
            if error != nil {
                print("error=\(error)")
                return
            }
            
            var err: NSError?
            do { let json = try NSJSONSerialization.JSONObjectWithData(data!, options: .MutableContainers) as? NSDictionary
                
                if let parseJSON = json {
                    let resultValue:String = parseJSON["status"] as! String;
                    print("result: \(resultValue)")
                    
                    if(resultValue=="Success")
                    {
                        NSUserDefaults.standardUserDefaults().setBool(true, forKey: "isUserLoggedIn");
                        NSUserDefaults.standardUserDefaults().synchronize();
                        
                        self.dismissViewControllerAnimated(true, completion: nil);
                    }
                }
            } catch
            {print(error)}
        }
        task.resume()
    }
}

