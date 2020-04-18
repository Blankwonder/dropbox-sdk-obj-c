///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESLockConflictError;
@class DBFILESLockFileError;
@class DBFILESLookupError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LockFileError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESLockFileError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESLockFileErrorTag` enum type represents the possible tag states
/// with which the `DBFILESLockFileError` union can exist.
typedef NS_ENUM(NSInteger, DBFILESLockFileErrorTag) {
  /// Could not find the specified resource.
  DBFILESLockFileErrorPathLookup,

  /// There are too many write operations in user's Dropbox. Please retry this
  /// request.
  DBFILESLockFileErrorTooManyWriteOperations,

  /// There are too many files in one request. Please retry with fewer files.
  DBFILESLockFileErrorTooManyFiles,

  /// The user does not have permissions to change the lock state or access
  /// the file.
  DBFILESLockFileErrorNoWritePermission,

  /// Item is a type that cannot be locked.
  DBFILESLockFileErrorCannotBeLocked,

  /// Requested file is not currently shared.
  DBFILESLockFileErrorFileNotShared,

  /// The user action conflicts with an existing lock on the file.
  DBFILESLockFileErrorLockConflict,

  /// Something went wrong with the job on Dropbox's end. You'll need to
  /// verify that the action you were taking succeeded, and if not, try again.
  /// This should happen very rarely.
  DBFILESLockFileErrorInternalError,

  /// (no description).
  DBFILESLockFileErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESLockFileErrorTag tag;

/// Could not find the specified resource. @note Ensure the `isPathLookup`
/// method returns true before accessing, otherwise a runtime exception will be
/// raised.
@property (nonatomic, readonly) DBFILESLookupError *pathLookup;

/// The user action conflicts with an existing lock on the file. @note Ensure
/// the `isLockConflict` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property (nonatomic, readonly) DBFILESLockConflictError *lockConflict;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "path_lookup".
///
/// Description of the "path_lookup" tag state: Could not find the specified
/// resource.
///
/// @param pathLookup Could not find the specified resource.
///
/// @return An initialized instance.
///
- (instancetype)initWithPathLookup:(DBFILESLookupError *)pathLookup;

///
/// Initializes union class with tag state of "too_many_write_operations".
///
/// Description of the "too_many_write_operations" tag state: There are too many
/// write operations in user's Dropbox. Please retry this request.
///
/// @return An initialized instance.
///
- (instancetype)initWithTooManyWriteOperations;

///
/// Initializes union class with tag state of "too_many_files".
///
/// Description of the "too_many_files" tag state: There are too many files in
/// one request. Please retry with fewer files.
///
/// @return An initialized instance.
///
- (instancetype)initWithTooManyFiles;

///
/// Initializes union class with tag state of "no_write_permission".
///
/// Description of the "no_write_permission" tag state: The user does not have
/// permissions to change the lock state or access the file.
///
/// @return An initialized instance.
///
- (instancetype)initWithNoWritePermission;

///
/// Initializes union class with tag state of "cannot_be_locked".
///
/// Description of the "cannot_be_locked" tag state: Item is a type that cannot
/// be locked.
///
/// @return An initialized instance.
///
- (instancetype)initWithCannotBeLocked;

///
/// Initializes union class with tag state of "file_not_shared".
///
/// Description of the "file_not_shared" tag state: Requested file is not
/// currently shared.
///
/// @return An initialized instance.
///
- (instancetype)initWithFileNotShared;

///
/// Initializes union class with tag state of "lock_conflict".
///
/// Description of the "lock_conflict" tag state: The user action conflicts with
/// an existing lock on the file.
///
/// @param lockConflict The user action conflicts with an existing lock on the
/// file.
///
/// @return An initialized instance.
///
- (instancetype)initWithLockConflict:(DBFILESLockConflictError *)lockConflict;

///
/// Initializes union class with tag state of "internal_error".
///
/// Description of the "internal_error" tag state: Something went wrong with the
/// job on Dropbox's end. You'll need to verify that the action you were taking
/// succeeded, and if not, try again. This should happen very rarely.
///
/// @return An initialized instance.
///
- (instancetype)initWithInternalError;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "path_lookup".
///
/// @note Call this method and ensure it returns true before accessing the
/// `pathLookup` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "path_lookup".
///
- (BOOL)isPathLookup;

///
/// Retrieves whether the union's current tag state has value
/// "too_many_write_operations".
///
/// @return Whether the union's current tag state has value
/// "too_many_write_operations".
///
- (BOOL)isTooManyWriteOperations;

///
/// Retrieves whether the union's current tag state has value "too_many_files".
///
/// @return Whether the union's current tag state has value "too_many_files".
///
- (BOOL)isTooManyFiles;

///
/// Retrieves whether the union's current tag state has value
/// "no_write_permission".
///
/// @return Whether the union's current tag state has value
/// "no_write_permission".
///
- (BOOL)isNoWritePermission;

///
/// Retrieves whether the union's current tag state has value
/// "cannot_be_locked".
///
/// @return Whether the union's current tag state has value "cannot_be_locked".
///
- (BOOL)isCannotBeLocked;

///
/// Retrieves whether the union's current tag state has value "file_not_shared".
///
/// @return Whether the union's current tag state has value "file_not_shared".
///
- (BOOL)isFileNotShared;

///
/// Retrieves whether the union's current tag state has value "lock_conflict".
///
/// @note Call this method and ensure it returns true before accessing the
/// `lockConflict` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "lock_conflict".
///
- (BOOL)isLockConflict;

///
/// Retrieves whether the union's current tag state has value "internal_error".
///
/// @return Whether the union's current tag state has value "internal_error".
///
- (BOOL)isInternalError;

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
/// The serialization class for the `DBFILESLockFileError` union.
///
@interface DBFILESLockFileErrorSerializer : NSObject

///
/// Serializes `DBFILESLockFileError` instances.
///
/// @param instance An instance of the `DBFILESLockFileError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESLockFileError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESLockFileError *)instance;

///
/// Deserializes `DBFILESLockFileError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESLockFileError` API object.
///
/// @return An instantiation of the `DBFILESLockFileError` object.
///
+ (DBFILESLockFileError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END