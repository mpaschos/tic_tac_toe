#ifndef TIC_TAC_TOE_PLAYER_H
#define TIC_TAC_TOE_PLAYER_H

#include "Symbol.h"

class Player {
private:
    Symbol symbol;
    bool turn;
public:
    Player();
    explicit Player(Symbol symbol);
    ~Player()=default;

    // prevent copying
    Player(const Player&)=delete;
    Player operator=(const Player&)=delete;
};

#endif //TIC_TAC_TOE_PLAYER_H
