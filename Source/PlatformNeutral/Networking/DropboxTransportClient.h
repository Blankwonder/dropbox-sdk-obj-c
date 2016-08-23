///
/// The networking client for the User and Business API.
///

#import <Foundation/Foundation.h>
#import "DbxStoneSerializers.h"

@class DbxError;
@class DbxRoute;
@class DbxDownloadDataTask;
@class DbxDownloadURLTask;
@class DbxRpcTask;
@class DbxUploadTask;

@interface DropboxTransportClient : NSObject

- (nonnull instancetype)initWithAccessToken:(NSString * _Nonnull)accessToken;

- (nonnull instancetype)initWithAccessToken:(NSString * _Nonnull)accessToken andSelectUser:(NSString * _Nullable)selectUser;

- (nonnull instancetype)initWithAccessToken:(NSString * _Nonnull)accessToken andSelectUser:(NSString * _Nullable)selectUser andBaseHosts:(NSDictionary <NSString *, NSString *> * _Nullable)baseHosts;

- (nonnull instancetype)initWithAccessToken:(NSString * _Nonnull)accessToken andSelectUser:(NSString * _Nullable)selectUser andBaseHosts:(NSDictionary <NSString *, NSString *> * _Nullable)baseHosts andUserAgent:(NSString * _Nullable)userAgent;

- (DbxRpcTask * _Nonnull)requestRpc:(DbxRoute * _Nonnull)route arg:(id<DbxSerializable> _Nullable)arg;

- (DbxUploadTask * _Nonnull)requestUpload:(DbxRoute * _Nonnull)route arg:(id<DbxSerializable> _Nullable)arg inputURL:(NSURL * _Nonnull)input;

- (DbxUploadTask * _Nonnull)requestUpload:(DbxRoute * _Nonnull)route arg:(id<DbxSerializable> _Nullable)arg inputData:(NSData * _Nonnull)input;

- (DbxUploadTask *)requestUpload:(DbxRoute *)route arg:(id<DbxSerializable>)arg inputStream:(NSStream *)input;

- (DbxDownloadURLTask * _Nonnull)requestDownload:(DbxRoute * _Nonnull)route arg:(id<DbxSerializable> _Nullable)arg overwrite:(BOOL)overwrite destination:(NSURL * _Nonnull)destination;

- (DbxDownloadDataTask * _Nonnull)requestDownload:(DbxRoute * _Nonnull)route arg:(id<DbxSerializable> _Nullable)arg;

@property (nonatomic, nonnull) NSString *accessToken;

@end