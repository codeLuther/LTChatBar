//
//  LTChatEmojiPageView.h
//  LTChatBarDemo
//
//  Created by Luther on 2019/5/9.
//  Copyright © 2019 mrstock. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LTChatEmojiThemeModel.h"

@interface LTChatEmojiPageView : UICollectionViewCell

@property (nonatomic, assign) LTChatEmojiThemeStyle themeStyle;

- (void)loadPerPageEmojiData:(NSArray *)emojiData;

@end

