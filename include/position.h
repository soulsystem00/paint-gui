/**
 * position.h
 * list.h에서 씁니다!
 */

#ifndef position_h
#define position_h

#define POISON_POINTER_DELTA    0

#define LIST_POISON1            ((void *) 0x100 + POISON_POINTER_DELTA)
#define LIST_POISON2            ((void *) 0x200 + POISON_POINTER_DELTA)

#endif /* position_h */
