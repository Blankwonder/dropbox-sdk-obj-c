///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGPermissionDeniedReason;

/// 
/// The PermissionDeniedReason union.
/// 
/// Possible reasons the user is denied a permission.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGPermissionDeniedReason : NSObject <DBXSerializable> 

/// The `DBXSHARINGPermissionDeniedReasonTag` enum type represents the possible
/// tag states with which the `DBXSHARINGPermissionDeniedReason` union can
/// exist.
typedef NS_ENUM(NSInteger, DBXSHARINGPermissionDeniedReasonTag) {
    /// User is not on the same team as the folder owner.
    DBXSHARINGPermissionDeniedReasonUserNotSameTeamAsOwner,

    /// User is prohibited by the owner from taking the action.
    DBXSHARINGPermissionDeniedReasonUserNotAllowedByOwner,

    /// Target is indirectly a member of the folder, for example by being part
    /// of a group.
    DBXSHARINGPermissionDeniedReasonTargetIsIndirectMember,

    /// Target is the owner of the folder.
    DBXSHARINGPermissionDeniedReasonTargetIsOwner,

    /// Target is the user itself.
    DBXSHARINGPermissionDeniedReasonTargetIsSelf,

    /// Target is not an active member of the team.
    DBXSHARINGPermissionDeniedReasonTargetNotActive,

    /// Folder is team folder for a limited team.
    DBXSHARINGPermissionDeniedReasonFolderIsLimitedTeamFolder,

    /// (no description).
    DBXSHARINGPermissionDeniedReasonOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGPermissionDeniedReasonTag tag;

/// 
/// Initializes union class with tag state of `UserNotSameTeamAsOwner`.
/// 
/// About the `UserNotSameTeamAsOwner` tag state: User is not on the same team
/// as the folder owner.
/// 
/// - returns: An initialized `DBXSHARINGPermissionDeniedReason` instance.
/// 
- (nonnull instancetype)initWithUserNotSameTeamAsOwner;

/// 
/// Initializes union class with tag state of `UserNotAllowedByOwner`.
/// 
/// About the `UserNotAllowedByOwner` tag state: User is prohibited by the owner
/// from taking the action.
/// 
/// - returns: An initialized `DBXSHARINGPermissionDeniedReason` instance.
/// 
- (nonnull instancetype)initWithUserNotAllowedByOwner;

/// 
/// Initializes union class with tag state of `TargetIsIndirectMember`.
/// 
/// About the `TargetIsIndirectMember` tag state: Target is indirectly a member
/// of the folder, for example by being part of a group.
/// 
/// - returns: An initialized `DBXSHARINGPermissionDeniedReason` instance.
/// 
- (nonnull instancetype)initWithTargetIsIndirectMember;

/// 
/// Initializes union class with tag state of `TargetIsOwner`.
/// 
/// About the `TargetIsOwner` tag state: Target is the owner of the folder.
/// 
/// - returns: An initialized `DBXSHARINGPermissionDeniedReason` instance.
/// 
- (nonnull instancetype)initWithTargetIsOwner;

/// 
/// Initializes union class with tag state of `TargetIsSelf`.
/// 
/// About the `TargetIsSelf` tag state: Target is the user itself.
/// 
/// - returns: An initialized `DBXSHARINGPermissionDeniedReason` instance.
/// 
- (nonnull instancetype)initWithTargetIsSelf;

/// 
/// Initializes union class with tag state of `TargetNotActive`.
/// 
/// About the `TargetNotActive` tag state: Target is not an active member of the
/// team.
/// 
/// - returns: An initialized `DBXSHARINGPermissionDeniedReason` instance.
/// 
- (nonnull instancetype)initWithTargetNotActive;

/// 
/// Initializes union class with tag state of `FolderIsLimitedTeamFolder`.
/// 
/// About the `FolderIsLimitedTeamFolder` tag state: Folder is team folder for a
/// limited team.
/// 
/// - returns: An initialized `DBXSHARINGPermissionDeniedReason` instance.
/// 
- (nonnull instancetype)initWithFolderIsLimitedTeamFolder;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXSHARINGPermissionDeniedReason` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Retrieves whether the union's current tag state has value
/// `UserNotSameTeamAsOwner`.
/// 
/// - returns: Whether the union's current tag state has value
/// `UserNotSameTeamAsOwner`.
/// 
- (BOOL)isUserNotSameTeamAsOwner;

/// 
/// Retrieves whether the union's current tag state has value
/// `UserNotAllowedByOwner`.
/// 
/// - returns: Whether the union's current tag state has value
/// `UserNotAllowedByOwner`.
/// 
- (BOOL)isUserNotAllowedByOwner;

/// 
/// Retrieves whether the union's current tag state has value
/// `TargetIsIndirectMember`.
/// 
/// - returns: Whether the union's current tag state has value
/// `TargetIsIndirectMember`.
/// 
- (BOOL)isTargetIsIndirectMember;

/// 
/// Retrieves whether the union's current tag state has value `TargetIsOwner`.
/// 
/// - returns: Whether the union's current tag state has value `TargetIsOwner`.
/// 
- (BOOL)isTargetIsOwner;

/// 
/// Retrieves whether the union's current tag state has value `TargetIsSelf`.
/// 
/// - returns: Whether the union's current tag state has value `TargetIsSelf`.
/// 
- (BOOL)isTargetIsSelf;

/// 
/// Retrieves whether the union's current tag state has value `TargetNotActive`.
/// 
/// - returns: Whether the union's current tag state has value
/// `TargetNotActive`.
/// 
- (BOOL)isTargetNotActive;

/// 
/// Retrieves whether the union's current tag state has value
/// `FolderIsLimitedTeamFolder`.
/// 
/// - returns: Whether the union's current tag state has value
/// `FolderIsLimitedTeamFolder`.
/// 
- (BOOL)isFolderIsLimitedTeamFolder;

/// 
/// Retrieves whether the union's current tag state has value `Other`.
/// 
/// - returns: Whether the union's current tag state has value `Other`.
/// 
- (BOOL)isOther;

/// 
/// Retrieves string value of union's current tag state.
/// 
/// - returns: A human-readable string representing the union's current tag
/// state.
/// 
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXSHARINGPermissionDeniedReason` union.
/// 
@interface DBXSHARINGPermissionDeniedReasonSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGPermissionDeniedReason` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGPermissionDeniedReason`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGPermissionDeniedReason` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGPermissionDeniedReason * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGPermissionDeniedReason` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGPermissionDeniedReason` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGPermissionDeniedReason`
/// object.
/// 
+ (DBXSHARINGPermissionDeniedReason * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end