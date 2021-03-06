/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBSplitRow : NSObject {
    UIKBTree * _attrlistLeft;
    UIKBTree * _attrlistRight;
    struct CGSize { 
        float width; 
        float height; 
    }  _defaultKeySize;
    UIKBTree * _geolistLeft;
    UIKBTree * _geolistRight;
    NSDictionary * _hints;
    UIKBTree * _keylistLeft;
    UIKBTree * _keylistRight;
    NSMutableArray * _keys;
    unsigned char  _rowIndex;
    float  _rowOffset;
    float  _rowWidth;
    NSMutableArray * _vacancies;
}

@property struct CGSize { float x1; float x2; } defaultKeySize;
@property (retain) NSDictionary *hints;
@property (readonly) NSMutableArray *keys;
@property (nonatomic) unsigned char rowIndex;
@property float rowOffset;
@property float rowWidth;

- (void)addKey:(id)arg1;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })defaultKeySize;
- (id)description;
- (id)hints;
- (id)init;
- (id)keyAtIndex:(int)arg1;
- (id)keys;
- (id)listOfType:(int)arg1 left:(BOOL)arg2;
- (unsigned char)rowIndex;
- (float)rowOffset;
- (float)rowWidth;
- (void)setDefaultKeySize:(struct CGSize { float x1; float x2; })arg1;
- (void)setHints:(id)arg1;
- (void)setRowIndex:(unsigned char)arg1;
- (void)setRowOffset:(float)arg1;
- (void)setRowWidth:(float)arg1;

@end
