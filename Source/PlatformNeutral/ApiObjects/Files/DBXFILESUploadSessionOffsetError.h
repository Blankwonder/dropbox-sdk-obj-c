///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESUploadSessionOffsetError;

/// 
/// The UploadSessionOffsetError struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESUploadSessionOffsetError : NSObject <DBXSerializable> 

/// The offset up to which data has been collected.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull correctOffset;

/// 
/// Full constructor for the `DBXFILESUploadSessionOffsetError` struct (exposes
/// all instance variables).
/// 
/// - parameter correctOffset: The offset up to which data has been collected.
/// 
/// - returns: An initialized `DBXFILESUploadSessionOffsetError` instance.
/// 
- (nonnull instancetype)initWithCorrectOffset:(NSNumber * _Nonnull)correctOffset;

@end


/// 
/// The serialization class for the UploadSessionOffsetError struct.
/// 
@interface DBXFILESUploadSessionOffsetErrorSerializer : NSObject 

/// 
/// Serializes `DBXFILESUploadSessionOffsetError` instances.
/// 
///  - parameter instance: An instance of the `DBXFILESUploadSessionOffsetError`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXFILESUploadSessionOffsetError` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXFILESUploadSessionOffsetError * _Nonnull)instance;

/// 
/// Deserializes `DBXFILESUploadSessionOffsetError` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXFILESUploadSessionOffsetError` API object.
/// 
///  - returns: An instantiation of the `DBXFILESUploadSessionOffsetError`
/// object.
/// 
+ (DBXFILESUploadSessionOffsetError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end