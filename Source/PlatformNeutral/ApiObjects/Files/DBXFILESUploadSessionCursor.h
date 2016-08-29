///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESUploadSessionCursor;

/// 
/// The UploadSessionCursor struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESUploadSessionCursor : NSObject <DBXSerializable> 

/// The upload session ID (returned by uploadSessionStart).
@property (nonatomic, readonly, copy) NSString * _Nonnull sessionId;

/// The amount of data that has been uploaded so far. We use this to make sure
/// upload data isn't lost or duplicated in the event of a network error.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull offset;

/// 
/// Full constructor for the `DBXFILESUploadSessionCursor` struct (exposes all
/// instance variables).
/// 
/// - parameter sessionId: The upload session ID (returned by
/// :route:`upload_session/start`).
/// - parameter offset: The amount of data that has been uploaded so far. We use
/// this to make sure upload data isn't lost or duplicated in the event of a
/// network error.
/// 
/// - returns: An initialized `DBXFILESUploadSessionCursor` instance.
/// 
- (nonnull instancetype)initWithSessionId:(NSString * _Nonnull)sessionId offset:(NSNumber * _Nonnull)offset;

@end


/// 
/// The serialization class for the UploadSessionCursor struct.
/// 
@interface DBXFILESUploadSessionCursorSerializer : NSObject 

/// 
/// Serializes `DBXFILESUploadSessionCursor` instances.
/// 
///  - parameter instance: An instance of the `DBXFILESUploadSessionCursor` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXFILESUploadSessionCursor` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXFILESUploadSessionCursor * _Nonnull)instance;

/// 
/// Deserializes `DBXFILESUploadSessionCursor` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXFILESUploadSessionCursor` API object.
/// 
///  - returns: An instantiation of the `DBXFILESUploadSessionCursor` object.
/// 
+ (DBXFILESUploadSessionCursor * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end