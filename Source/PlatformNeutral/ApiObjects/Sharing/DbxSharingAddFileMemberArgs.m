///
/// Auto-generated by Stone, do not modify.
///

#import "DbxSharingAccessLevel.h"
#import "DbxSharingAddFileMemberArgs.h"
#import "DbxSharingMemberSelector.h"
#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"

@implementation DbxSharingAddFileMemberArgs 

- (instancetype)initWithFile:(NSString *)file members:(NSArray<DbxSharingMemberSelector *> *)members customMessage:(NSString *)customMessage quiet:(NSNumber *)quiet accessLevel:(DbxSharingAccessLevel *)accessLevel addMessageAsComment:(NSNumber *)addMessageAsComment {
    [DbxStoneValidators stringValidator:[NSNumber numberWithInt:1] maxLength:nil pattern:@"((/|id:).*|nspath:[^:]*:[^:]*)"](file);
    [DbxStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](members);

    self = [super init];
    if (self != nil) {
        _file = file;
        _members = members;
        _customMessage = customMessage;
        _quiet = quiet ?: @NO;
        _accessLevel = accessLevel ?: [[DbxSharingAccessLevel alloc] initWithViewer];
        _addMessageAsComment = addMessageAsComment ?: @NO;
    }
    return self;
}

- (instancetype)initWithFile:(NSString *)file members:(NSArray<DbxSharingMemberSelector *> *)members {
    return [self initWithFile:file members:members customMessage:nil quiet:nil accessLevel:nil addMessageAsComment:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxSharingAddFileMemberArgsSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxSharingAddFileMemberArgsSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxSharingAddFileMemberArgsSerializer serialize:self] description];
}

@end


@implementation DbxSharingAddFileMemberArgsSerializer 

+ (NSDictionary *)serialize:(DbxSharingAddFileMemberArgs *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"file"] = [DbxStringSerializer serialize:valueObj.file];
    jsonDict[@"members"] = [DbxArraySerializer serialize:valueObj.members withBlock:^id(id obj) { return [DbxSharingMemberSelectorSerializer serialize:obj]; }];
    if (valueObj.customMessage != nil) {
        jsonDict[@"custom_message"] = [DbxStringSerializer serialize:valueObj.customMessage];
    }
    jsonDict[@"quiet"] = [DbxBoolSerializer serialize:valueObj.quiet];
    jsonDict[@"access_level"] = [DbxSharingAccessLevelSerializer serialize:valueObj.accessLevel];
    jsonDict[@"add_message_as_comment"] = [DbxBoolSerializer serialize:valueObj.addMessageAsComment];

    return jsonDict;
}

+ (DbxSharingAddFileMemberArgs *)deserialize:(NSDictionary *)valueDict {
    NSString *file = [DbxStringSerializer deserialize:valueDict];
    NSArray<DbxSharingMemberSelector *> *members = [DbxArraySerializer deserialize:valueDict withBlock:^id(id obj) { return [DbxSharingMemberSelectorSerializer deserialize:obj]; }];
    NSString *customMessage = valueDict != nil ? [DbxStringSerializer deserialize:valueDict] : nil;
    NSNumber *quiet = [DbxBoolSerializer deserialize:valueDict];
    DbxSharingAccessLevel *accessLevel = [DbxSharingAccessLevelSerializer deserialize:valueDict];
    NSNumber *addMessageAsComment = [DbxBoolSerializer deserialize:valueDict];

    return [[DbxSharingAddFileMemberArgs alloc] initWithFile:file members:members customMessage:customMessage quiet:quiet accessLevel:accessLevel addMessageAsComment:addMessageAsComment];
}

@end