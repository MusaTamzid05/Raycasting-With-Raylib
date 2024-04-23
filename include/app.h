#ifndef APP_H
#define APP_H

struct TopDownView;
struct Player;

struct App {
    App();
    virtual ~App();

    void run();


    void render();
    void update();
    void handle_event();

    TopDownView* top_down_view;
    Player* player;
};


#endif
