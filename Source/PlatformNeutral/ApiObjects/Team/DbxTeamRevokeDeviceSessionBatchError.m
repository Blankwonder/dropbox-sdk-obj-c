///
/// Auto-generated by Stone, do not modify.
///

#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"
#import "DbxTeamRevokeDeviceSessionBatchError.h"

@implementation DbxTeamRevokeDeviceSessionBatchError 

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = (TeamRevokeDeviceSessionBatchErrorTag)TeamRevokeDeviceSessionBatchErrorOther;
    }
    return self;
}

- (BOOL)isOther {
    return _tag == (TeamRevokeDeviceSessionBatchErrorTag)TeamRevokeDeviceSessionBatchErrorOther;
}

- (NSString *)getTagName {
    if (_tag == (TeamRevokeDeviceSessionBatchErrorTag)TeamRevokeDeviceSessionBatchErrorOther) {
        return @"(TeamRevokeDeviceSessionBatchErrorTag)TeamRevokeDeviceSessionBatchErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxTeamRevokeDeviceSessionBatchErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxTeamRevokeDeviceSessionBatchErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxTeamRevokeDeviceSessionBatchErrorSerializer serialize:self] description];
}

@end


@implementation DbxTeamRevokeDeviceSessionBatchErrorSerializer 

+ (NSDictionary *)serialize:(DbxTeamRevokeDeviceSessionBatchError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DbxTeamRevokeDeviceSessionBatchError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"other"]) {
        return [[DbxTeamRevokeDeviceSessionBatchError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

@end