#import "TGModernConversationAssociatedInputPanel.h"

#import <SSignalKit/SSignalKit.h>

@class TGBotComandInfo;
@class TGUser;

@interface TGModernConversationCommandsAssociatedPanel : TGModernConversationAssociatedInputPanel

@property (nonatomic, copy) void (^commandSelected)(TGBotComandInfo *, TGUser *);

- (void)setCommandListSignal:(SSignal *)commandListSignal;

@end
