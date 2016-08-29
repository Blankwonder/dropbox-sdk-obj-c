///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXUSERSGetAccountError.h"

@implementation DBXUSERSGetAccountError 

- (instancetype)initWithNoAccount {
    self = [super init];
    if (self) {
        _tag = DBXUSERSGetAccountErrorNoAccount;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self) {
        _tag = DBXUSERSGetAccountErrorOther;
    }
    return self;
}

- (BOOL)isNoAccount {
    return _tag == DBXUSERSGetAccountErrorNoAccount;
}

- (BOOL)isOther {
    return _tag == DBXUSERSGetAccountErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXUSERSGetAccountErrorNoAccount:
           return @"DBXUSERSGetAccountErrorNoAccount";
        case DBXUSERSGetAccountErrorOther:
           return @"DBXUSERSGetAccountErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXUSERSGetAccountErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXUSERSGetAccountErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXUSERSGetAccountErrorSerializer serialize:self] description];
}

@end


@implementation DBXUSERSGetAccountErrorSerializer 

+ (NSDictionary *)serialize:(DBXUSERSGetAccountError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isNoAccount]) {
        jsonDict[@".tag"] = @"no_account";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXUSERSGetAccountError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"no_account"]) {
        return [[DBXUSERSGetAccountError alloc] initWithNoAccount];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXUSERSGetAccountError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end