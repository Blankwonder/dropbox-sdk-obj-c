///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxStoneSerializers.h"

@class DbxAsyncPollError;

/// 
/// The DbxAsyncPollError union.
/// 
/// Error returned by methods for polling the status of asynchronous job.
/// 
@interface DbxAsyncPollError : NSObject <DbxSerializable> 

typedef NS_ENUM(NSInteger, AsyncPollErrorTag) {
    /// The job ID is invalid.
    AsyncPollErrorInvalidAsyncJobId,
    /// Something went wrong with the job on Dropbox's end. You'll need to
    /// verify that the action you were taking succeeded, and if not, try again.
    /// This should happen very rarely.
    AsyncPollErrorInternalError,
    /// (no description)
    AsyncPollErrorOther,
};

- (nonnull instancetype)initWithInvalidAsyncJobId;

- (nonnull instancetype)initWithInternalError;

- (nonnull instancetype)initWithOther;

- (BOOL)isInvalidAsyncJobId;

- (BOOL)isInternalError;

- (BOOL)isOther;

- (NSString * _Nonnull)getTagName;

+ (NSDictionary * _Nonnull)serialize:(id _Nonnull)obj;

+ (id _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

- (NSString * _Nonnull)description;

/// Current state of the DbxAsyncPollError union type.
@property (nonatomic) AsyncPollErrorTag tag;

@end


@interface DbxAsyncPollErrorSerializer : NSObject 

+ (NSDictionary * _Nonnull)serialize:(DbxAsyncPollError * _Nonnull)obj;

+ (DbxAsyncPollError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end