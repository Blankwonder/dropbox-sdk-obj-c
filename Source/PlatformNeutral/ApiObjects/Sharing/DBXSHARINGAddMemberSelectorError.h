///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGAddMemberSelectorError;

/// 
/// The AddMemberSelectorError union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGAddMemberSelectorError : NSObject <DBXSerializable> 

/// The `DBXSHARINGAddMemberSelectorErrorTag` enum type represents the possible
/// tag states with which the `DBXSHARINGAddMemberSelectorError` union can
/// exist.
typedef NS_ENUM(NSInteger, DBXSHARINGAddMemberSelectorErrorTag) {
    /// Automatically created groups can only be added to team folders.
    DBXSHARINGAddMemberSelectorErrorAutomaticGroup,

    /// The value is the ID that could not be identified.
    DBXSHARINGAddMemberSelectorErrorInvalidDropboxId,

    /// The value is the e-email address that is malformed.
    DBXSHARINGAddMemberSelectorErrorInvalidEmail,

    /// The value is the ID of the Dropbox user with an unverified e-mail
    /// address.  Invite unverified users by e-mail address instead of by their
    /// Dropbox ID.
    DBXSHARINGAddMemberSelectorErrorUnverifiedDropboxId,

    /// At least one of the specified groups in members in AddFolderMemberArg is
    /// deleted.
    DBXSHARINGAddMemberSelectorErrorGroupDeleted,

    /// Sharing to a group that is not on the current user's team.
    DBXSHARINGAddMemberSelectorErrorGroupNotOnTeam,

    /// (no description).
    DBXSHARINGAddMemberSelectorErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGAddMemberSelectorErrorTag tag;

/// The value is the ID that could not be identified.
@property (nonatomic, readonly, copy) NSString * _Nonnull invalidDropboxId;

/// The value is the e-email address that is malformed.
@property (nonatomic, readonly, copy) NSString * _Nonnull invalidEmail;

/// The value is the ID of the Dropbox user with an unverified e-mail address.
/// Invite unverified users by e-mail address instead of by their Dropbox ID.
@property (nonatomic, readonly, copy) NSString * _Nonnull unverifiedDropboxId;

/// 
/// Initializes union class with tag state of `AutomaticGroup`.
/// 
/// About the `AutomaticGroup` tag state: Automatically created groups can only
/// be added to team folders.
/// 
/// - returns: An initialized `DBXSHARINGAddMemberSelectorError` instance.
/// 
- (nonnull instancetype)initWithAutomaticGroup;

/// 
/// Initializes union class with tag state of `InvalidDropboxId`.
/// 
/// About the `InvalidDropboxId` tag state: The value is the ID that could not
/// be identified.
/// 
/// - parameter invalidDropboxId: The value is the ID that could not be
/// identified.
/// 
/// - returns: An initialized `DBXSHARINGAddMemberSelectorError` instance.
/// 
- (nonnull instancetype)initWithInvalidDropboxId:(NSString * _Nonnull)invalidDropboxId;

/// 
/// Initializes union class with tag state of `InvalidEmail`.
/// 
/// About the `InvalidEmail` tag state: The value is the e-email address that is
/// malformed.
/// 
/// - parameter invalidEmail: The value is the e-email address that is
/// malformed.
/// 
/// - returns: An initialized `DBXSHARINGAddMemberSelectorError` instance.
/// 
- (nonnull instancetype)initWithInvalidEmail:(NSString * _Nonnull)invalidEmail;

/// 
/// Initializes union class with tag state of `UnverifiedDropboxId`.
/// 
/// About the `UnverifiedDropboxId` tag state: The value is the ID of the
/// Dropbox user with an unverified e-mail address.  Invite unverified users by
/// e-mail address instead of by their Dropbox ID.
/// 
/// - parameter unverifiedDropboxId: The value is the ID of the Dropbox user
/// with an unverified e-mail address.  Invite unverified users by e-mail
/// address instead of by their Dropbox ID.
/// 
/// - returns: An initialized `DBXSHARINGAddMemberSelectorError` instance.
/// 
- (nonnull instancetype)initWithUnverifiedDropboxId:(NSString * _Nonnull)unverifiedDropboxId;

/// 
/// Initializes union class with tag state of `GroupDeleted`.
/// 
/// About the `GroupDeleted` tag state: At least one of the specified groups in
/// :field:`AddFolderMemberArg.members` is deleted.
/// 
/// - returns: An initialized `DBXSHARINGAddMemberSelectorError` instance.
/// 
- (nonnull instancetype)initWithGroupDeleted;

/// 
/// Initializes union class with tag state of `GroupNotOnTeam`.
/// 
/// About the `GroupNotOnTeam` tag state: Sharing to a group that is not on the
/// current user's team.
/// 
/// - returns: An initialized `DBXSHARINGAddMemberSelectorError` instance.
/// 
- (nonnull instancetype)initWithGroupNotOnTeam;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXSHARINGAddMemberSelectorError` instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Retrieves whether the union's current tag state has value `AutomaticGroup`.
/// 
/// - returns: Whether the union's current tag state has value `AutomaticGroup`.
/// 
- (BOOL)isAutomaticGroup;

/// 
/// Retrieves whether the union's current tag state has value
/// `InvalidDropboxId`.
/// 
/// - returns: Whether the union's current tag state has value
/// `InvalidDropboxId`.
/// 
- (BOOL)isInvalidDropboxId;

/// 
/// Retrieves whether the union's current tag state has value `InvalidEmail`.
/// 
/// - returns: Whether the union's current tag state has value `InvalidEmail`.
/// 
- (BOOL)isInvalidEmail;

/// 
/// Retrieves whether the union's current tag state has value
/// `UnverifiedDropboxId`.
/// 
/// - returns: Whether the union's current tag state has value
/// `UnverifiedDropboxId`.
/// 
- (BOOL)isUnverifiedDropboxId;

/// 
/// Retrieves whether the union's current tag state has value `GroupDeleted`.
/// 
/// - returns: Whether the union's current tag state has value `GroupDeleted`.
/// 
- (BOOL)isGroupDeleted;

/// 
/// Retrieves whether the union's current tag state has value `GroupNotOnTeam`.
/// 
/// - returns: Whether the union's current tag state has value `GroupNotOnTeam`.
/// 
- (BOOL)isGroupNotOnTeam;

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
/// The serialization class for the `DBXSHARINGAddMemberSelectorError` union.
/// 
@interface DBXSHARINGAddMemberSelectorErrorSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGAddMemberSelectorError` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGAddMemberSelectorError`
/// API object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGAddMemberSelectorError` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGAddMemberSelectorError * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGAddMemberSelectorError` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGAddMemberSelectorError` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGAddMemberSelectorError`
/// object.
/// 
+ (DBXSHARINGAddMemberSelectorError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end