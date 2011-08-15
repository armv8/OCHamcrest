//
//  OCHamcrest - HCStringContainsInOrder.h
//  Copyright 2011 hamcrest.org. See LICENSE.txt
//
//  Created by: Jon Reid
//

#import <OCHamcrest/HCBaseMatcher.h>


@interface HCStringContainsInOrder : HCBaseMatcher
{
    NSArray *substrings;
}

+ (id)containsInOrder:(NSArray *)substringList;
- (id)initWithSubstrings:(NSArray *)substringList;

@end


OBJC_EXPORT id<HCMatcher> HC_stringContainsInOrder(NSString *substring, ...);

/**
    Matches if object is a string containing a given list of substrings in relative order.

    @param firstString,...  A comma-separated list of string ending with @c nil.
    
    This matcher first checks whether the evaluated object is a string. If so, it checks whether it 
    contains a given list of strings, in relative order to each other. The searches are performed 
    starting from the beginning of the evaluated string.
    
    (In the event of a name clash, don't \#define @c HC_SHORTHAND and use the synonym
    @c HC_stringContainsInOrder instead.)

    @ingroup text_matchers
 */
#ifdef HC_SHORTHAND
    #define stringContainsInOrder(firstString, ...) HC_stringContainsInOrder(firstString, ##__VA_ARGS__)
#endif
