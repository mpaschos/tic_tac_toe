#ifndef TIC_TAC_TOE_CELL_H
#define TIC_TAC_TOE_CELL_H

#include "Symbol.h"

class Cell {
private:
    int i;
    int j;
    Symbol symbol;
public:
    Cell();
    explicit Cell(int i, int j);
    ~Cell();
    Cell(const Cell& cell);
    Cell& operator=(const Cell& rhs);

    int getI() const;

    void setI(int i);

    int getJ() const;

    void setJ(int j);

    Symbol getSymbol() const;

    void setSymbol(Symbol symbol);

    void displayCell();

};

#endif //TIC_TAC_TOE_CELL_H
