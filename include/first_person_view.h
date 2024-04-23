#ifndef FIRST_PERSON_VIEW_H
#define FIRST_PERSON_VIEW_H

#include "data_types.h"
#include <vector>

struct FirstPersonView {
    FirstPersonView();
    virtual ~FirstPersonView();

    void render() const;

    std::vector<WallData> wall_list_data;

};

#endif
