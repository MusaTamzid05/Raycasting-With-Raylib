#ifndef PLAYER_H
#define PLAYER_H


struct Player {
    Player(int x, int y);;
    virtual ~Player();

    void render() const;

    int pos_x;
    int pos_y;

    void up();
    void down();
    void left();
    void right();

    float get_current_delta_speed() const;




};


#endif
