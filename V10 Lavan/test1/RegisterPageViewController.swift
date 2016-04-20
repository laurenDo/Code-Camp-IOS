//
//  RegisterPageViewController.swift
//  test1
//
//  Created by Dorian LAURENCEAU on 13/04/16.
//  Copyright © 2016 Lavan. All rights reserved.
//

import UIKit

class RegisterPageViewController: UIViewController {
    

    @IBOutlet weak var userSurname: UITextField!
    @IBOutlet weak var userEmailTextField: UITextField!
    @IBOutlet weak var userPasswordTextField: UITextField!
    @IBOutlet weak var userFirstNameTextField: UITextField!
    @IBOutlet weak var repeatPasswordTextField: UITextField!
    
    @IBOutlet weak var DateBorn: UIDatePicker!

    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Do any additional setup after loading the view.
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    @IBAction func registerButtonTapped(sender: AnyObject){
        
        let userEmail = userEmailTextField.text;
        let userPassword = userPasswordTextField.text;
        let userRepeatPassword = repeatPasswordTextField.text;
        let Surname = userSurname.text;
        let userFirstName = userFirstNameTextField.text;
        let DateBirth = DateBorn.calendar;
        print(DateBirth);
       func displayMyAlertMessage(userMessage:String) {
            let myAlert = UIAlertController(title:"Erreur", message: userMessage, preferredStyle: UIAlertControllerStyle.Alert);
            
            let okAction = UIAlertAction(title:"Validation", style: UIAlertActionStyle.Default, handler:nil);
            
            myAlert.addAction(okAction);
            
            self.presentViewController(myAlert, animated: true, completion: nil);
        }
        
        if(userEmail == ""  || userPassword == ""  || userRepeatPassword == "" || userFirstName == "") {
            displayMyAlertMessage("Vous avez oublié de remplir un champ!");
            print(userFirstName)
            return;
        }
        
        if(userPassword != userRepeatPassword){
            displayMyAlertMessage("Les mots de passes rentrés ne sont pas similaires!");
            
            return;
        }
        
        let myUrl = NSURL(string: "http://127.0.0.1:8888/inscription.php");
        let request = NSMutableURLRequest(URL: myUrl!);
        request.HTTPMethod = "POST";
        let postString = "email=\(userEmail!)&password=\(userPassword!)&prenom=\(userFirstName!)&nom=\(Surname!)";
        print(postString)
        request.HTTPBody = postString.dataUsingEncoding(NSUTF8StringEncoding);
        
        let task = NSURLSession.sharedSession().dataTaskWithRequest(request) {
            data, response, error in
            

            if error != nil {

                print("error=\(error)")
                return
            }

            do { let json = try NSJSONSerialization.JSONObjectWithData(data!, options: .MutableContainers) as? NSDictionary

                if let parseJSON = json {
                   // print("parseJSON: \(parseJSON)");
                    let resultValue = parseJSON["status"] as! String!
                    print("result: \(resultValue)")
					
                    var isUserRegistered:Bool = false;
                    if(resultValue=="Success") { isUserRegistered = true;}
                    
                    var messageToDisplay:String = parseJSON["message"] as! String!;
                    if(!isUserRegistered)
                    {
                        messageToDisplay = parseJSON["message"] as! String!;
                        
                    }
                    
                    dispatch_async(dispatch_get_main_queue(), {
                        var myAlert = UIAlertController(title:"Alert", message:messageToDisplay, preferredStyle: UIAlertControllerStyle.Alert);
                        let okAction = UIAlertAction(title:"Ok", style:UIAlertActionStyle.Default){ action in self.dismissViewControllerAnimated(true, completion: nil);
                        }
                        myAlert.addAction(okAction);
                        self.presentViewController(myAlert, animated:true, completion: nil);
                        
                    });
                    
                }
            } catch
            {print(error)}
            
        }
        
        task.resume()
    
    }
}
