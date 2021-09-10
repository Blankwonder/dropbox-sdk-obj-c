///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBFILEREQUESTSRouteObjects.h"
#import "DBFILEREQUESTSCountFileRequestsError.h"
#import "DBFILEREQUESTSCountFileRequestsResult.h"
#import "DBFILEREQUESTSCreateFileRequestError.h"
#import "DBFILEREQUESTSDeleteAllClosedFileRequestsError.h"
#import "DBFILEREQUESTSDeleteAllClosedFileRequestsResult.h"
#import "DBFILEREQUESTSDeleteFileRequestError.h"
#import "DBFILEREQUESTSDeleteFileRequestsResult.h"
#import "DBFILEREQUESTSFileRequest.h"
#import "DBFILEREQUESTSFileRequestDeadline.h"
#import "DBFILEREQUESTSFileRequestError.h"
#import "DBFILEREQUESTSGeneralFileRequestsError.h"
#import "DBFILEREQUESTSGetFileRequestError.h"
#import "DBFILEREQUESTSListFileRequestsContinueError.h"
#import "DBFILEREQUESTSListFileRequestsError.h"
#import "DBFILEREQUESTSListFileRequestsResult.h"
#import "DBFILEREQUESTSListFileRequestsV2Result.h"
#import "DBFILEREQUESTSUpdateFileRequestError.h"
#import "DBFILEREQUESTSUserAuthRoutes.h"
#import "DBRequestErrors.h"
#import "DBStoneBase.h"

@implementation DBFILEREQUESTSRouteObjects

static DBRoute *DBFILEREQUESTSCount;
static DBRoute *DBFILEREQUESTSCreate;
static DBRoute *DBFILEREQUESTSDelete_;
static DBRoute *DBFILEREQUESTSDeleteAllClosed;
static DBRoute *DBFILEREQUESTSGet;
static DBRoute *DBFILEREQUESTSListV2;
static DBRoute *DBFILEREQUESTSList;
static DBRoute *DBFILEREQUESTSListContinue;
static DBRoute *DBFILEREQUESTSUpdate;

static NSObject *lockObj = nil;
+ (void)initialize {
  static dispatch_once_t onceToken;
  dispatch_once(&onceToken, ^{
    lockObj = [[NSObject alloc] init];
  });
}

+ (DBRoute *)DBFILEREQUESTSCount {
  @synchronized(lockObj) {
    if (!DBFILEREQUESTSCount) {
      DBFILEREQUESTSCount = [[DBRoute alloc] init:@"count"
                                       namespace_:@"file_requests"
                                       deprecated:@NO
                                       resultType:[DBFILEREQUESTSCountFileRequestsResult class]
                                        errorType:[DBFILEREQUESTSCountFileRequestsError class]
                                            attrs:@{
                                              @"auth" : @"user",
                                              @"host" : @"api",
                                              @"style" : @"rpc"
                                            }
                            dataStructSerialBlock:nil
                          dataStructDeserialBlock:nil];
    }
    return DBFILEREQUESTSCount;
  }
}

+ (DBRoute *)DBFILEREQUESTSCreate {
  @synchronized(lockObj) {
    if (!DBFILEREQUESTSCreate) {
      DBFILEREQUESTSCreate = [[DBRoute alloc] init:@"create"
                                        namespace_:@"file_requests"
                                        deprecated:@NO
                                        resultType:[DBFILEREQUESTSFileRequest class]
                                         errorType:[DBFILEREQUESTSCreateFileRequestError class]
                                             attrs:@{
                                               @"auth" : @"user",
                                               @"host" : @"api",
                                               @"style" : @"rpc"
                                             }
                             dataStructSerialBlock:nil
                           dataStructDeserialBlock:nil];
    }
    return DBFILEREQUESTSCreate;
  }
}

+ (DBRoute *)DBFILEREQUESTSDelete_ {
  @synchronized(lockObj) {
    if (!DBFILEREQUESTSDelete_) {
      DBFILEREQUESTSDelete_ = [[DBRoute alloc] init:@"delete"
                                         namespace_:@"file_requests"
                                         deprecated:@NO
                                         resultType:[DBFILEREQUESTSDeleteFileRequestsResult class]
                                          errorType:[DBFILEREQUESTSDeleteFileRequestError class]
                                              attrs:@{
                                                @"auth" : @"user",
                                                @"host" : @"api",
                                                @"style" : @"rpc"
                                              }
                              dataStructSerialBlock:nil
                            dataStructDeserialBlock:nil];
    }
    return DBFILEREQUESTSDelete_;
  }
}

+ (DBRoute *)DBFILEREQUESTSDeleteAllClosed {
  @synchronized(lockObj) {
    if (!DBFILEREQUESTSDeleteAllClosed) {
      DBFILEREQUESTSDeleteAllClosed = [[DBRoute alloc] init:@"delete_all_closed"
                                                 namespace_:@"file_requests"
                                                 deprecated:@NO
                                                 resultType:[DBFILEREQUESTSDeleteAllClosedFileRequestsResult class]
                                                  errorType:[DBFILEREQUESTSDeleteAllClosedFileRequestsError class]
                                                      attrs:@{
                                                        @"auth" : @"user",
                                                        @"host" : @"api",
                                                        @"style" : @"rpc"
                                                      }
                                      dataStructSerialBlock:nil
                                    dataStructDeserialBlock:nil];
    }
    return DBFILEREQUESTSDeleteAllClosed;
  }
}

+ (DBRoute *)DBFILEREQUESTSGet {
  @synchronized(lockObj) {
    if (!DBFILEREQUESTSGet) {
      DBFILEREQUESTSGet = [[DBRoute alloc] init:@"get"
                                     namespace_:@"file_requests"
                                     deprecated:@NO
                                     resultType:[DBFILEREQUESTSFileRequest class]
                                      errorType:[DBFILEREQUESTSGetFileRequestError class]
                                          attrs:@{
                                            @"auth" : @"user",
                                            @"host" : @"api",
                                            @"style" : @"rpc"
                                          }
                          dataStructSerialBlock:nil
                        dataStructDeserialBlock:nil];
    }
    return DBFILEREQUESTSGet;
  }
}

+ (DBRoute *)DBFILEREQUESTSListV2 {
  @synchronized(lockObj) {
    if (!DBFILEREQUESTSListV2) {
      DBFILEREQUESTSListV2 = [[DBRoute alloc] init:@"list_v2"
                                        namespace_:@"file_requests"
                                        deprecated:@NO
                                        resultType:[DBFILEREQUESTSListFileRequestsV2Result class]
                                         errorType:[DBFILEREQUESTSListFileRequestsError class]
                                             attrs:@{
                                               @"auth" : @"user",
                                               @"host" : @"api",
                                               @"style" : @"rpc"
                                             }
                             dataStructSerialBlock:nil
                           dataStructDeserialBlock:nil];
    }
    return DBFILEREQUESTSListV2;
  }
}

+ (DBRoute *)DBFILEREQUESTSList {
  @synchronized(lockObj) {
    if (!DBFILEREQUESTSList) {
      DBFILEREQUESTSList = [[DBRoute alloc] init:@"list"
                                      namespace_:@"file_requests"
                                      deprecated:@NO
                                      resultType:[DBFILEREQUESTSListFileRequestsResult class]
                                       errorType:[DBFILEREQUESTSListFileRequestsError class]
                                           attrs:@{
                                             @"auth" : @"user",
                                             @"host" : @"api",
                                             @"style" : @"rpc"
                                           }
                           dataStructSerialBlock:nil
                         dataStructDeserialBlock:nil];
    }
    return DBFILEREQUESTSList;
  }
}

+ (DBRoute *)DBFILEREQUESTSListContinue {
  @synchronized(lockObj) {
    if (!DBFILEREQUESTSListContinue) {
      DBFILEREQUESTSListContinue = [[DBRoute alloc] init:@"list/continue"
                                              namespace_:@"file_requests"
                                              deprecated:@NO
                                              resultType:[DBFILEREQUESTSListFileRequestsV2Result class]
                                               errorType:[DBFILEREQUESTSListFileRequestsContinueError class]
                                                   attrs:@{
                                                     @"auth" : @"user",
                                                     @"host" : @"api",
                                                     @"style" : @"rpc"
                                                   }
                                   dataStructSerialBlock:nil
                                 dataStructDeserialBlock:nil];
    }
    return DBFILEREQUESTSListContinue;
  }
}

+ (DBRoute *)DBFILEREQUESTSUpdate {
  @synchronized(lockObj) {
    if (!DBFILEREQUESTSUpdate) {
      DBFILEREQUESTSUpdate = [[DBRoute alloc] init:@"update"
                                        namespace_:@"file_requests"
                                        deprecated:@NO
                                        resultType:[DBFILEREQUESTSFileRequest class]
                                         errorType:[DBFILEREQUESTSUpdateFileRequestError class]
                                             attrs:@{
                                               @"auth" : @"user",
                                               @"host" : @"api",
                                               @"style" : @"rpc"
                                             }
                             dataStructSerialBlock:nil
                           dataStructDeserialBlock:nil];
    }
    return DBFILEREQUESTSUpdate;
  }
}

@end
