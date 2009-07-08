#include <CoreFoundation/CoreFoundation.h>

typdef struct __CTSMSMessage CTSMSMessage; //no need for a formal declaration of the fields because it is always accessed through a pointer.

CFStringRef        CTSMSMessageCopyAddress(void *, CTSMSMessage *); void* unknown
CFStringRef        CTSMSMessageCopyText(void *, CTSMSMessage *); //void* is unknown, again;
CTSMSMessage* 	   CTSMSMessageCreate(void*,CFStringRef number, CFStringRef message); // pass null for the void*, it seems to work fine.  documenting what that does should be done in the future;
void 		   CTSMSMessageSend(void *, CTSMSMessage*); // first void* is the CTTelephonyCenter, use the next function to get it. 
void* 		   CTTelephonyCenterGetDefault(); // "magic" thing, no idea what this does.

