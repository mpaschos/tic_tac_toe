
#include <cctype>
#include <vector>
#include "../include/Utils.h"

char utils::symbolToChar(Symbol symbol){
    switch (symbol) {
        case Symbol::EMPTY:
        return ' ';
        case Symbol::X:
            return 'X';
        case Symbol::O:
            return 'O';
        default:
            return 'F';
    }
}

Symbol utils::charToSymbol(char ch) {
    ch = toupper(ch);
    switch (ch) {
        case ' ':
            return Symbol::EMPTY;
        case 'X':
            return Symbol::X;
        case 'O':
            return Symbol::O;
        default:
            return Symbol::INVALID;
    }
}

std::vector<std::vector<Cell> > utils::create2DBoard(size_t rows, size_t cols) {
    std::vector<std::vector<Cell> > board(rows, std::vector<Cell>(cols, Cell()));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            board[i][j] = Cell(i, j);
        }
    }
    return board;
}


// Reset a 2D board to the default tic tac toe board configuration
void utils::resetBoard(std::vector<std::vector<Cell> > &board) {

    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board.size(); ++j) {
            board[i][j].setSymbol(Symbol::EMPTY);
        }
    }
}

