//
//  PeachCollectorContext.h
//  PeachCollector
//
//  Created by Rayan Arnaout on 24.09.19.
//  Copyright © 2019 European Broadcasting Union. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PeachCollectorContextComponent.h"

NS_ASSUME_NONNULL_BEGIN

@interface PeachCollectorContext : NSObject

@property (nonatomic, copy) NSString *contextID;
@property (nonatomic, copy) NSArray<NSString *> *items;
@property (nonatomic, copy) NSNumber *itemsDisplayedCount;
@property (nonatomic, copy) NSNumber *hitIndex;
@property (nonatomic, copy) NSString *appSectionID;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) PeachCollectorContextComponent *component;

- (instancetype)initRecommendationContextWithitems:(NSArray<NSString *> *)items
                                      appSectionID:(nullable NSString *)appSectionID
                                            source:(nullable NSString *)source
                                         component:(nullable PeachCollectorContextComponent *)component
                               itemsDisplayedCount:(NSInteger)itemsDisplayedCount
                                          hitIndex:(NSInteger)hitIndex;

- (instancetype)initRecommendationContextWithitems:(NSArray<NSString *> *)items
                                      appSectionID:(nullable NSString *)appSectionID
                                            source:(nullable NSString *)source
                                         component:(nullable PeachCollectorContextComponent *)component
                               itemsDisplayedCount:(NSInteger)itemsDisplayedCount;

- (instancetype)initRecommendationContextWithitems:(NSArray<NSString *> *)items
                                      appSectionID:(nullable NSString *)appSectionID
                                            source:(nullable NSString *)source
                                         component:(nullable PeachCollectorContextComponent *)component;

- (instancetype)initMediaContextWithID:(NSString *)contextID
                             component:(nullable PeachCollectorContextComponent *)component
                          appSectionID:(nullable NSString *)appSectionID
                                source:(nullable NSString *)source;

/**
 * @return a dictionary representation of the context as defined in the Peach documentation
 */
- (nullable NSDictionary *)dictionaryRepresentation;

@end

NS_ASSUME_NONNULL_END
