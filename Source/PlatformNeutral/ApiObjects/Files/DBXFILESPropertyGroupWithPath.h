///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESPropertyGroupWithPath;
@class DBXPROPERTIESPropertyGroup;

/// 
/// The PropertyGroupWithPath struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESPropertyGroupWithPath : NSObject <DBXSerializable> 

/// A unique identifier for the file.
@property (nonatomic, readonly, copy) NSString * _Nonnull path;

/// Filled custom property templates associated with a file.
@property (nonatomic, readonly) NSArray<DBXPROPERTIESPropertyGroup *> * _Nonnull propertyGroups;

/// 
/// Full constructor for the `DBXFILESPropertyGroupWithPath` struct (exposes all
/// instance variables).
/// 
/// - parameter path: A unique identifier for the file.
/// - parameter propertyGroups: Filled custom property templates associated with
/// a file.
/// 
/// - returns: An initialized `DBXFILESPropertyGroupWithPath` instance.
/// 
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path propertyGroups:(NSArray<DBXPROPERTIESPropertyGroup *> * _Nonnull)propertyGroups;

@end


/// 
/// The serialization class for the PropertyGroupWithPath struct.
/// 
@interface DBXFILESPropertyGroupWithPathSerializer : NSObject 

/// 
/// Serializes `DBXFILESPropertyGroupWithPath` instances.
/// 
///  - parameter instance: An instance of the `DBXFILESPropertyGroupWithPath`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXFILESPropertyGroupWithPath` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXFILESPropertyGroupWithPath * _Nonnull)instance;

/// 
/// Deserializes `DBXFILESPropertyGroupWithPath` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXFILESPropertyGroupWithPath` API object.
/// 
///  - returns: An instantiation of the `DBXFILESPropertyGroupWithPath` object.
/// 
+ (DBXFILESPropertyGroupWithPath * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end