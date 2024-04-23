#ifndef PLAYER_H
#define PLAYER_H


struct Player {
    Player(int x, int y);;
    virtual ~Player();

    void render() const;

    int pos_x;
    int pos_y;




};


#endif
