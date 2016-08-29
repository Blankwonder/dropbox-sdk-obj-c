///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMMembersRemoveError;

/// 
/// The MembersRemoveError union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMMembersRemoveError : NSObject <DBXSerializable> 

/// The `DBXTEAMMembersRemoveErrorTag` enum type represents the possible tag
/// states with which the `DBXTEAMMembersRemoveError` union can exist.
typedef NS_ENUM(NSInteger, DBXTEAMMembersRemoveErrorTag) {
    /// No matching user found. The provided team_member_id, email, or
    /// external_id does not exist on this team.
    DBXTEAMMembersRemoveErrorUserNotFound,

    /// The user is not a member of the team.
    DBXTEAMMembersRemoveErrorUserNotInTeam,

    /// (no description).
    DBXTEAMMembersRemoveErrorOther,

    /// The user is the last admin of the team, so it cannot be removed from it.
    DBXTEAMMembersRemoveErrorRemoveLastAdmin,

    /// Expected removed user and transfer_dest user to be different
    DBXTEAMMembersRemoveErrorRemovedAndTransferDestShouldDiffer,

    /// Expected removed user and transfer_admin user to be different.
    DBXTEAMMembersRemoveErrorRemovedAndTransferAdminShouldDiffer,

    /// No matching user found for the argument transfer_dest_id.
    DBXTEAMMembersRemoveErrorTransferDestUserNotFound,

    /// The provided transfer_dest_id does not exist on this team.
    DBXTEAMMembersRemoveErrorTransferDestUserNotInTeam,

    /// No matching user found for the argument transfer_admin_id.
    DBXTEAMMembersRemoveErrorTransferAdminUserNotFound,

    /// The provided transfer_admin_id does not exist on this team.
    DBXTEAMMembersRemoveErrorTransferAdminUserNotInTeam,

    /// The transfer_admin_id argument must be provided when file transfer is
    /// requested.
    DBXTEAMMembersRemoveErrorUnspecifiedTransferAdminId,

    /// Specified transfer_admin user is not a team admin.
    DBXTEAMMembersRemoveErrorTransferAdminIsNotAdmin,

    /// Cannot keep account and transfer the data to another user at the same
    /// time.
    DBXTEAMMembersRemoveErrorCannotKeepAccountAndTransfer,

    /// Cannot keep account and delete the data at the same time.
    DBXTEAMMembersRemoveErrorCannotKeepAccountAndDeleteData,

    /// The email address of the user is too long to be disabled.
    DBXTEAMMembersRemoveErrorEmailAddressTooLongToBeDisabled,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMMembersRemoveErrorTag tag;

/// 
/// Initializes union class with tag state of `UserNotFound`.
/// 
/// About the `UserNotFound` tag state: No matching user found. The provided
/// team_member_id, email, or external_id does not exist on this team.
/// 
/// - returns: An initialized `DBXTEAMMembersRemoveError` instance.
/// 
- (nonnull instancetype)initWithUserNotFound;

/// 
/// Initializes union class with tag state of `UserNotInTeam`.
/// 
/// About the `UserNotInTeam` tag state: The user is not a member of the team.
/// 
/// - returns: An initialized `DBXTEAMMembersRemoveError` instance.
/// 
- (nonnull instancetype)initWithUserNotInTeam;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXTEAMMembersRemoveError` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Initializes union class with tag state of `RemoveLastAdmin`.
/// 
/// About the `RemoveLastAdmin` tag state: The user is the last admin of the
/// team, so it cannot be removed from it.
/// 
/// - returns: An initialized `DBXTEAMMembersRemoveError` instance.
/// 
- (nonnull instancetype)initWithRemoveLastAdmin;

/// 
/// Initializes union class with tag state of
/// `RemovedAndTransferDestShouldDiffer`.
/// 
/// About the `RemovedAndTransferDestShouldDiffer` tag state: Expected removed
/// user and transfer_dest user to be different
/// 
/// - returns: An initialized `DBXTEAMMembersRemoveError` instance.
/// 
- (nonnull instancetype)initWithRemovedAndTransferDestShouldDiffer;

/// 
/// Initializes union class with tag state of
/// `RemovedAndTransferAdminShouldDiffer`.
/// 
/// About the `RemovedAndTransferAdminShouldDiffer` tag state: Expected removed
/// user and transfer_admin user to be different.
/// 
/// - returns: An initialized `DBXTEAMMembersRemoveError` instance.
/// 
- (nonnull instancetype)initWithRemovedAndTransferAdminShouldDiffer;

/// 
/// Initializes union class with tag state of `TransferDestUserNotFound`.
/// 
/// About the `TransferDestUserNotFound` tag state: No matching user found for
/// the argument transfer_dest_id.
/// 
/// - returns: An initialized `DBXTEAMMembersRemoveError` instance.
/// 
- (nonnull instancetype)initWithTransferDestUserNotFound;

/// 
/// Initializes union class with tag state of `TransferDestUserNotInTeam`.
/// 
/// About the `TransferDestUserNotInTeam` tag state: The provided
/// transfer_dest_id does not exist on this team.
/// 
/// - returns: An initialized `DBXTEAMMembersRemoveError` instance.
/// 
- (nonnull instancetype)initWithTransferDestUserNotInTeam;

/// 
/// Initializes union class with tag state of `TransferAdminUserNotFound`.
/// 
/// About the `TransferAdminUserNotFound` tag state: No matching user found for
/// the argument transfer_admin_id.
/// 
/// - returns: An initialized `DBXTEAMMembersRemoveError` instance.
/// 
- (nonnull instancetype)initWithTransferAdminUserNotFound;

/// 
/// Initializes union class with tag state of `TransferAdminUserNotInTeam`.
/// 
/// About the `TransferAdminUserNotInTeam` tag state: The provided
/// transfer_admin_id does not exist on this team.
/// 
/// - returns: An initialized `DBXTEAMMembersRemoveError` instance.
/// 
- (nonnull instancetype)initWithTransferAdminUserNotInTeam;

/// 
/// Initializes union class with tag state of `UnspecifiedTransferAdminId`.
/// 
/// About the `UnspecifiedTransferAdminId` tag state: The transfer_admin_id
/// argument must be provided when file transfer is requested.
/// 
/// - returns: An initialized `DBXTEAMMembersRemoveError` instance.
/// 
- (nonnull instancetype)initWithUnspecifiedTransferAdminId;

/// 
/// Initializes union class with tag state of `TransferAdminIsNotAdmin`.
/// 
/// About the `TransferAdminIsNotAdmin` tag state: Specified transfer_admin user
/// is not a team admin.
/// 
/// - returns: An initialized `DBXTEAMMembersRemoveError` instance.
/// 
- (nonnull instancetype)initWithTransferAdminIsNotAdmin;

/// 
/// Initializes union class with tag state of `CannotKeepAccountAndTransfer`.
/// 
/// About the `CannotKeepAccountAndTransfer` tag state: Cannot keep account and
/// transfer the data to another user at the same time.
/// 
/// - returns: An initialized `DBXTEAMMembersRemoveError` instance.
/// 
- (nonnull instancetype)initWithCannotKeepAccountAndTransfer;

/// 
/// Initializes union class with tag state of `CannotKeepAccountAndDeleteData`.
/// 
/// About the `CannotKeepAccountAndDeleteData` tag state: Cannot keep account
/// and delete the data at the same time.
/// 
/// - returns: An initialized `DBXTEAMMembersRemoveError` instance.
/// 
- (nonnull instancetype)initWithCannotKeepAccountAndDeleteData;

/// 
/// Initializes union class with tag state of `EmailAddressTooLongToBeDisabled`.
/// 
/// About the `EmailAddressTooLongToBeDisabled` tag state: The email address of
/// the user is too long to be disabled.
/// 
/// - returns: An initialized `DBXTEAMMembersRemoveError` instance.
/// 
- (nonnull instancetype)initWithEmailAddressTooLongToBeDisabled;

/// 
/// Retrieves whether the union's current tag state has value `UserNotFound`.
/// 
/// - returns: Whether the union's current tag state has value `UserNotFound`.
/// 
- (BOOL)isUserNotFound;

/// 
/// Retrieves whether the union's current tag state has value `UserNotInTeam`.
/// 
/// - returns: Whether the union's current tag state has value `UserNotInTeam`.
/// 
- (BOOL)isUserNotInTeam;

/// 
/// Retrieves whether the union's current tag state has value `Other`.
/// 
/// - returns: Whether the union's current tag state has value `Other`.
/// 
- (BOOL)isOther;

/// 
/// Retrieves whether the union's current tag state has value `RemoveLastAdmin`.
/// 
/// - returns: Whether the union's current tag state has value
/// `RemoveLastAdmin`.
/// 
- (BOOL)isRemoveLastAdmin;

/// 
/// Retrieves whether the union's current tag state has value
/// `RemovedAndTransferDestShouldDiffer`.
/// 
/// - returns: Whether the union's current tag state has value
/// `RemovedAndTransferDestShouldDiffer`.
/// 
- (BOOL)isRemovedAndTransferDestShouldDiffer;

/// 
/// Retrieves whether the union's current tag state has value
/// `RemovedAndTransferAdminShouldDiffer`.
/// 
/// - returns: Whether the union's current tag state has value
/// `RemovedAndTransferAdminShouldDiffer`.
/// 
- (BOOL)isRemovedAndTransferAdminShouldDiffer;

/// 
/// Retrieves whether the union's current tag state has value
/// `TransferDestUserNotFound`.
/// 
/// - returns: Whether the union's current tag state has value
/// `TransferDestUserNotFound`.
/// 
- (BOOL)isTransferDestUserNotFound;

/// 
/// Retrieves whether the union's current tag state has value
/// `TransferDestUserNotInTeam`.
/// 
/// - returns: Whether the union's current tag state has value
/// `TransferDestUserNotInTeam`.
/// 
- (BOOL)isTransferDestUserNotInTeam;

/// 
/// Retrieves whether the union's current tag state has value
/// `TransferAdminUserNotFound`.
/// 
/// - returns: Whether the union's current tag state has value
/// `TransferAdminUserNotFound`.
/// 
- (BOOL)isTransferAdminUserNotFound;

/// 
/// Retrieves whether the union's current tag state has value
/// `TransferAdminUserNotInTeam`.
/// 
/// - returns: Whether the union's current tag state has value
/// `TransferAdminUserNotInTeam`.
/// 
- (BOOL)isTransferAdminUserNotInTeam;

/// 
/// Retrieves whether the union's current tag state has value
/// `UnspecifiedTransferAdminId`.
/// 
/// - returns: Whether the union's current tag state has value
/// `UnspecifiedTransferAdminId`.
/// 
- (BOOL)isUnspecifiedTransferAdminId;

/// 
/// Retrieves whether the union's current tag state has value
/// `TransferAdminIsNotAdmin`.
/// 
/// - returns: Whether the union's current tag state has value
/// `TransferAdminIsNotAdmin`.
/// 
- (BOOL)isTransferAdminIsNotAdmin;

/// 
/// Retrieves whether the union's current tag state has value
/// `CannotKeepAccountAndTransfer`.
/// 
/// - returns: Whether the union's current tag state has value
/// `CannotKeepAccountAndTransfer`.
/// 
- (BOOL)isCannotKeepAccountAndTransfer;

/// 
/// Retrieves whether the union's current tag state has value
/// `CannotKeepAccountAndDeleteData`.
/// 
/// - returns: Whether the union's current tag state has value
/// `CannotKeepAccountAndDeleteData`.
/// 
- (BOOL)isCannotKeepAccountAndDeleteData;

/// 
/// Retrieves whether the union's current tag state has value
/// `EmailAddressTooLongToBeDisabled`.
/// 
/// - returns: Whether the union's current tag state has value
/// `EmailAddressTooLongToBeDisabled`.
/// 
- (BOOL)isEmailAddressTooLongToBeDisabled;

/// 
/// Retrieves string value of union's current tag state.
/// 
/// - returns: A human-readable string representing the union's current tag
/// state.
/// 
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXTEAMMembersRemoveError` union.
/// 
@interface DBXTEAMMembersRemoveErrorSerializer : NSObject 

/// 
/// Serializes `DBXTEAMMembersRemoveError` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMMembersRemoveError` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMMembersRemoveError` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMMembersRemoveError * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMMembersRemoveError` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMMembersRemoveError` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMMembersRemoveError` object.
/// 
+ (DBXTEAMMembersRemoveError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end