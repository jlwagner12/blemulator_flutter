#import "DeviceContainer.h"

@interface DartResultConverter : NSObject

+ (DeviceContainer *)deviceContainerFromDartResult:(id)result
                           peripheral:(Peripheral *)peripheral;

+ (Characteristic *)characteristicFromDartResult:(id)result;

@end
