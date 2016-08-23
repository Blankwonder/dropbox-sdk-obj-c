///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxStoneSerializers.h"

@class DbxSharingSharedLinkAccessFailureReason;

/// 
/// The DbxSharingSharedLinkAccessFailureReason union.
/// 
@interface DbxSharingSharedLinkAccessFailureReason : NSObject <DbxSerializable> 

typedef NS_ENUM(NSInteger, SharingSharedLinkAccessFailureReasonTag) {
    /// User is not logged in.
    SharingSharedLinkAccessFailureReasonLoginRequired,
    /// User's email is not verified.
    SharingSharedLinkAccessFailureReasonEmailVerifyRequired,
    /// The link is password protected.
    SharingSharedLinkAccessFailureReasonPasswordRequired,
    /// Access is allowed for team members only.
    SharingSharedLinkAccessFailureReasonTeamOnly,
    /// Access is allowed for the shared link's owner only.
    SharingSharedLinkAccessFailureReasonOwnerOnly,
    /// (no description)
    SharingSharedLinkAccessFailureReasonOther,
};

- (nonnull instancetype)initWithLoginRequired;

- (nonnull instancetype)initWithEmailVerifyRequired;

- (nonnull instancetype)initWithPasswordRequired;

- (nonnull instancetype)initWithTeamOnly;

- (nonnull instancetype)initWithOwnerOnly;

- (nonnull instancetype)initWithOther;

- (BOOL)isLoginRequired;

- (BOOL)isEmailVerifyRequired;

- (BOOL)isPasswordRequired;

- (BOOL)isTeamOnly;

- (BOOL)isOwnerOnly;

- (BOOL)isOther;

- (NSString * _Nonnull)getTagName;

+ (NSDictionary * _Nonnull)serialize:(id _Nonnull)obj;

+ (id _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

- (NSString * _Nonnull)description;

/// Current state of the DbxSharingSharedLinkAccessFailureReason union type.
@property (nonatomic) SharingSharedLinkAccessFailureReasonTag tag;

@end


@interface DbxSharingSharedLinkAccessFailureReasonSerializer : NSObject 

+ (NSDictionary * _Nonnull)serialize:(DbxSharingSharedLinkAccessFailureReason * _Nonnull)obj;

+ (DbxSharingSharedLinkAccessFailureReason * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end