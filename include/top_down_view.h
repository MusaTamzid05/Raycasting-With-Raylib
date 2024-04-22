#ifndef TOP_DOWN_VIEW_H
#define TOP_DOWN_VIEW_H

#include <string>

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


};


#endif
