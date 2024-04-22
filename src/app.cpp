#include "app.h"
#include "consts.h"
#include <raylib.h>


App::App() {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, TITLE.c_str());
    SetTargetFPS(60);

}


App::~App() {

}


void App::run() {

    while(!WindowShouldClose()) {
        handle_event();
        update();
        render();

    }

}


void App::render() {
    BeginDrawing();
        ClearBackground(Color{68, 93, 72});

    EndDrawing();

}

void App::handle_event() {

}




void App::update() {

}


