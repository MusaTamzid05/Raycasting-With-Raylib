#ifndef APP_H
#define APP_H


struct App {
    App();
    virtual ~App();

    void run();


    void render();
    void update();
    void handle_event();
};


#endif
