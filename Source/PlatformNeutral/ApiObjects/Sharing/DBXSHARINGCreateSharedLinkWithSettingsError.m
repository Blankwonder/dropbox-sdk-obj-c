///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESLookupError.h"
#import "DBXSHARINGCreateSharedLinkWithSettingsError.h"
#import "DBXSHARINGSharedLinkSettingsError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGCreateSharedLinkWithSettingsError 

@synthesize path = _path;
@synthesize settingsError = _settingsError;

- (instancetype)initWithPath:(DBXFILESLookupError *)path {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGCreateSharedLinkWithSettingsErrorPath;
        _path = path;
    }
    return self;
}

- (instancetype)initWithEmailNotVerified {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGCreateSharedLinkWithSettingsErrorEmailNotVerified;
    }
    return self;
}

- (instancetype)initWithSharedLinkAlreadyExists {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGCreateSharedLinkWithSettingsErrorSharedLinkAlreadyExists;
    }
    return self;
}

- (instancetype)initWithSettingsError:(DBXSHARINGSharedLinkSettingsError *)settingsError {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGCreateSharedLinkWithSettingsErrorSettingsError;
        _settingsError = settingsError;
    }
    return self;
}

- (instancetype)initWithAccessDenied {
    self = [super init];
    if (self) {
        _tag = DBXSHARINGCreateSharedLinkWithSettingsErrorAccessDenied;
    }
    return self;
}

- (BOOL)isPath {
    return _tag == DBXSHARINGCreateSharedLinkWithSettingsErrorPath;
}

- (BOOL)isEmailNotVerified {
    return _tag == DBXSHARINGCreateSharedLinkWithSettingsErrorEmailNotVerified;
}

- (BOOL)isSharedLinkAlreadyExists {
    return _tag == DBXSHARINGCreateSharedLinkWithSettingsErrorSharedLinkAlreadyExists;
}

- (BOOL)isSettingsError {
    return _tag == DBXSHARINGCreateSharedLinkWithSettingsErrorSettingsError;
}

- (BOOL)isAccessDenied {
    return _tag == DBXSHARINGCreateSharedLinkWithSettingsErrorAccessDenied;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXSHARINGCreateSharedLinkWithSettingsErrorPath:
           return @"DBXSHARINGCreateSharedLinkWithSettingsErrorPath";
        case DBXSHARINGCreateSharedLinkWithSettingsErrorEmailNotVerified:
           return @"DBXSHARINGCreateSharedLinkWithSettingsErrorEmailNotVerified";
        case DBXSHARINGCreateSharedLinkWithSettingsErrorSharedLinkAlreadyExists:
           return @"DBXSHARINGCreateSharedLinkWithSettingsErrorSharedLinkAlreadyExists";
        case DBXSHARINGCreateSharedLinkWithSettingsErrorSettingsError:
           return @"DBXSHARINGCreateSharedLinkWithSettingsErrorSettingsError";
        case DBXSHARINGCreateSharedLinkWithSettingsErrorAccessDenied:
           return @"DBXSHARINGCreateSharedLinkWithSettingsErrorAccessDenied";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXFILESLookupError *)path {
    if (![self isPath]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGCreateSharedLinkWithSettingsErrorPath`, but was %@.", [self getTagName]];
    }
    return _path;
}

- (DBXSHARINGSharedLinkSettingsError *)settingsError {
    if (![self isSettingsError]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGCreateSharedLinkWithSettingsErrorSettingsError`, but was %@.", [self getTagName]];
    }
    return _settingsError;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXSHARINGCreateSharedLinkWithSettingsErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGCreateSharedLinkWithSettingsErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGCreateSharedLinkWithSettingsErrorSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGCreateSharedLinkWithSettingsErrorSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGCreateSharedLinkWithSettingsError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isPath]) {
        jsonDict = [[DBXFILESLookupErrorSerializer serialize:valueObj.path] mutableCopy];
        jsonDict[@".tag"] = @"path";
    }
    else if ([valueObj isEmailNotVerified]) {
        jsonDict[@".tag"] = @"email_not_verified";
    }
    else if ([valueObj isSharedLinkAlreadyExists]) {
        jsonDict[@".tag"] = @"shared_link_already_exists";
    }
    else if ([valueObj isSettingsError]) {
        jsonDict = [[DBXSHARINGSharedLinkSettingsErrorSerializer serialize:valueObj.settingsError] mutableCopy];
        jsonDict[@".tag"] = @"settings_error";
    }
    else if ([valueObj isAccessDenied]) {
        jsonDict[@".tag"] = @"access_denied";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXSHARINGCreateSharedLinkWithSettingsError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"path"]) {
        DBXFILESLookupError *path = [DBXFILESLookupErrorSerializer deserialize:valueDict[@"path"]];
        return [[DBXSHARINGCreateSharedLinkWithSettingsError alloc] initWithPath:path];
    }
    else if ([tag isEqualToString:@"email_not_verified"]) {
        return [[DBXSHARINGCreateSharedLinkWithSettingsError alloc] initWithEmailNotVerified];
    }
    else if ([tag isEqualToString:@"shared_link_already_exists"]) {
        return [[DBXSHARINGCreateSharedLinkWithSettingsError alloc] initWithSharedLinkAlreadyExists];
    }
    else if ([tag isEqualToString:@"settings_error"]) {
        DBXSHARINGSharedLinkSettingsError *settingsError = [DBXSHARINGSharedLinkSettingsErrorSerializer deserialize:valueDict[@"settings_error"]];
        return [[DBXSHARINGCreateSharedLinkWithSettingsError alloc] initWithSettingsError:settingsError];
    }
    else if ([tag isEqualToString:@"access_denied"]) {
        return [[DBXSHARINGCreateSharedLinkWithSettingsError alloc] initWithAccessDenied];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end