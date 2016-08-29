///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMGroupMembersSelectorError;

/// 
/// The GroupMembersSelectorError union.
/// 
/// Error that can be raised when GroupMembersSelector is used, and the users
/// are required to be members of the specified group.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMGroupMembersSelectorError : NSObject <DBXSerializable> 

/// The `DBXTEAMGroupMembersSelectorErrorTag` enum type represents the possible
/// tag states with which the `DBXTEAMGroupMembersSelectorError` union can
/// exist.
typedef NS_ENUM(NSInteger, DBXTEAMGroupMembersSelectorErrorTag) {
    /// No matching group found. No groups match the specified group ID.
    DBXTEAMGroupMembersSelectorErrorGroupNotFound,

    /// (no description).
    DBXTEAMGroupMembersSelectorErrorOther,

    /// At least one of the specified users is not a member of the group.
    DBXTEAMGroupMembersSelectorErrorMemberNotInGroup,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMGroupMembersSelectorErrorTag tag;

/// 
/// Initializes union class with tag state of `GroupNotFound`.
/// 
/// About the `GroupNotFound` tag state: No matching group found. No groups
/// match the specified group ID.
/// 
/// - returns: An initialized `DBXTEAMGroupMembersSelectorError` instance.
/// 
- (nonnull instancetype)initWithGroupNotFound;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXTEAMGroupMembersSelectorError` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Initializes union class with tag state of `MemberNotInGroup`.
/// 
/// About the `MemberNotInGroup` tag state: At least one of the specified users
/// is not a member of the group.
/// 
/// - returns: An initialized `DBXTEAMGroupMembersSelectorError` instance.
/// 
- (nonnull instancetype)initWithMemberNotInGroup;

/// 
/// Retrieves whether the union's current tag state has value `GroupNotFound`.
/// 
/// - returns: Whether the union's current tag state has value `GroupNotFound`.
/// 
- (BOOL)isGroupNotFound;

/// 
/// Retrieves whether the union's current tag state has value `Other`.
/// 
/// - returns: Whether the union's current tag state has value `Other`.
/// 
- (BOOL)isOther;

/// 
/// Retrieves whether the union's current tag state has value
/// `MemberNotInGroup`.
/// 
/// - returns: Whether the union's current tag state has value
/// `MemberNotInGroup`.
/// 
- (BOOL)isMemberNotInGroup;

/// 
/// Retrieves string value of union's current tag state.
/// 
/// - returns: A human-readable string representing the union's current tag
/// state.
/// 
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXTEAMGroupMembersSelectorError` union.
/// 
@interface DBXTEAMGroupMembersSelectorErrorSerializer : NSObject 

/// 
/// Serializes `DBXTEAMGroupMembersSelectorError` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMGroupMembersSelectorError`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMGroupMembersSelectorError` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMGroupMembersSelectorError * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMGroupMembersSelectorError` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMGroupMembersSelectorError` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMGroupMembersSelectorError`
/// object.
/// 
+ (DBXTEAMGroupMembersSelectorError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end