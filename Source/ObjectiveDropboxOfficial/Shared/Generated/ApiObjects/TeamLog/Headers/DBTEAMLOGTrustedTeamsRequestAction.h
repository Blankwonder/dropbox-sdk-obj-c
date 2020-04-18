///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGTrustedTeamsRequestAction;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TrustedTeamsRequestAction` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTrustedTeamsRequestAction : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGTrustedTeamsRequestActionTag` enum type represents the
/// possible tag states with which the `DBTEAMLOGTrustedTeamsRequestAction`
/// union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGTrustedTeamsRequestActionTag) {
  /// (no description).
  DBTEAMLOGTrustedTeamsRequestActionInvited,

  /// (no description).
  DBTEAMLOGTrustedTeamsRequestActionExpired,

  /// (no description).
  DBTEAMLOGTrustedTeamsRequestActionRevoked,

  /// (no description).
  DBTEAMLOGTrustedTeamsRequestActionAccepted,

  /// (no description).
  DBTEAMLOGTrustedTeamsRequestActionDeclined,

  /// (no description).
  DBTEAMLOGTrustedTeamsRequestActionOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGTrustedTeamsRequestActionTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "invited".
///
/// @return An initialized instance.
///
- (instancetype)initWithInvited;

///
/// Initializes union class with tag state of "expired".
///
/// @return An initialized instance.
///
- (instancetype)initWithExpired;

///
/// Initializes union class with tag state of "revoked".
///
/// @return An initialized instance.
///
- (instancetype)initWithRevoked;

///
/// Initializes union class with tag state of "accepted".
///
/// @return An initialized instance.
///
- (instancetype)initWithAccepted;

///
/// Initializes union class with tag state of "declined".
///
/// @return An initialized instance.
///
- (instancetype)initWithDeclined;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "invited".
///
/// @return Whether the union's current tag state has value "invited".
///
- (BOOL)isInvited;

///
/// Retrieves whether the union's current tag state has value "expired".
///
/// @return Whether the union's current tag state has value "expired".
///
- (BOOL)isExpired;

///
/// Retrieves whether the union's current tag state has value "revoked".
///
/// @return Whether the union's current tag state has value "revoked".
///
- (BOOL)isRevoked;

///
/// Retrieves whether the union's current tag state has value "accepted".
///
/// @return Whether the union's current tag state has value "accepted".
///
- (BOOL)isAccepted;

///
/// Retrieves whether the union's current tag state has value "declined".
///
/// @return Whether the union's current tag state has value "declined".
///
- (BOOL)isDeclined;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMLOGTrustedTeamsRequestAction` union.
///
@interface DBTEAMLOGTrustedTeamsRequestActionSerializer : NSObject

///
/// Serializes `DBTEAMLOGTrustedTeamsRequestAction` instances.
///
/// @param instance An instance of the `DBTEAMLOGTrustedTeamsRequestAction` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTrustedTeamsRequestAction` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGTrustedTeamsRequestAction *)instance;

///
/// Deserializes `DBTEAMLOGTrustedTeamsRequestAction` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTrustedTeamsRequestAction` API object.
///
/// @return An instantiation of the `DBTEAMLOGTrustedTeamsRequestAction` object.
///
+ (DBTEAMLOGTrustedTeamsRequestAction *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END