// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.1 clang-703.0.29)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UILabel;
@class UIView;
@class NSCoder;


/// A TextFieldEffects object is a control that displays editable text and contains the boilerplates to setup unique animations for text entrey and display. You typically use this class the same way you use UITextField.
SWIFT_CLASS("_TtC16TextFieldEffects16TextFieldEffects")
@interface TextFieldEffects : UITextField

/// UILabel that holds all the placeholder information
@property (nonatomic, readonly, strong) UILabel * _Nonnull placeholderLabel;

/// Creates all the animations that are used to leave the textfield in the "entering text" state.
- (void)animateViewsForTextEntry;

/// Creates all the animations that are used to leave the textfield in the "display input text" state.
- (void)animateViewsForTextDisplay;

/// Draws the receiver’s image within the passed-in rectangle.
///
/// \param rect The portion of the view’s bounds that needs to be updated.
- (void)drawViewsForRect:(CGRect)rect;
- (void)updateViewsForBoundsChange:(CGRect)bounds;
- (void)drawRect:(CGRect)rect;
- (void)drawPlaceholderInRect:(CGRect)rect;
@property (nonatomic, copy) NSString * _Nullable text;
- (void)willMoveToSuperview:(UIView * _Null_unspecified)newSuperview;

/// The textfield has started an editing session.
- (void)textFieldDidBeginEditing;

/// The textfield has ended an editing session.
- (void)textFieldDidEndEditing;
- (void)prepareForInterfaceBuilder;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIColor;


/// An AkiraTextField is a subclass of the TextFieldEffects object, is a control that displays an UITextField with a customizable visual effect around the edges of the control.
SWIFT_CLASS("_TtC16TextFieldEffects14AkiraTextField")
@interface AkiraTextField : TextFieldEffects

/// The color of the border.
///
/// This property applies a color to the bounds of the control. The default value for this property is a clear color.
@property (nonatomic, strong) UIColor * _Nullable borderColor;

/// The color of the placeholder text.
///
/// This property applies a color to the complete placeholder string. The default value for this property is a  black color.
@property (nonatomic, strong) UIColor * _Nonnull placeholderColor;

/// The scale of the placeholder font.
///
/// This property determines the size of the placeholder label relative to the font size of the text field.
@property (nonatomic) CGFloat placeholderFontScale;
@property (nonatomic, copy) NSString * _Nullable placeholder;
@property (nonatomic) CGRect bounds;
- (void)drawViewsForRect:(CGRect)rect;
- (void)animateViewsForTextEntry;
- (void)animateViewsForTextDisplay;
- (CGRect)placeholderRectForBounds:(CGRect)bounds;
- (CGRect)editingRectForBounds:(CGRect)bounds;
- (CGRect)textRectForBounds:(CGRect)bounds;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



/// An HoshiTextField is a subclass of the TextFieldEffects object, is a control that displays an UITextField with a customizable visual effect around the lower edge of the control.
SWIFT_CLASS("_TtC16TextFieldEffects14HoshiTextField")
@interface HoshiTextField : TextFieldEffects

/// The color of the border when it has no content.
///
/// This property applies a color to the lower edge of the control. The default value for this property is a clear color.
@property (nonatomic, strong) UIColor * _Nullable borderInactiveColor;

/// The color of the border when it has content.
///
/// This property applies a color to the lower edge of the control. The default value for this property is a clear color.
@property (nonatomic, strong) UIColor * _Nullable borderActiveColor;

/// The color of the placeholder text.
///
/// This property applies a color to the complete placeholder string. The default value for this property is a black color.
@property (nonatomic, strong) UIColor * _Nonnull placeholderColor;

/// The scale of the placeholder font.
///
/// This property determines the size of the placeholder label relative to the font size of the text field.
@property (nonatomic) CGFloat placeholderFontScale;
@property (nonatomic, copy) NSString * _Nullable placeholder;
@property (nonatomic) CGRect bounds;
- (void)drawViewsForRect:(CGRect)rect;
- (void)animateViewsForTextEntry;
- (void)animateViewsForTextDisplay;
- (CGRect)editingRectForBounds:(CGRect)bounds;
- (CGRect)textRectForBounds:(CGRect)bounds;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



/// An IsaoTextField is a subclass of the TextFieldEffects object, is a control that displays an UITextField with a customizable visual effect around the lower edge of the control.
SWIFT_CLASS("_TtC16TextFieldEffects13IsaoTextField")
@interface IsaoTextField : TextFieldEffects

/// The color of the border when it has no content.
///
/// This property applies a color to the lower edge of the control. The default value for this property is a clear color. This value is also applied to the placeholder color.
@property (nonatomic, strong) UIColor * _Nullable inactiveColor;

/// The color of the border when it has content.
///
/// This property applies a color to the lower edge of the control. The default value for this property is a clear color.
@property (nonatomic, strong) UIColor * _Nullable activeColor;

/// The scale of the placeholder font.
///
/// This property determines the size of the placeholder label relative to the font size of the text field.
@property (nonatomic) CGFloat placeholderFontScale;
@property (nonatomic, copy) NSString * _Nullable placeholder;
@property (nonatomic) CGRect bounds;
- (void)drawViewsForRect:(CGRect)rect;
- (void)animateViewsForTextEntry;
- (void)animateViewsForTextDisplay;
- (CGRect)editingRectForBounds:(CGRect)bounds;
- (CGRect)textRectForBounds:(CGRect)bounds;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



/// A JiroTextField is a subclass of the TextFieldEffects object, is a control that displays an UITextField with a customizable visual effect around the background of the control.
SWIFT_CLASS("_TtC16TextFieldEffects13JiroTextField")
@interface JiroTextField : TextFieldEffects

/// The color of the border.
///
/// This property applies a color to the lower edge of the control. The default value for this property is a clear color.
@property (nonatomic, strong) UIColor * _Nullable borderColor;

/// The color of the placeholder text.
///
/// This property applies a color to the complete placeholder string. The default value for this property is a black color.
@property (nonatomic, strong) UIColor * _Nonnull placeholderColor;

/// The scale of the placeholder font.
///
/// This property determines the size of the placeholder label relative to the font size of the text field.
@property (nonatomic) CGFloat placeholderFontScale;
@property (nonatomic, copy) NSString * _Nullable placeholder;
@property (nonatomic) CGRect bounds;
- (void)drawViewsForRect:(CGRect)rect;
- (void)animateViewsForTextEntry;
- (void)animateViewsForTextDisplay;
- (CGRect)editingRectForBounds:(CGRect)bounds;
- (CGRect)textRectForBounds:(CGRect)bounds;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



/// A KaedeTextField is a subclass of the TextFieldEffects object, is a control that displays an UITextField with a customizable visual effect around the foreground of the control.
SWIFT_CLASS("_TtC16TextFieldEffects14KaedeTextField")
@interface KaedeTextField : TextFieldEffects

/// The color of the placeholder text.
///
/// This property applies a color to the complete placeholder string. The default value for this property is a black color.
@property (nonatomic, strong) UIColor * _Nullable placeholderColor;

/// The scale of the placeholder font.
///
/// This property determines the size of the placeholder label relative to the font size of the text field.
@property (nonatomic) CGFloat placeholderFontScale;

/// The view’s foreground color.
///
/// The default value for this property is a clear color.
@property (nonatomic, strong) UIColor * _Nullable foregroundColor;
@property (nonatomic, copy) NSString * _Nullable placeholder;
@property (nonatomic) CGRect bounds;
- (void)drawViewsForRect:(CGRect)rect;
- (void)animateViewsForTextEntry;
- (void)animateViewsForTextDisplay;
- (CGRect)editingRectForBounds:(CGRect)bounds;
- (CGRect)textRectForBounds:(CGRect)bounds;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



/// A MadokaTextField is a subclass of the TextFieldEffects object, is a control that displays an UITextField with a customizable visual effect around the edges of the control.
SWIFT_CLASS("_TtC16TextFieldEffects15MadokaTextField")
@interface MadokaTextField : TextFieldEffects

/// The color of the placeholder text.
///
/// This property applies a color to the complete placeholder string. The default value for this property is a black color.
@property (nonatomic, strong) UIColor * _Nonnull placeholderColor;

/// The color of the border.
///
/// This property applies a color to the lower edge of the control. The default value for this property is a clear color.
@property (nonatomic, strong) UIColor * _Nullable borderColor;

/// The scale of the placeholder font.
///
/// This property determines the size of the placeholder label relative to the font size of the text field.
@property (nonatomic) CGFloat placeholderFontScale;
@property (nonatomic, copy) NSString * _Nullable placeholder;
@property (nonatomic) CGRect bounds;
- (void)drawViewsForRect:(CGRect)rect;
- (void)animateViewsForTextEntry;
- (void)animateViewsForTextDisplay;
- (CGRect)editingRectForBounds:(CGRect)bounds;
- (CGRect)textRectForBounds:(CGRect)bounds;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



/// A MinoruTextField is a subclass of the TextFieldEffects object, is a control that displays an UITextField with a customizable visual effect around the edges of the control.
SWIFT_CLASS("_TtC16TextFieldEffects15MinoruTextField")
@interface MinoruTextField : TextFieldEffects

/// The color of the placeholder text.
///
/// This property applies a color to the complete placeholder string. The default value for this property is a black color.
@property (nonatomic, strong) UIColor * _Nonnull placeholderColor;
@property (nonatomic, strong) UIColor * _Nullable backgroundColor;

/// The scale of the placeholder font.
///
/// This property determines the size of the placeholder label relative to the font size of the text field.
@property (nonatomic) CGFloat placeholderFontScale;
@property (nonatomic, copy) NSString * _Nullable placeholder;
@property (nonatomic) CGRect bounds;
- (void)drawViewsForRect:(CGRect)rect;
- (void)animateViewsForTextEntry;
- (void)animateViewsForTextDisplay;
- (CGRect)editingRectForBounds:(CGRect)bounds;
- (CGRect)textRectForBounds:(CGRect)bounds;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end




/// A YokoTextField is a subclass of the TextFieldEffects object, is a control that displays an UITextField with a customizable 3D visual effect on the background of the control.
SWIFT_CLASS("_TtC16TextFieldEffects13YokoTextField")
@interface YokoTextField : TextFieldEffects

/// The color of the placeholder text.
///
/// This property applies a color to the complete placeholder string. The default value for this property is a black color.
@property (nonatomic, strong) UIColor * _Nullable placeholderColor;

/// The scale of the placeholder font.
///
/// This property determines the size of the placeholder label relative to the font size of the text field.
@property (nonatomic) CGFloat placeholderFontScale;

/// The view’s foreground color.
///
/// The default value for this property is a clear color.
@property (nonatomic, strong) UIColor * _Nonnull foregroundColor;
@property (nonatomic, copy) NSString * _Nullable placeholder;
@property (nonatomic) CGRect bounds;
- (void)drawViewsForRect:(CGRect)rect;
- (void)animateViewsForTextEntry;
- (void)animateViewsForTextDisplay;
- (CGRect)editingRectForBounds:(CGRect)bounds;
- (CGRect)textRectForBounds:(CGRect)bounds;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



/// An YoshikoTextField is a subclass of the TextFieldEffects object, is a control that displays an UITextField with a customizable visual effect around the edges and background of the control.
SWIFT_CLASS("_TtC16TextFieldEffects16YoshikoTextField")
@interface YoshikoTextField : TextFieldEffects

/// The size of the border.
///
/// This property applies a thickness to the border of the control. The default value for this property is 2 points.
@property (nonatomic) CGFloat borderSize;

/// The color of the border when it has content.
///
/// This property applies a color to the edges of the control. The default value for this property is a clear color.
@property (nonatomic, strong) UIColor * _Nonnull activeBorderColor;

/// The color of the border when it has no content.
///
/// This property applies a color to the edges of the control. The default value for this property is a clear color.
@property (nonatomic, strong) UIColor * _Nonnull inactiveBorderColor;

/// The color of the input's background when it has content. When it's not focused it reverts to the color of the inactiveBorderColor
///
/// This property applies a color to the background of the input.
@property (nonatomic, strong) UIColor * _Nonnull activeBackgroundColor;

/// The color of the placeholder text.
///
/// This property applies a color to the complete placeholder string. The default value for this property is a dark gray color.
@property (nonatomic, strong) UIColor * _Nonnull placeholderColor;

/// The scale of the placeholder font.
///
/// This property determines the size of the placeholder label relative to the font size of the text field.
@property (nonatomic) CGFloat placeholderFontScale;
@property (nonatomic, copy) NSString * _Nullable placeholder;
- (void)animateViewsForTextEntry;
- (void)animateViewsForTextDisplay;
@property (nonatomic) CGRect bounds;
- (void)drawViewsForRect:(CGRect)rect;
- (CGRect)placeholderRectForBounds:(CGRect)bounds;
- (CGRect)editingRectForBounds:(CGRect)bounds;
- (CGRect)textRectForBounds:(CGRect)bounds;
- (void)prepareForInterfaceBuilder;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
