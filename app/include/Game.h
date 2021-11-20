#ifndef TIC_TAC_TOE_GAME_H
#define TIC_TAC_TOE_GAME_H

#include "Symbol.h"
#include "Cell.h"
#include "Player.h"
#include <vector>

class Game {

private:
    const short size;
    std::vector<std::vector<Cell>> board;
    Player player1;
    Player player2;

public:
    Game();
    ~Game();

    // prevent copying
    Game(const Game&)=delete;
    Game operator=(const Game&)=delete;

    void resetBoard();
    void displayBoard();
};

#endif //TIC_TAC_TOE_GAME_H
