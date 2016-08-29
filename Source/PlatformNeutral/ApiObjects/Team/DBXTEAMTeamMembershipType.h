///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMTeamMembershipType;

/// 
/// The TeamMembershipType union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMTeamMembershipType : NSObject <DBXSerializable> 

/// The `DBXTEAMTeamMembershipTypeTag` enum type represents the possible tag
/// states with which the `DBXTEAMTeamMembershipType` union can exist.
typedef NS_ENUM(NSInteger, DBXTEAMTeamMembershipTypeTag) {
    /// User uses a license and has full access to team resources like the
    /// shared quota.
    DBXTEAMTeamMembershipTypeFull,

    /// User does not have access to the shared quota and team admins have
    /// restricted administrative control.
    DBXTEAMTeamMembershipTypeLimited,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMTeamMembershipTypeTag tag;

/// 
/// Initializes union class with tag state of `Full`.
/// 
/// About the `Full` tag state: User uses a license and has full access to team
/// resources like the shared quota.
/// 
/// - returns: An initialized `DBXTEAMTeamMembershipType` instance.
/// 
- (nonnull instancetype)initWithFull;

/// 
/// Initializes union class with tag state of `Limited`.
/// 
/// About the `Limited` tag state: User does not have access to the shared quota
/// and team admins have restricted administrative control.
/// 
/// - returns: An initialized `DBXTEAMTeamMembershipType` instance.
/// 
- (nonnull instancetype)initWithLimited;

/// 
/// Retrieves whether the union's current tag state has value `Full`.
/// 
/// - returns: Whether the union's current tag state has value `Full`.
/// 
- (BOOL)isFull;

/// 
/// Retrieves whether the union's current tag state has value `Limited`.
/// 
/// - returns: Whether the union's current tag state has value `Limited`.
/// 
- (BOOL)isLimited;

/// 
/// Retrieves string value of union's current tag state.
/// 
/// - returns: A human-readable string representing the union's current tag
/// state.
/// 
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXTEAMTeamMembershipType` union.
/// 
@interface DBXTEAMTeamMembershipTypeSerializer : NSObject 

/// 
/// Serializes `DBXTEAMTeamMembershipType` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMTeamMembershipType` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMTeamMembershipType` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMTeamMembershipType * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMTeamMembershipType` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMTeamMembershipType` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMTeamMembershipType` object.
/// 
+ (DBXTEAMTeamMembershipType * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end