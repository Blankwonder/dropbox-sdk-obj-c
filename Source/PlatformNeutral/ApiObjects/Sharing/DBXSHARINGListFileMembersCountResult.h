///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGListFileMembersCountResult;
@class DBXSHARINGSharedFileMembers;

/// 
/// The ListFileMembersCountResult struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGListFileMembersCountResult : NSObject <DBXSerializable> 

/// A list of members on this file.
@property (nonatomic, readonly) DBXSHARINGSharedFileMembers * _Nonnull members;

/// The number of members on this file. This does not include inherited members
@property (nonatomic, readonly, copy) NSNumber * _Nonnull memberCount;

/// 
/// Full constructor for the `DBXSHARINGListFileMembersCountResult` struct
/// (exposes all instance variables).
/// 
/// - parameter members: A list of members on this file.
/// - parameter memberCount: The number of members on this file. This does not
/// include inherited members
/// 
/// - returns: An initialized `DBXSHARINGListFileMembersCountResult` instance.
/// 
- (nonnull instancetype)initWithMembers:(DBXSHARINGSharedFileMembers * _Nonnull)members memberCount:(NSNumber * _Nonnull)memberCount;

@end


/// 
/// The serialization class for the ListFileMembersCountResult struct.
/// 
@interface DBXSHARINGListFileMembersCountResultSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGListFileMembersCountResult` instances.
/// 
///  - parameter instance: An instance of the
/// `DBXSHARINGListFileMembersCountResult` API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGListFileMembersCountResult` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGListFileMembersCountResult * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGListFileMembersCountResult` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGListFileMembersCountResult` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGListFileMembersCountResult`
/// object.
/// 
+ (DBXSHARINGListFileMembersCountResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end