///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESFileMetadata;
@class DBXFILESListRevisionsResult;

/// 
/// The ListRevisionsResult struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESListRevisionsResult : NSObject <DBXSerializable> 

/// If the file is deleted.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull isDeleted;

/// The revisions for the file. Only non-delete revisions will show up here.
@property (nonatomic, readonly) NSArray<DBXFILESFileMetadata *> * _Nonnull entries;

/// 
/// Full constructor for the `DBXFILESListRevisionsResult` struct (exposes all
/// instance variables).
/// 
/// - parameter isDeleted: If the file is deleted.
/// - parameter entries: The revisions for the file. Only non-delete revisions
/// will show up here.
/// 
/// - returns: An initialized `DBXFILESListRevisionsResult` instance.
/// 
- (nonnull instancetype)initWithIsDeleted:(NSNumber * _Nonnull)isDeleted entries:(NSArray<DBXFILESFileMetadata *> * _Nonnull)entries;

@end


/// 
/// The serialization class for the ListRevisionsResult struct.
/// 
@interface DBXFILESListRevisionsResultSerializer : NSObject 

/// 
/// Serializes `DBXFILESListRevisionsResult` instances.
/// 
///  - parameter instance: An instance of the `DBXFILESListRevisionsResult` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXFILESListRevisionsResult` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXFILESListRevisionsResult * _Nonnull)instance;

/// 
/// Deserializes `DBXFILESListRevisionsResult` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXFILESListRevisionsResult` API object.
/// 
///  - returns: An instantiation of the `DBXFILESListRevisionsResult` object.
/// 
+ (DBXFILESListRevisionsResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end