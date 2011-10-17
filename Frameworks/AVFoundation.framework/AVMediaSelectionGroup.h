/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMediaSelectionGroupInternal, NSArray;

@interface AVMediaSelectionGroup : NSObject <NSCopying> {
    AVMediaSelectionGroupInternal *_mediaSelectionGroup;
}

@property(readonly) NSArray * options;
@property(readonly) BOOL allowsEmptySelection;

+ (id)playableMediaSelectionOptionsFromArray:(id)arg1;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withLocale:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withMediaCharacteristics:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withoutMediaCharacteristics:(id)arg2;
+ (id)mediaSelectionGroupWithAsset:(id)arg1 dictionary:(id)arg2;
+ (id)mediaSelectionGroupWithAsset:(id)arg1 alternateTrackIDs:(id)arg2;
+ (id)mediaSelectionGroupWithAsset:(id)arg1 trackID:(int)arg2;

- (void)finalize;
- (id)options;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
- (BOOL)_isAlternateTrackGroup;
- (BOOL)allowsEmptySelection;
- (BOOL)_isKeyValueGroup;
- (id)asset;
- (id)_weakReference;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;

@end