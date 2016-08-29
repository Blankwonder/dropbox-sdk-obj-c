///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESWriteConflictError.h"
#import "DBXFILESWriteError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESWriteError 

@synthesize malformedPath = _malformedPath;
@synthesize conflict = _conflict;

- (instancetype)initWithMalformedPath:(NSString *)malformedPath {
    self = [super init];
    if (self) {
        _tag = DBXFILESWriteErrorMalformedPath;
        _malformedPath = malformedPath;
    }
    return self;
}

- (instancetype)initWithConflict:(DBXFILESWriteConflictError *)conflict {
    self = [super init];
    if (self) {
        _tag = DBXFILESWriteErrorConflict;
        _conflict = conflict;
    }
    return self;
}

- (instancetype)initWithNoWritePermission {
    self = [super init];
    if (self) {
        _tag = DBXFILESWriteErrorNoWritePermission;
    }
    return self;
}

- (instancetype)initWithInsufficientSpace {
    self = [super init];
    if (self) {
        _tag = DBXFILESWriteErrorInsufficientSpace;
    }
    return self;
}

- (instancetype)initWithDisallowedName {
    self = [super init];
    if (self) {
        _tag = DBXFILESWriteErrorDisallowedName;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self) {
        _tag = DBXFILESWriteErrorOther;
    }
    return self;
}

- (BOOL)isMalformedPath {
    return _tag == DBXFILESWriteErrorMalformedPath;
}

- (BOOL)isConflict {
    return _tag == DBXFILESWriteErrorConflict;
}

- (BOOL)isNoWritePermission {
    return _tag == DBXFILESWriteErrorNoWritePermission;
}

- (BOOL)isInsufficientSpace {
    return _tag == DBXFILESWriteErrorInsufficientSpace;
}

- (BOOL)isDisallowedName {
    return _tag == DBXFILESWriteErrorDisallowedName;
}

- (BOOL)isOther {
    return _tag == DBXFILESWriteErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXFILESWriteErrorMalformedPath:
           return @"DBXFILESWriteErrorMalformedPath";
        case DBXFILESWriteErrorConflict:
           return @"DBXFILESWriteErrorConflict";
        case DBXFILESWriteErrorNoWritePermission:
           return @"DBXFILESWriteErrorNoWritePermission";
        case DBXFILESWriteErrorInsufficientSpace:
           return @"DBXFILESWriteErrorInsufficientSpace";
        case DBXFILESWriteErrorDisallowedName:
           return @"DBXFILESWriteErrorDisallowedName";
        case DBXFILESWriteErrorOther:
           return @"DBXFILESWriteErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (NSString *)malformedPath {
    if (![self isMalformedPath]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXFILESWriteErrorMalformedPath`, but was %@.", [self getTagName]];
    }
    return _malformedPath;
}

- (DBXFILESWriteConflictError *)conflict {
    if (![self isConflict]) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXFILESWriteErrorConflict`, but was %@.", [self getTagName]];
    }
    return _conflict;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXFILESWriteErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESWriteErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESWriteErrorSerializer serialize:self] description];
}

@end


@implementation DBXFILESWriteErrorSerializer 

+ (NSDictionary *)serialize:(DBXFILESWriteError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isMalformedPath]) {
        if (valueObj.malformedPath) {
            jsonDict[@"malformed_path"] = valueObj.malformedPath;
        }
        jsonDict[@".tag"] = @"malformed_path";
    }
    else if ([valueObj isConflict]) {
        jsonDict = [[DBXFILESWriteConflictErrorSerializer serialize:valueObj.conflict] mutableCopy];
        jsonDict[@".tag"] = @"conflict";
    }
    else if ([valueObj isNoWritePermission]) {
        jsonDict[@".tag"] = @"no_write_permission";
    }
    else if ([valueObj isInsufficientSpace]) {
        jsonDict[@".tag"] = @"insufficient_space";
    }
    else if ([valueObj isDisallowedName]) {
        jsonDict[@".tag"] = @"disallowed_name";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXFILESWriteError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"malformed_path"]) {
        NSString *malformedPath = valueDict[@"malformed_path"] ? valueDict[@"malformed_path"] : nil;
        return [[DBXFILESWriteError alloc] initWithMalformedPath:malformedPath];
    }
    else if ([tag isEqualToString:@"conflict"]) {
        DBXFILESWriteConflictError *conflict = [DBXFILESWriteConflictErrorSerializer deserialize:valueDict[@"conflict"]];
        return [[DBXFILESWriteError alloc] initWithConflict:conflict];
    }
    else if ([tag isEqualToString:@"no_write_permission"]) {
        return [[DBXFILESWriteError alloc] initWithNoWritePermission];
    }
    else if ([tag isEqualToString:@"insufficient_space"]) {
        return [[DBXFILESWriteError alloc] initWithInsufficientSpace];
    }
    else if ([tag isEqualToString:@"disallowed_name"]) {
        return [[DBXFILESWriteError alloc] initWithDisallowedName];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXFILESWriteError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end