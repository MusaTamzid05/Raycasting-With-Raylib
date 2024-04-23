#include "player.h"
#include "consts.h"
#include "top_down_view.h"
#include <raylib.h>
#include <iostream>


Player::Player(int x, int y, TopDownView* top_down_view):
    pos_x(x),
    pos_y(y),
    top_down_view(top_down_view) {
        max_x = top_down_view->width;
        max_y = top_down_view->height;

        update_ray();

}

Player::~Player() {

}

void Player::render() const {
    DrawRectangle(
            pos_x,
            pos_y,
            PLAYER_WIDTH,
            PLAYER_HEIGHT,
            RED
            );

    for(RayData ray_data : ray_data_list)
        DrawPixel(
                ray_data.x,
                ray_data.y,
                YELLOW
                );

}

void Player::update_ray() {

    ray_data_list.clear();


    int cell_width = top_down_view->cell_width;
    int cell_height = top_down_view->cell_height;

    float center_x = pos_x + (PLAYER_WIDTH / 2.0f);

    
    for(int i = 0; i < top_down_view->width; i += 1) {
        float angle = PLAYER_FOV_STARTING_ANGLE - FOV / 2 + FOV * i / (top_down_view->width);

        for(float r = 0.0f; r < RAY_DISTANCE; r += 1.0f) {
            int x = int(center_x + r * cos(angle));
            int y = int(pos_y - r * sin(angle));

            int col_index = x / cell_width;
            int row_index = y / cell_height;

            char value = top_down_view->rect_list[row_index][col_index].value;

            if(value != ' ') {
                break;
            }

            ray_data_list.push_back(RayData(x, y));




        }



    }

}

void Player::up() {
    if(pos_y <= 0)
        return;

    pos_y -= get_current_delta_speed();
    update_ray();
}


void Player::down() {
    if(pos_y >= max_y - PLAYER_HEIGHT)
        return;

    pos_y += get_current_delta_speed();
    update_ray();
}


void Player::left() {
    if(pos_x <= 0)
        return;
    pos_x -= get_current_delta_speed();
    update_ray();
}
void Player::right() {
    if(pos_x >=  max_x - PLAYER_WIDTH)
        return;

    pos_x += get_current_delta_speed();
    update_ray();
}


float Player::get_current_delta_speed() const {
    return PLAYER_SPEED * GetFrameTime();

}
