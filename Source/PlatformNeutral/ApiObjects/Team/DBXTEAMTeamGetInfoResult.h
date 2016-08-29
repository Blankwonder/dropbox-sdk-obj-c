///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMPOLICIESTeamMemberPolicies;
@class DBXTEAMTeamGetInfoResult;

/// 
/// The TeamGetInfoResult struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMTeamGetInfoResult : NSObject <DBXSerializable> 

/// The name of the team.
@property (nonatomic, readonly, copy) NSString * _Nonnull name;

/// The ID of the team.
@property (nonatomic, readonly, copy) NSString * _Nonnull teamId;

/// The number of licenses available to the team.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull numLicensedUsers;

/// The number of accounts that have been invited or are already active members
/// of the team.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull numProvisionedUsers;

/// (no description).
@property (nonatomic, readonly) DBXTEAMPOLICIESTeamMemberPolicies * _Nonnull policies;

/// 
/// Full constructor for the `DBXTEAMTeamGetInfoResult` struct (exposes all
/// instance variables).
/// 
/// - parameter name: The name of the team.
/// - parameter teamId: The ID of the team.
/// - parameter numLicensedUsers: The number of licenses available to the team.
/// - parameter numProvisionedUsers: The number of accounts that have been
/// invited or are already active members of the team.
/// - parameter policies: (no description).
/// 
/// - returns: An initialized `DBXTEAMTeamGetInfoResult` instance.
/// 
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name teamId:(NSString * _Nonnull)teamId numLicensedUsers:(NSNumber * _Nonnull)numLicensedUsers numProvisionedUsers:(NSNumber * _Nonnull)numProvisionedUsers policies:(DBXTEAMPOLICIESTeamMemberPolicies * _Nonnull)policies;

@end


/// 
/// The serialization class for the TeamGetInfoResult struct.
/// 
@interface DBXTEAMTeamGetInfoResultSerializer : NSObject 

/// 
/// Serializes `DBXTEAMTeamGetInfoResult` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMTeamGetInfoResult` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMTeamGetInfoResult` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMTeamGetInfoResult * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMTeamGetInfoResult` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMTeamGetInfoResult` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMTeamGetInfoResult` object.
/// 
+ (DBXTEAMTeamGetInfoResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end