//
//  SVPlacemark.h
//  SVGeocoder
//
//  Created by Sam Vermette on 01.05.11.
//  Copyright 2011 Sam Vermette. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface SVPlacemark : MKPlacemark {

}

@property (nonatomic, readwrite) CLLocationCoordinate2D coordinate;
@property (nonatomic, strong) NSString * formattedAddress;
@property (nonatomic, strong) NSString * title;
@property (nonatomic, strong) NSString * subtitle;

@end
