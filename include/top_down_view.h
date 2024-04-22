#ifndef TOP_DOWN_VIEW_H
#define TOP_DOWN_VIEW_H

#include <string>
#include <vector>
#include "data_types.h"

struct TopDownView {
    TopDownView(
            const std::string& map_path,
            int width,
            int height
            );

    virtual ~TopDownView();

    void render();

    int width;
    int height;


    std::vector<MapRectData> rect_list;


};


#endif
