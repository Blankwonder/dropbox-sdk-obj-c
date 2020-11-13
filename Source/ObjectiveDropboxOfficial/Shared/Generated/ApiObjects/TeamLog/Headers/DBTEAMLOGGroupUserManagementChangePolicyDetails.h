///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGGroupUserManagementChangePolicyDetails;
@class DBTEAMPOLICIESGroupCreation;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupUserManagementChangePolicyDetails` struct.
///
/// Changed who can create groups.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGGroupUserManagementChangePolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New group users management policy.
@property (nonatomic, readonly) DBTEAMPOLICIESGroupCreation *dNewValue;

/// Previous group users management policy. Might be missing due to historical
/// data gap.
@property (nonatomic, readonly, nullable) DBTEAMPOLICIESGroupCreation *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New group users management policy.
/// @param previousValue Previous group users management policy. Might be
/// missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMPOLICIESGroupCreation *)dNewValue
                    previousValue:(nullable DBTEAMPOLICIESGroupCreation *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewValue New group users management policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMPOLICIESGroupCreation *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupUserManagementChangePolicyDetails`
/// struct.
///
@interface DBTEAMLOGGroupUserManagementChangePolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGGroupUserManagementChangePolicyDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGGroupUserManagementChangePolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGGroupUserManagementChangePolicyDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGGroupUserManagementChangePolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGGroupUserManagementChangePolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGGroupUserManagementChangePolicyDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGGroupUserManagementChangePolicyDetails` object.
///
+ (DBTEAMLOGGroupUserManagementChangePolicyDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END