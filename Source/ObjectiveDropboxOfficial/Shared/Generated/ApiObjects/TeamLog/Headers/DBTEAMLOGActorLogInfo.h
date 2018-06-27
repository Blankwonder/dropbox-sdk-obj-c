///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGActorLogInfo;
@class DBTEAMLOGAppLogInfo;
@class DBTEAMLOGResellerLogInfo;
@class DBTEAMLOGUserLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ActorLogInfo` union.
///
/// The entity who performed the action.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGActorLogInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGActorLogInfoTag` enum type represents the possible tag states
/// with which the `DBTEAMLOGActorLogInfo` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGActorLogInfoTag) {
  /// The user who did the action.
  DBTEAMLOGActorLogInfoUser,

  /// The admin who did the action.
  DBTEAMLOGActorLogInfoAdmin,

  /// The application who did the action.
  DBTEAMLOGActorLogInfoApp,

  /// Action done by reseller.
  DBTEAMLOGActorLogInfoReseller,

  /// Action done by Dropbox.
  DBTEAMLOGActorLogInfoDropbox,

  /// Anonymous actor.
  DBTEAMLOGActorLogInfoAnonymous,

  /// (no description).
  DBTEAMLOGActorLogInfoOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGActorLogInfoTag tag;

/// The user who did the action. @note Ensure the `isUser` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBTEAMLOGUserLogInfo *user;

/// The admin who did the action. @note Ensure the `isAdmin` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBTEAMLOGUserLogInfo *admin;

/// The application who did the action. @note Ensure the `isApp` method returns
/// true before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBTEAMLOGAppLogInfo *app;

/// Action done by reseller. @note Ensure the `isReseller` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBTEAMLOGResellerLogInfo *reseller;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "user".
///
/// Description of the "user" tag state: The user who did the action.
///
/// @param user The user who did the action.
///
/// @return An initialized instance.
///
- (instancetype)initWithUser:(DBTEAMLOGUserLogInfo *)user;

///
/// Initializes union class with tag state of "admin".
///
/// Description of the "admin" tag state: The admin who did the action.
///
/// @param admin The admin who did the action.
///
/// @return An initialized instance.
///
- (instancetype)initWithAdmin:(DBTEAMLOGUserLogInfo *)admin;

///
/// Initializes union class with tag state of "app".
///
/// Description of the "app" tag state: The application who did the action.
///
/// @param app The application who did the action.
///
/// @return An initialized instance.
///
- (instancetype)initWithApp:(DBTEAMLOGAppLogInfo *)app;

///
/// Initializes union class with tag state of "reseller".
///
/// Description of the "reseller" tag state: Action done by reseller.
///
/// @param reseller Action done by reseller.
///
/// @return An initialized instance.
///
- (instancetype)initWithReseller:(DBTEAMLOGResellerLogInfo *)reseller;

///
/// Initializes union class with tag state of "dropbox".
///
/// Description of the "dropbox" tag state: Action done by Dropbox.
///
/// @return An initialized instance.
///
- (instancetype)initWithDropbox;

///
/// Initializes union class with tag state of "anonymous".
///
/// Description of the "anonymous" tag state: Anonymous actor.
///
/// @return An initialized instance.
///
- (instancetype)initWithAnonymous;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "user".
///
/// @note Call this method and ensure it returns true before accessing the
/// `user` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "user".
///
- (BOOL)isUser;

///
/// Retrieves whether the union's current tag state has value "admin".
///
/// @note Call this method and ensure it returns true before accessing the
/// `admin` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "admin".
///
- (BOOL)isAdmin;

///
/// Retrieves whether the union's current tag state has value "app".
///
/// @note Call this method and ensure it returns true before accessing the `app`
/// property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "app".
///
- (BOOL)isApp;

///
/// Retrieves whether the union's current tag state has value "reseller".
///
/// @note Call this method and ensure it returns true before accessing the
/// `reseller` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "reseller".
///
- (BOOL)isReseller;

///
/// Retrieves whether the union's current tag state has value "dropbox".
///
/// @return Whether the union's current tag state has value "dropbox".
///
- (BOOL)isDropbox;

///
/// Retrieves whether the union's current tag state has value "anonymous".
///
/// @return Whether the union's current tag state has value "anonymous".
///
- (BOOL)isAnonymous;

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
/// The serialization class for the `DBTEAMLOGActorLogInfo` union.
///
@interface DBTEAMLOGActorLogInfoSerializer : NSObject

///
/// Serializes `DBTEAMLOGActorLogInfo` instances.
///
/// @param instance An instance of the `DBTEAMLOGActorLogInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGActorLogInfo` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGActorLogInfo *)instance;

///
/// Deserializes `DBTEAMLOGActorLogInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGActorLogInfo` API object.
///
/// @return An instantiation of the `DBTEAMLOGActorLogInfo` object.
///
+ (DBTEAMLOGActorLogInfo *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END