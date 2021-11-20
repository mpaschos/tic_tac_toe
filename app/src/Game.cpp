#include "../include/Game.h"
#include "../include/Utils.h"

#include <iostream>

Game::Game() : size(3), board(size, std::vector<Cell>(size)), player1(), player2(){}


Game::~Game() {
    resetBoard();
    displayBoard();
}

void Game::resetBoard() {

}

void Game::displayBoard() {
    printf("****", size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
           board[i][j].displayCell();
        }
    }
}



