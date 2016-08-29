///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXUSERSSpaceAllocation.h"
#import "DBXUSERSSpaceUsage.h"

@implementation DBXUSERSSpaceUsage 

- (instancetype)initWithUsed:(NSNumber *)used allocation:(DBXUSERSSpaceAllocation *)allocation {

    self = [super init];
    if (self) {
        _used = used;
        _allocation = allocation;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)instance {
    return [DBXUSERSSpaceUsageSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXUSERSSpaceUsageSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXUSERSSpaceUsageSerializer serialize:self] description];
}

@end


@implementation DBXUSERSSpaceUsageSerializer 

+ (NSDictionary *)serialize:(DBXUSERSSpaceUsage *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"used"] = valueObj.used;
    jsonDict[@"allocation"] = [DBXUSERSSpaceAllocationSerializer serialize:valueObj.allocation];

    return jsonDict;
}

+ (DBXUSERSSpaceUsage *)deserialize:(NSDictionary *)valueDict {
    NSNumber *used = valueDict[@"used"];
    DBXUSERSSpaceAllocation *allocation = [DBXUSERSSpaceAllocationSerializer deserialize:valueDict[@"allocation"]];

    return [[DBXUSERSSpaceUsage alloc] initWithUsed:used allocation:allocation];
}

@end