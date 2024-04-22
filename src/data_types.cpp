#include "data_types.h"



MapRectData::MapRectData(
        int x,
        int y,
        int width,
        int height,
        char value
        ):
    x(x),
    y(y),
    width(width),
    height(height),
    value(value) {
        active = value == ' ' ? false : true;


    }
