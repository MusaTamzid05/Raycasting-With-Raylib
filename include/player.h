#ifndef PLAYER_H
#define PLAYER_H

struct TopDownView;

#include <vector>
#include "data_types.h"


struct Player {
    Player(
            int x,
            int y,
            TopDownView* top_down_view);
    virtual ~Player();

    void render() const;
    void update_ray();

    int pos_x;
    int pos_y;

    int max_x;
    int max_y;

    void up();
    void down();
    void left();
    void right();

    float get_current_delta_speed() const;
    TopDownView* top_down_view;

    std::vector<RayData> ray_data_list;
    std::vector<WallData> wall_list_data;




};


#endif
