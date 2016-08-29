///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMMembersGetInfoError;

/// 
/// The MembersGetInfoError union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMMembersGetInfoError : NSObject <DBXSerializable> 

/// The `DBXTEAMMembersGetInfoErrorTag` enum type represents the possible tag
/// states with which the `DBXTEAMMembersGetInfoError` union can exist.
typedef NS_ENUM(NSInteger, DBXTEAMMembersGetInfoErrorTag) {
    /// (no description).
    DBXTEAMMembersGetInfoErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMMembersGetInfoErrorTag tag;

/// 
/// Initializes union class with tag state of `Other`.
/// 
/// - returns: An initialized `DBXTEAMMembersGetInfoError` instance.
/// 
- (nonnull instancetype)initWithOther;

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
/// The serialization class for the `DBXTEAMMembersGetInfoError` union.
/// 
@interface DBXTEAMMembersGetInfoErrorSerializer : NSObject 

/// 
/// Serializes `DBXTEAMMembersGetInfoError` instances.
/// 
///  - parameter instance: An instance of the `DBXTEAMMembersGetInfoError` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXTEAMMembersGetInfoError` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMMembersGetInfoError * _Nonnull)instance;

/// 
/// Deserializes `DBXTEAMMembersGetInfoError` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXTEAMMembersGetInfoError` API object.
/// 
///  - returns: An instantiation of the `DBXTEAMMembersGetInfoError` object.
/// 
+ (DBXTEAMMembersGetInfoError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end