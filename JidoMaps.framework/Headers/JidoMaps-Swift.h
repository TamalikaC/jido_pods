// Generated by Apple Swift version 4.2 effective-4.1.50 (swiftlang-1000.11.37.1 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
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
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
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
# if __has_attribute(objc_subclassing_restricted)
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
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import CoreGraphics;
@import CoreML;
@import ObjectiveC;
@import SceneKit;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="JidoMaps",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC8JidoMaps14DetectedObject")
@interface DetectedObject : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) SCNVector3 center;
@property (nonatomic, readonly) float width;
@property (nonatomic, readonly) float height;
@property (nonatomic, readonly) float depth;
@property (nonatomic, readonly) float orientation;
@property (nonatomic, readonly) NSInteger id;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

enum SessionMode : NSInteger;
@class ARSession;
@class MapAsset;
enum MapStatus : NSInteger;
@class ARAnchor;
@class ARFrame;
@class Map;
@class Quaternion;
@class UnityMultiplayerTransform;

SWIFT_CLASS("_TtC8JidoMaps11JidoSession")
@interface JidoSession : NSObject
@property (nonatomic, readonly) enum SessionMode jidoSessionMode;
@property (nonatomic, readonly) BOOL isLocalizationMode;
@property (nonatomic, readonly, copy) NSString * _Nullable currentSessionUUID;
@property (nonatomic, readonly, copy) NSString * _Nullable mappingUUID;
@property (nonatomic, readonly, copy) NSString * _Nullable localizationUUID;
@property (nonatomic, readonly, copy) NSString * _Nonnull mapID;
@property (nonatomic, readonly, copy) NSString * _Nonnull userID;
@property (nonatomic) float fpsInput;
@property (nonatomic) float fpsDataProcess1;
@property (nonatomic) float fpsDataProcess2;
- (nonnull instancetype)initWithArSession:(ARSession * _Nonnull)arSession mapMode:(enum SessionMode)mapMode userID:(NSString * _Nonnull)userID mapID:(NSString * _Nonnull)mapID developerKey:(NSString * _Nonnull)developerKey screenHeight:(CGFloat)screenHeight screenWidth:(CGFloat)screenWidth assetsFoundCallback:(void (^ _Nonnull)(NSArray<MapAsset *> * _Nonnull))assetsFoundCallback progressCallback:(void (^ _Nonnull)(NSInteger))progressCallback statusCallback:(void (^ _Nonnull)(enum MapStatus))statusCallback objectDetectedCallback:(void (^ _Nonnull)(NSArray<DetectedObject *> * _Nonnull))objectDetectedCallback OBJC_DESIGNATED_INITIALIZER;
- (void)uploadDetailedMapWithProgressCallback:(void (^ _Nonnull)(float))progressCallback uploadCompleteCallback:(void (^ _Nonnull)(void))uploadCompleteCallback;
- (void)dispose;
- (void)planeDetectedWithAnchor:(ARAnchor * _Nonnull)anchor;
- (void)planeUpdatedWithAnchor:(ARAnchor * _Nonnull)anchor;
- (void)planeRemovedWithAnchor:(ARAnchor * _Nonnull)anchor;
- (void)updateWithFrame:(ARFrame * _Nonnull)frame;
- (BOOL)storePlacementWithAssets:(NSArray<MapAsset *> * _Nonnull)assets callback:(void (^ _Nonnull)(BOOL))callback SWIFT_WARN_UNUSED_RESULT;
- (BOOL)listNearbyMapsWithUserID:(NSString * _Nullable)userID longitude:(double)longitude latitude:(double)latitude longitudeDelta:(double)longitudeDelta latitudeDelta:(double)latitudeDelta mapsFoundCallback:(void (^ _Nonnull)(NSArray<Map *> * _Nonnull))mapsFoundCallback SWIFT_WARN_UNUSED_RESULT;
- (void)session:(ARSession * _Nonnull)session didAdd:(NSArray<ARAnchor *> * _Nonnull)anchors;
- (void)session:(ARSession * _Nonnull)session didUpdate:(NSArray<ARAnchor *> * _Nonnull)anchors;
- (void)session:(ARSession * _Nonnull)session didRemove:(NSArray<ARAnchor *> * _Nonnull)anchors;
+ (UnityMultiplayerTransform * _Nonnull)unityMultiplayerSyncWithLocalA:(vector_float3)localA localB:(vector_float3)localB remoteA:(vector_float3)remoteA remoteB:(vector_float3)remoteB rotationRemote:(Quaternion * _Nullable)rotationRemote SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


@interface JidoSession (SWIFT_EXTENSION(JidoMaps))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger TIMEOUT_THRESHOLD;)
+ (NSInteger)TIMEOUT_THRESHOLD SWIFT_WARN_UNUSED_RESULT;
+ (void)setTIMEOUT_THRESHOLD:(NSInteger)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL USE_BETA_ALGO;)
+ (BOOL)USE_BETA_ALGO SWIFT_WARN_UNUSED_RESULT;
+ (void)setUSE_BETA_ALGO:(BOOL)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger RETRIEVE_ASSETS_INTERVAL;)
+ (NSInteger)RETRIEVE_ASSETS_INTERVAL SWIFT_WARN_UNUSED_RESULT;
+ (void)setRETRIEVE_ASSETS_INTERVAL:(NSInteger)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL BUILD_HEAVY_MAP;)
+ (BOOL)BUILD_HEAVY_MAP SWIFT_WARN_UNUSED_RESULT;
+ (void)setBUILD_HEAVY_MAP:(BOOL)value;
@end




SWIFT_CLASS("_TtC8JidoMaps3Map")
@interface Map : NSObject
@property (nonatomic, copy) NSString * _Nonnull userID;
@property (nonatomic, copy) NSString * _Nonnull mapID;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double altitude;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double verticalAccuracy;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class SCNNode;

SWIFT_CLASS("_TtC8JidoMaps8MapAsset")
@interface MapAsset : NSObject
@property (nonatomic, copy) NSString * _Nonnull assetID;
@property (nonatomic, copy) NSString * _Nonnull uuid;
@property (nonatomic) SCNVector3 position;
@property (nonatomic) float orientation;
@property (nonatomic) float confidence;
@property (nonatomic, copy) NSString * _Nonnull matrix;
@property (nonatomic) BOOL isDownloaded;
@property (nonatomic, strong) SCNNode * _Nullable assetNode;
@property (nonatomic) float assetScale;
- (nonnull instancetype)init:(NSString * _Nonnull)assetID :(SCNVector3)position :(float)orientation :(float)scale :(NSString * _Nonnull)uuid;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, MapStatus, closed) {
  MapStatusInitialized = 0,
  MapStatusNoMapFound = 1,
  MapStatusNetworkFailure = 2,
  MapStatusAuthenticationError = 3,
  MapStatusServerError = 4,
  MapStatusDeveloperKeyMissingOrMalformed = 5,
  MapStatusLocalizationTimeout = 6,
  MapStatusLocalizationError = 7,
  MapStatusNoAssetFound = 8,
  MapStatusConfigError = 9,
};


SWIFT_CLASS("_TtC8JidoMaps10Quaternion")
@interface Quaternion : NSObject
@property (nonatomic, readonly) float x;
@property (nonatomic, readonly) float y;
@property (nonatomic, readonly) float z;
@property (nonatomic, readonly) float w;
- (nonnull instancetype)initWithX:(float)x y:(float)y z:(float)z w:(float)w OBJC_DESIGNATED_INITIALIZER;
+ (Quaternion * _Nonnull)eulerWithX:(float)x y:(float)y z:(float)z SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end



typedef SWIFT_ENUM(NSInteger, SessionMode, closed) {
  SessionModeMapping = 0,
  SessionModeLocalization = 1,
};










SWIFT_CLASS("_TtC8JidoMaps25UnityMultiplayerTransform")
@interface UnityMultiplayerTransform : NSObject
@property (nonatomic, readonly, strong) Quaternion * _Nonnull rotationRemoteToLocal;
@property (nonatomic, readonly) vector_float3 offsetLocalToRemote;
@property (nonatomic, readonly) float updateError;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
