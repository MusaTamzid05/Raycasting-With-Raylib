#ifndef CONSTS_H
#define CONSTS_H

#include <string>
#include <cmath>

const std::string TITLE = "Raycasting with Raylib";


const int WINDOW_WIDTH = 1024;
const int WINDOW_HEIGHT = 768;

const int RECT_COUNT_PER_ROW = 16;

const int PLAYER_WIDTH = 16;
const int PLAYER_HEIGHT = 16;
const int PLAYER_SPEED = 100;

const float FOV = M_PI / 3.0f;
const float PLAYER_FOV_STARTING_ANGLE = 1.526f;
const int RAY_DISTANCE = 80;

#endif
