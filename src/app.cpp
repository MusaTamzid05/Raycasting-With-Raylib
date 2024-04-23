#include "app.h"
#include "consts.h"
#include "top_down_view.h"
#include "player.h"
#include <raylib.h>


App::App() {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, TITLE.c_str());
    SetTargetFPS(60);

    top_down_view = new TopDownView(
            "../resources/map1.txt"
            );

    player = new Player(
            TOP_DOWN_WIDTH - 100,
            TOP_DOWN_HEIGHT - 100,
            top_down_view
            );


}


App::~App() {
    delete player;
    delete top_down_view;

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
        player->render();

    EndDrawing();

}

void App::handle_event() {

    if(IsKeyDown(KEY_W))
        player->up();

    if(IsKeyDown(KEY_S))
        player->down();

    if(IsKeyDown(KEY_A))
        player->left();

    if(IsKeyDown(KEY_D))
        player->right();

}




void App::update() {

}


