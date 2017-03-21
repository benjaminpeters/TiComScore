/**
 * titaniumcomscore
 *
 * Created by Benjamin Peters
 * Copyright (c) 2017 Your Company. All rights reserved.
 */

#import "ComBenjaminComscoreModule.h"
#import "TiBase.h"
#import "TiHost.h"
#import "TiUtils.h"

#import <comScore/ComScore.h>

@implementation ComBenjaminComscoreModule

#pragma mark Internal

// this is generated for your module, please do not change it
-(id)moduleGUID
{
	return @"7fce6f6f-ec81-425d-887e-643fd294b6ae";
}

// this is generated for your module, please do not change it
-(NSString*)moduleId
{
	return @"com.benjamin.comscore";
}

#pragma mark Lifecycle

-(void)startup
{
	// this method is called when the module is first loaded
	// you *must* call the superclass
	[super startup];

	NSLog(@"[INFO] %@ loaded",self);
}

-(void)shutdown:(id)sender
{
	// this method is called when the module is being unloaded
	// typically this is during shutdown. make sure you don't do too
	// much processing here or the app will be quit forceably

	// you *must* call the superclass
	[super shutdown:sender];
}

#pragma mark Cleanup

-(void)dealloc
{
	// release any resources that have been retained by the module
	[super dealloc];
}

#pragma mark Internal Memory Management

-(void)didReceiveMemoryWarning:(NSNotification*)notification
{
	// optionally release any resources that can be dynamically
	// reloaded once memory is available - such as caches
	[super didReceiveMemoryWarning:notification];
}

#pragma mark Listener Notifications

-(void)_listenerAdded:(NSString *)type count:(int)count
{
	if (count == 1 && [type isEqualToString:@"my_event"])
	{
		// the first (of potentially many) listener is being added
		// for event named 'my_event'
	}
}

-(void)_listenerRemoved:(NSString *)type count:(int)count
{
	if (count == 0 && [type isEqualToString:@"my_event"])
	{
		// the last listener called for event named 'my_event' has
		// been removed, we can optionally clean up any resources
		// since no body is listening at this point for that event
	}
}

#pragma Public APIs

-(id)startComScore:(id)props
{
    SCORPublisherConfiguration *publisherConfiguration = [SCORPublisherConfiguration publisherConfigurationWithBuilderBlock:^(SCORPublisherConfigurationBuilder *builder) {
        builder.publisherId = props[0];
        builder.publisherSecret = props[1];
    }];
    
    [[SCORAnalytics configuration] addClientWithConfiguration:publisherConfiguration];
    [SCORAnalytics start];
    NSLog(@"[INFO] %@ started",self);
    return @"done";
}

@end
