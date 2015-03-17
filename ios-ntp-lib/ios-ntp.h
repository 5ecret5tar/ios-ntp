/*╔══════════════════════════════════════════════════════════════════════════════════════════════════╗
  ║ NetworkClock.h                                                                                   ║
  ║                                                                                                  ║
  ║ Created by Gavin Eadie on Oct17/10                                                               ║
  ║ Copyright 2010 Ramsay Consulting. All rights reserved.                                           ║
  ╚══════════════════════════════════════════════════════════════════════════════════════════════════╝*/

#define NTP_Logging(fmt, ...)
#define LogInProduction(fmt, ...) \
    NSLog((@"%@|" fmt), [NSString stringWithFormat: @"%16s", \
        [[[self class] description] UTF8String]], ##__VA_ARGS__)

#ifdef IOS_NTP_LOGGING
    #undef NTP_Logging
    #define NTP_Logging(fmt, ...) \
        NSLog((@"%@|" fmt), [NSString stringWithFormat: @"%16s", \
            [[[self class] description] UTF8String]], ##__VA_ARGS__)
#endif

#import "NetAssociation.h"
#import "NetworkClock.h"
#import "NSDate+NetworkClock.h"