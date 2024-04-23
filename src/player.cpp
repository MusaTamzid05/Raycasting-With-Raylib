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
