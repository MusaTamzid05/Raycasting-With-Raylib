#ifndef DATA_TYPES_H
#define DATA_TYPES_H

struct MapRectData {

    MapRectData(
            int x,
            int y,
            int width,
            int height,
            char value
            );
    int x;
    int y;
    int width;
    int height;
    char value;
    bool active;

};

struct RayData {
    RayData(int x, int y);
    int x;
    int y;
};


#endif
