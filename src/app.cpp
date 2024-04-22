#include "app.h"
#include "consts.h"
#include "top_down_view.h"
#include <raylib.h>


App::App() {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, TITLE.c_str());
    SetTargetFPS(60);

    top_down_view = new TopDownView(
            "../resources/map1.txt",
            WINDOW_WIDTH,
            WINDOW_HEIGHT
            );


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
        top_down_view->render();

    EndDrawing();

}

void App::handle_event() {

}




void App::update() {

}


