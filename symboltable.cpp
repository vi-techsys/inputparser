// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023

// This file contains the body of the functions contained in The SymbolTable class. The insert function 
// inserts a new variable symbol and its value into the symbol table and the lookUp function returns
// that value of the supplied variable symbol name.

#include <string>
#include <vector>
using namespace std;

#include "symboltable.h"

void SymbolTable::insert(string variable, double value) {
    for (auto& element : elements) {
        if (element.variable == variable) {
            throw string("Variable " + variable + " initialized multiple times");
        }
    }
    elements.push_back(Symbol(variable, value));
}

double SymbolTable::lookUp(string variable) const {
    for (int i = 0; i < elements.size(); i++)
        if (elements[i].variable == variable)
            return elements[i].value;

    throw string("Uninitialized variable: " + variable);
}

