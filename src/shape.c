
#include "shape.h"
#include "debug.h"

void shape_move(struct shape *shape, short delta_x, short delta_y) {
    NULL_CHECK("shape_move()", shape);
    
    shape->offset[0] += delta_x;
    shape->offset[1] += delta_y;
}