// Generated by Apple Swift version 2.1 (swiftlang-700.1.101.6 clang-700.1.76)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

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
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"


/// Encapsulates the failure message that matchers can report to the end user.
///
/// This is shared state between Nimble and matchers that mutate this value.
SWIFT_CLASS("_TtC6Nimble14FailureMessage")
@interface FailureMessage : NSObject
@property (nonatomic, copy) NSString * __nonnull expected;
@property (nonatomic, copy) NSString * __nullable actualValue;
@property (nonatomic, copy) NSString * __nonnull to;
@property (nonatomic, copy) NSString * __nonnull postfixMessage;
@property (nonatomic, copy) NSString * __nonnull postfixActual;
@property (nonatomic, copy) NSString * __nullable userDescription;
@property (nonatomic, copy) NSString * __nonnull stringValue;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithStringValue:(NSString * __nonnull)stringValue OBJC_DESIGNATED_INITIALIZER;
@end



/// Protocol for types that support only beEmpty(), haveCount() matchers
SWIFT_PROTOCOL("_TtP6Nimble13NMBCollection_")
@protocol NMBCollection
@property (nonatomic, readonly) NSInteger count;
@end



/// Protocol for types to support beLessThan(), beLessThanOrEqualTo(), beGreaterThan(), beGreaterThanOrEqualTo(), and equal() matchers.
///
/// Types that conform to Swift's Comparable protocol will work implicitly too
SWIFT_PROTOCOL("_TtP6Nimble13NMBComparable_")
@protocol NMBComparable
- (NSComparisonResult)NMB_compare:(id <NMBComparable> __null_unspecified)otherObject;
@end



/// Protocol for types that support contain() matcher.
SWIFT_PROTOCOL("_TtP6Nimble12NMBContainer_")
@protocol NMBContainer
- (BOOL)containsObject:(id __null_unspecified)object;
@end



/// Protocol for types to support beCloseTo() matcher
SWIFT_PROTOCOL("_TtP6Nimble20NMBDoubleConvertible_")
@protocol NMBDoubleConvertible
@property (nonatomic, readonly) double doubleValue;
@end

@protocol NMBMatcher;

SWIFT_CLASS("_TtC6Nimble14NMBExpectation")
@interface NMBExpectation : NSObject
- (nonnull instancetype)initWithActualBlock:(NSObject * __null_unspecified (^ __nonnull)(void))actualBlock negative:(BOOL)negative file:(NSString * __nonnull)file line:(NSUInteger)line OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NMBExpectation * __nonnull (^ __nonnull withTimeout)(NSTimeInterval);
@property (nonatomic, readonly, copy) void (^ __nonnull to)(id <NMBMatcher> __nonnull);
@property (nonatomic, readonly, copy) void (^ __nonnull toWithDescription)(id <NMBMatcher> __nonnull, NSString * __nonnull);
@property (nonatomic, readonly, copy) void (^ __nonnull toNot)(id <NMBMatcher> __nonnull);
@property (nonatomic, readonly, copy) void (^ __nonnull toNotWithDescription)(id <NMBMatcher> __nonnull, NSString * __nonnull);
@property (nonatomic, readonly, copy) void (^ __nonnull notTo)(id <NMBMatcher> __nonnull);
@property (nonatomic, readonly, copy) void (^ __nonnull notToWithDescription)(id <NMBMatcher> __nonnull, NSString * __nonnull);
@property (nonatomic, readonly, copy) void (^ __nonnull toEventually)(id <NMBMatcher> __nonnull);
@property (nonatomic, readonly, copy) void (^ __nonnull toEventuallyWithDescription)(id <NMBMatcher> __nonnull, NSString * __nonnull);
@property (nonatomic, readonly, copy) void (^ __nonnull toEventuallyNot)(id <NMBMatcher> __nonnull);
@property (nonatomic, readonly, copy) void (^ __nonnull toEventuallyNotWithDescription)(id <NMBMatcher> __nonnull, NSString * __nonnull);
@property (nonatomic, readonly, copy) void (^ __nonnull toNotEventually)(id <NMBMatcher> __nonnull);
@property (nonatomic, readonly, copy) void (^ __nonnull toNotEventuallyWithDescription)(id <NMBMatcher> __nonnull, NSString * __nonnull);
+ (void)failWithMessage:(NSString * __nonnull)message file:(NSString * __nonnull)file line:(NSUInteger)line;
@end

@class SourceLocation;


/// Objective-C interface to the Swift variant of Matcher.
SWIFT_PROTOCOL("_TtP6Nimble10NMBMatcher_")
@protocol NMBMatcher
- (BOOL)matches:(NSObject * __null_unspecified (^ __nonnull)(void))actualBlock failureMessage:(FailureMessage * __nonnull)failureMessage location:(SourceLocation * __nonnull)location;
- (BOOL)doesNotMatch:(NSObject * __null_unspecified (^ __nonnull)(void))actualBlock failureMessage:(FailureMessage * __nonnull)failureMessage location:(SourceLocation * __nonnull)location;
@end


SWIFT_CLASS("_TtC6Nimble23NMBObjCBeCloseToMatcher")
@interface NMBObjCBeCloseToMatcher : NSObject <NMBMatcher>
- (BOOL)matches:(NSObject * __null_unspecified (^ __nonnull)(void))actualExpression failureMessage:(FailureMessage * __nonnull)failureMessage location:(SourceLocation * __nonnull)location;
- (BOOL)doesNotMatch:(NSObject * __null_unspecified (^ __nonnull)(void))actualExpression failureMessage:(FailureMessage * __nonnull)failureMessage location:(SourceLocation * __nonnull)location;
@property (nonatomic, readonly, copy) NMBObjCBeCloseToMatcher * __nonnull (^ __nonnull within)(double);
@end


SWIFT_CLASS("_TtC6Nimble14NMBObjCMatcher")
@interface NMBObjCMatcher : NSObject <NMBMatcher>
- (BOOL)matches:(NSObject * __null_unspecified (^ __nonnull)(void))actualBlock failureMessage:(FailureMessage * __nonnull)failureMessage location:(SourceLocation * __nonnull)location;
- (BOOL)doesNotMatch:(NSObject * __null_unspecified (^ __nonnull)(void))actualBlock failureMessage:(FailureMessage * __nonnull)failureMessage location:(SourceLocation * __nonnull)location;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * __nonnull)beLessThanMatcher:(id <NMBComparable> __nullable)expected;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (id <NMBMatcher> __nonnull)beAKindOfMatcher:(Class __nonnull)expected;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (id <NMBMatcher> __nonnull)beAnInstanceOfMatcher:(Class __nonnull)expected;
@end

@class NSNumber;

@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * __nonnull)haveCountMatcher:(NSNumber * __nonnull)expected;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * __nonnull)allPassMatcher:(NMBObjCMatcher * __nonnull)matcher;
@end

@class NMBObjCRaiseExceptionMatcher;

@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCRaiseExceptionMatcher * __nonnull)raiseExceptionMatcher;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * __nonnull)beLessThanOrEqualToMatcher:(id <NMBComparable> __nullable)expected;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * __nonnull)endWithMatcher:(id __nonnull)expected;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * __nonnull)beNilMatcher;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * __nonnull)beEmptyMatcher;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * __nonnull)beIdenticalToMatcher:(NSObject * __nullable)expected;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * __nonnull)beginWithMatcher:(id __nonnull)expected;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * __nonnull)beGreaterThanOrEqualToMatcher:(id <NMBComparable> __nullable)expected;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (id <NMBMatcher> __nonnull)equalMatcher:(NSObject * __nonnull)expected;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * __nonnull)containMatcher:(NSArray<NSObject *> * __nonnull)expected;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * __nonnull)beGreaterThanMatcher:(id <NMBComparable> __nullable)expected;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCBeCloseToMatcher * __nonnull)beCloseToMatcher:(NSNumber * __nonnull)expected within:(double)within;
@end

@class NSString;

@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (id <NMBMatcher> __nonnull)matchMatcher:(NSString * __nonnull)expected;
@end


@interface NMBObjCMatcher (SWIFT_EXTENSION(Nimble))
+ (NMBObjCMatcher * __nonnull)beTruthyMatcher;
+ (NMBObjCMatcher * __nonnull)beFalsyMatcher;
+ (NMBObjCMatcher * __nonnull)beTrueMatcher;
+ (NMBObjCMatcher * __nonnull)beFalseMatcher;
@end

@class NSDictionary;
@class NSException;

SWIFT_CLASS("_TtC6Nimble28NMBObjCRaiseExceptionMatcher")
@interface NMBObjCRaiseExceptionMatcher : NSObject <NMBMatcher>
- (BOOL)matches:(NSObject * __null_unspecified (^ __nonnull)(void))actualBlock failureMessage:(FailureMessage * __nonnull)failureMessage location:(SourceLocation * __nonnull)location;
- (BOOL)doesNotMatch:(NSObject * __null_unspecified (^ __nonnull)(void))actualBlock failureMessage:(FailureMessage * __nonnull)failureMessage location:(SourceLocation * __nonnull)location;
@property (nonatomic, readonly, copy) NMBObjCRaiseExceptionMatcher * __nonnull (^ __nonnull named)(NSString * __nonnull);
@property (nonatomic, readonly, copy) NMBObjCRaiseExceptionMatcher * __nonnull (^ __nonnull reason)(NSString * __nullable);
@property (nonatomic, readonly, copy) NMBObjCRaiseExceptionMatcher * __nonnull (^ __nonnull userInfo)(NSDictionary * __nullable);
@property (nonatomic, readonly, copy) NMBObjCRaiseExceptionMatcher * __nonnull (^ __nonnull satisfyingBlock)(void (^ __nullable)(NSException * __nonnull));
@end



/// Protocol for types that support beginWith(), endWith(), beEmpty() matchers
SWIFT_PROTOCOL("_TtP6Nimble20NMBOrderedCollection_")
@protocol NMBOrderedCollection <NMBCollection>
- (NSInteger)indexOfObject:(id __null_unspecified)object;
@end


@interface NSArray (SWIFT_EXTENSION(Nimble)) <NMBContainer>
@end


@interface NSArray (SWIFT_EXTENSION(Nimble)) <NMBOrderedCollection, NMBCollection>
@end


@interface NSArray (SWIFT_EXTENSION(Nimble))
@end


@interface NSDate (SWIFT_EXTENSION(Nimble)) <NMBDoubleConvertible>
@property (nonatomic, readonly) double doubleValue;
@end


@interface NSDictionary (SWIFT_EXTENSION(Nimble)) <NMBCollection>
@end


@interface NSHashTable (SWIFT_EXTENSION(Nimble)) <NMBCollection>
@end


@interface NSHashTable (SWIFT_EXTENSION(Nimble)) <NMBContainer>
@end


@interface NSMapTable (SWIFT_EXTENSION(Nimble)) <NMBCollection>
@end


@interface NSNumber (SWIFT_EXTENSION(Nimble)) <NMBDoubleConvertible>
@end


@interface NSNumber (SWIFT_EXTENSION(Nimble)) <NMBComparable>
- (NSComparisonResult)NMB_compare:(id <NMBComparable> __null_unspecified)otherObject;
@end


@interface NSSet (SWIFT_EXTENSION(Nimble)) <NMBContainer>
@end


@interface NSSet (SWIFT_EXTENSION(Nimble)) <NMBCollection>
@end


@interface NSString (SWIFT_EXTENSION(Nimble)) <NMBComparable>
- (NSComparisonResult)NMB_compare:(id <NMBComparable> __null_unspecified)otherObject;
@end


SWIFT_CLASS("_TtC6Nimble14SourceLocation")
@interface SourceLocation : NSObject
@property (nonatomic, readonly, copy) NSString * __nonnull file;
@property (nonatomic, readonly) NSUInteger line;
@property (nonatomic, readonly, copy) NSString * __nonnull description;
@end

#pragma clang diagnostic pop
