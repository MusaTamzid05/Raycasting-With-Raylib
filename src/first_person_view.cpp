#include "first_person_view.h"
#include <raylib.h>


FirstPersonView::FirstPersonView() {

}

FirstPersonView::~FirstPersonView() {

}

void FirstPersonView::render() const {

    for(WallData wall_data : wall_list_data)
        DrawRectangle(
                wall_data.x,
                wall_data.y,
                wall_data.width,
                wall_data.height,
                RAYWHITE
                );

}
