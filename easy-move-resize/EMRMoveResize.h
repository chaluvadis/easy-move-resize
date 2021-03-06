#import <Foundation/Foundation.h>

enum ResizeDirectionX {
    right,
    left,
    noX
};

enum ResizeSectionY {
    top,
    bottom,
    noY
};

struct ResizeSection {
    enum ResizeDirectionX xResizeDirection;
    enum ResizeSectionY yResizeDirection;
};

@interface EMRMoveResize : NSObject {
    CFMachPortRef _eventTap;
    CFRunLoopSourceRef _runLoopSource;
    struct ResizeSection _resizeSection;
    AXUIElementRef _window;
    int _tracking;
    NSPoint _wndPosition;
    NSSize _wndSize;
}

+ (id) instance;

@property CFMachPortRef eventTap;
@property CFRunLoopSourceRef runLoopSource;
@property struct ResizeSection resizeSection;
@property AXUIElementRef window;
@property int tracking;
@property NSPoint wndPosition;
@property NSSize wndSize;

@end
