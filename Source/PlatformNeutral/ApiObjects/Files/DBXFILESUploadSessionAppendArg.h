///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESUploadSessionAppendArg;
@class DBXFILESUploadSessionCursor;

/// 
/// The UploadSessionAppendArg struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESUploadSessionAppendArg : NSObject <DBXSerializable> 

/// Contains the upload session ID and the offset.
@property (nonatomic, readonly) DBXFILESUploadSessionCursor * _Nonnull cursor;

/// If true, the current session will be closed, at which point you won't be
/// able to call uploadSessionAppendV2 anymore with the current session.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull close;

/// 
/// Full constructor for the `DBXFILESUploadSessionAppendArg` struct (exposes
/// all instance variables).
/// 
/// - parameter cursor: Contains the upload session ID and the offset.
/// - parameter close: If true, the current session will be closed, at which
/// point you won't be able to call :route:`upload_session/append_v2` anymore
/// with the current session.
/// 
/// - returns: An initialized `DBXFILESUploadSessionAppendArg` instance.
/// 
- (nonnull instancetype)initWithCursor:(DBXFILESUploadSessionCursor * _Nonnull)cursor close:(NSNumber * _Nullable)close;

/// 
/// Convenience constructor for the `DBXFILESUploadSessionAppendArg` struct
/// (exposes only non-nullable instance variables with no default value).
/// 
/// - parameter cursor: Contains the upload session ID and the offset.
/// 
/// - returns: An initialized `DBXFILESUploadSessionAppendArg` instance.
/// 
- (nonnull instancetype)initWithCursor:(DBXFILESUploadSessionCursor * _Nonnull)cursor;

@end


/// 
/// The serialization class for the UploadSessionAppendArg struct.
/// 
@interface DBXFILESUploadSessionAppendArgSerializer : NSObject 

/// 
/// Serializes `DBXFILESUploadSessionAppendArg` instances.
/// 
///  - parameter instance: An instance of the `DBXFILESUploadSessionAppendArg`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXFILESUploadSessionAppendArg` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXFILESUploadSessionAppendArg * _Nonnull)instance;

/// 
/// Deserializes `DBXFILESUploadSessionAppendArg` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXFILESUploadSessionAppendArg` API object.
/// 
///  - returns: An instantiation of the `DBXFILESUploadSessionAppendArg` object.
/// 
+ (DBXFILESUploadSessionAppendArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end