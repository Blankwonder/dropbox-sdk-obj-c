///
/// Auto-generated by Stone, do not modify.
///

#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"
#import "DbxTeamListMemberDevicesArg.h"

@implementation DbxTeamListMemberDevicesArg 

- (instancetype)initWithTeamMemberId:(NSString *)teamMemberId includeWebSessions:(NSNumber *)includeWebSessions includeDesktopClients:(NSNumber *)includeDesktopClients includeMobileClients:(NSNumber *)includeMobileClients {

    self = [super init];
    if (self != nil) {
        _teamMemberId = teamMemberId;
        _includeWebSessions = includeWebSessions ?: @YES;
        _includeDesktopClients = includeDesktopClients ?: @YES;
        _includeMobileClients = includeMobileClients ?: @YES;
    }
    return self;
}

- (instancetype)initWithTeamMemberId:(NSString *)teamMemberId {
    return [self initWithTeamMemberId:teamMemberId includeWebSessions:nil includeDesktopClients:nil includeMobileClients:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxTeamListMemberDevicesArgSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxTeamListMemberDevicesArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxTeamListMemberDevicesArgSerializer serialize:self] description];
}

@end


@implementation DbxTeamListMemberDevicesArgSerializer 

+ (NSDictionary *)serialize:(DbxTeamListMemberDevicesArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"team_member_id"] = [DbxStringSerializer serialize:valueObj.teamMemberId];
    jsonDict[@"include_web_sessions"] = [DbxBoolSerializer serialize:valueObj.includeWebSessions];
    jsonDict[@"include_desktop_clients"] = [DbxBoolSerializer serialize:valueObj.includeDesktopClients];
    jsonDict[@"include_mobile_clients"] = [DbxBoolSerializer serialize:valueObj.includeMobileClients];

    return jsonDict;
}

+ (DbxTeamListMemberDevicesArg *)deserialize:(NSDictionary *)valueDict {
    NSString *teamMemberId = [DbxStringSerializer deserialize:valueDict];
    NSNumber *includeWebSessions = [DbxBoolSerializer deserialize:valueDict];
    NSNumber *includeDesktopClients = [DbxBoolSerializer deserialize:valueDict];
    NSNumber *includeMobileClients = [DbxBoolSerializer deserialize:valueDict];

    return [[DbxTeamListMemberDevicesArg alloc] initWithTeamMemberId:teamMemberId includeWebSessions:includeWebSessions includeDesktopClients:includeDesktopClients includeMobileClients:includeMobileClients];
}

@end