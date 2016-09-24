/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVTimer : NSObject {
    double  _interval;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

@property (readonly) double interval;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithTimeInterval:(double)arg1 queue:(id)arg2 block:(id /* block */)arg3 repeats:(BOOL)arg4;
- (double)interval;
- (void)invalidate;

@end