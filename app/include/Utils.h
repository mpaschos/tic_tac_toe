#ifndef TIC_TAC_TOE_UTILS_H
#define TIC_TAC_TOE_UTILS_H

#include "Symbol.h"
#include "Cell.h"
#include <vector>

namespace utils {
    char symbolToChar(Symbol symbol);
    Symbol charToSymbol(char ch);
    std::vector<std::vector<Cell> >create2DBoard(size_t rows, size_t cols);
    void resetBoard(std::vector<std::vector<Cell> > &board);


}


#endif //TIC_TAC_TOE_UTILS_H
