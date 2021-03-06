/**
 * machine_specific.h
 * 기기별로 다른 변수들을 모아 놓았습니다.
 * 다른 곳에 두기에는 너무 제 Odroid-C1에 국한된 것들이 많아서
 * 여기에 배치했습니다.
 */

#ifndef machine_specific_h
#define machine_specific_h

#define TS_FD_PATH                   "/dev/input/event1"
#define DP_FD_PATH                   "/dev/fb2"

#ifdef NONBLOCK_READ
#define TS_OPEN_OPTION               O_RDONLY | O_NONBLOCK
#else
#define TS_OPEN_OPTION               O_RDONLY
#endif

#define DP_OPEN_OPTION               O_RDWR

#define DP_WIDTH                     320
#define DP_HEIGHT                    240

#define PIXEL_SIZE                   2

#define DP_MEM_SIZE		             (DP_WIDTH * DP_HEIGHT)
#define DP_MEM_SIZEB	             (DP_MEM_SIZE * PIXEL_SIZE)
#define DP_BITMAP_SIZE	             (DP_MEM_SIZE / 32)
#define DP_BITMAP_SIZEB	             (DP_BITMAP_SIZE * 4)

#define TS_WDITH                     4096 /* 2^12 */
#define TS_HEIGHT                    4096

#define TS_X_MIN                     310
#define TS_X_MAX                     3900
#define TS_Y_MIN                     150
#define TS_Y_MAX                     3900

#define PAINT_DEFAULT_BACK_COLOR    COLOR_WHITE
#define PAINT_DEFAULT_DRAW_COLOR    COLOR_BLACK
#define PAINT_DEFAULT_MODE          MODE_LINE

#define UI_DEFAULT_BACK_COLOR		COLOR(180, 180, 180)
#define UI_DEFAULT_TEXT_COLOR		COLOR_BLACK
#define UI_DEFAULT_CANVAS_COLOR		COLOR_WHITE

#endif /* machine_specific_h */
