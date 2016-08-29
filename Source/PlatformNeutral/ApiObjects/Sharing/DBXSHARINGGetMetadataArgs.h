///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGFolderAction;
@class DBXSHARINGGetMetadataArgs;

/// 
/// The GetMetadataArgs struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGGetMetadataArgs : NSObject <DBXSerializable> 

/// The ID for the shared folder.
@property (nonatomic, readonly, copy) NSString * _Nonnull sharedFolderId;

/// This is a list indicating whether the returned folder data will include a
/// boolean value  allow in FolderPermission that describes whether the current
/// user can perform the  FolderAction on the folder.
@property (nonatomic, readonly) NSArray<DBXSHARINGFolderAction *> * _Nullable actions;

/// 
/// Full constructor for the `DBXSHARINGGetMetadataArgs` struct (exposes all
/// instance variables).
/// 
/// - parameter sharedFolderId: The ID for the shared folder.
/// - parameter actions: This is a list indicating whether the returned folder
/// data will include a boolean value  :field:`FolderPermission.allow` that
/// describes whether the current user can perform the  FolderAction on the
/// folder.
/// 
/// - returns: An initialized `DBXSHARINGGetMetadataArgs` instance.
/// 
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId actions:(NSArray<DBXSHARINGFolderAction *> * _Nullable)actions;

/// 
/// Convenience constructor for the `DBXSHARINGGetMetadataArgs` struct (exposes
/// only non-nullable instance variables with no default value).
/// 
/// - parameter sharedFolderId: The ID for the shared folder.
/// 
/// - returns: An initialized `DBXSHARINGGetMetadataArgs` instance.
/// 
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId;

@end


/// 
/// The serialization class for the GetMetadataArgs struct.
/// 
@interface DBXSHARINGGetMetadataArgsSerializer : NSObject 

/// 
/// Serializes `DBXSHARINGGetMetadataArgs` instances.
/// 
///  - parameter instance: An instance of the `DBXSHARINGGetMetadataArgs` API
/// object.
/// 
///  - returns: A json-compatible dictionary representation of the
/// `DBXSHARINGGetMetadataArgs` API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGGetMetadataArgs * _Nonnull)instance;

/// 
/// Deserializes `DBXSHARINGGetMetadataArgs` instances.
/// 
///  - parameter dict: A json-compatible dictionary representation of the
/// `DBXSHARINGGetMetadataArgs` API object.
/// 
///  - returns: An instantiation of the `DBXSHARINGGetMetadataArgs` object.
/// 
+ (DBXSHARINGGetMetadataArgs * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end