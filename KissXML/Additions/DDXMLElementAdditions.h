#import <Foundation/Foundation.h>
#import <KissXML/DDXMLElement.h>

// These methods are not part of the standard NSXML API.
// But any developer working extensively with XML will likely appreciate them.

@interface DDXMLElement (DDAdditions)

+ (DDXMLElement *)elementWithName:(NSString *)name xmlns:(NSString *)ns;

- (DDXMLElement *)elementForName:(NSString *)name;
- (DDXMLElement *)elementForName:(NSString *)name xmlns:(NSString *)xmlns;

@property (nonatomic, strong) NSString *xmlns;
@property (nonatomic, readonly) NSString *prettyXMLString;
@property (nonatomic, readonly) NSString *compactXMLString;

- (void)addAttributeWithName:(NSString *)name stringValue:(NSString *)string;
@property (nonatomic, readonly) NSDictionary *attributesAsDictionary;

@end
