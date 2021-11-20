#include "../include/Cell.h"
#include "../include/Utils.h"
#include <iostream>

Cell::Cell() : i(-1), j(-1), symbol(Symbol::EMPTY) {}

Cell::Cell(int i, int j) : i(i), j(j), symbol(Symbol::EMPTY) {}

Cell::~Cell() {
    setI(-1);
    setJ(-1);
    setSymbol(Symbol::INVALID);
}

int Cell::getI() const {
    return i;
}

void Cell::setI(int iCoord) {
    Cell::i = iCoord;
}

int Cell::getJ() const {
    return j;
}

void Cell::setJ(int jCoord) {
    Cell::j = jCoord;
}

Symbol Cell::getSymbol() const {
    return symbol;
}

void Cell::setSymbol(Symbol sym) {
    Cell::symbol = sym;
}

Cell::Cell(const Cell &cell) {
    this->setI(cell.getI());
    this->setJ(cell.getJ());
    this->setSymbol(cell.getSymbol());
}

Cell& Cell::operator=(const Cell& rhs) {
    // handle self-assignment
    if (this == &rhs) {
        return *this;
    } else {
        this->setI(rhs.getI());
        this->setJ(rhs.getJ());
        this->setSymbol(rhs.getSymbol());
        return *this;
    }
}

void Cell::displayCell() {
    std::cout << utils::symbolToChar(this->getSymbol());
}


