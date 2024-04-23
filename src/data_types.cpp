#include "data_types.h"
#include "consts.h"



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



RayData::RayData(int x, int y):
    x(x),
    y(y) {}


WallData::WallData(
    int index,
    float height
    ) {

    x = TOP_DOWN_WIDTH + (TOP_DOWN_WIDTH - index);
    y = TOP_DOWN_HEIGHT / 2.0f - height / 2.0f;
    width = 1.0f;
    this->height = height;

}
