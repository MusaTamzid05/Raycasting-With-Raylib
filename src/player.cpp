#include "player.h"
#include "consts.h"
#include <raylib.h>


Player::Player(int x, int y):
    pos_x(x),
    pos_y(y) {

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

}

void Player::up() {
    pos_y -= get_current_delta_speed();
}


void Player::down() {
    pos_y += get_current_delta_speed();
}


void Player::left() {
    pos_x -= get_current_delta_speed();
}
void Player::right() {
    pos_x += get_current_delta_speed();
}


float Player::get_current_delta_speed() const {
    return PLAYER_SPEED * GetFrameTime();

}
