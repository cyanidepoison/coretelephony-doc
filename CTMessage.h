#import <NSObject.h>

@class CTPhoneNumber, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<CTMessageAddress><NSCopying>, NSString;

@interface CTMessage : NSObject
{
    NSObject<CTMessageAddress><NSCopying> *_sender;
    NSMutableArray *_recipients;
    NSMutableArray *_items;
    NSDictionary *_rawHeaders;
    NSDate *_date;
    unsigned int _messageId;
    int _messageType;
    CTPhoneNumber *_serviceCenter;
    NSString *_subject;
    NSString *_contentType;
    NSMutableDictionary *_contentTypeParams;
    unsigned int _replaceMessage;
}

- (id)init;
- (id)initWithDate:(id)fp8;
- (void)dealloc;
- (void)setRawHeaders:(id)fp8;
- (void)setReplaceMessage:(unsigned int)fp8;
- (void)addRecipient:(id)fp8;
- (void)addPhoneRecipient:(id)fp8;
- (void)addEmailRecipient:(id)fp8;
- (id)addText:(id)fp8;
- (id)addData:(id)fp8 withContentType:(id)fp12;
- (id)addPart:(id)fp8;
- (id)contentTypeParameterWithName:(id)fp8;
- (void)addContentTypeParameterWithName:(id)fp8 value:(id)fp12;
- (id)allContentTypeParameterNames;
- (unsigned int)replaceMessage;
- (id)contentType;
- (void)setContentType:(id)fp8;
- (id)rawHeaders;
- (id)sender;
- (void)setSender:(id)fp8;
- (id)subject;
- (void)setSubject:(id)fp8;
- (id)serviceCenter;
- (void)setServiceCenter:(id)fp8;
- (int)messageType;
- (void)setMessageType:(int)fp8;
- (id)items;
- (unsigned int)messageId;
- (void)setMessageId:(unsigned int)fp8;
- (id)date;
- (id)recipients;

@end

