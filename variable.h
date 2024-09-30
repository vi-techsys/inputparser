// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023

// This file contains the class definition of the Variable class. The variable is represented by its
// name, which the construcor initializes. Because this class is a subclass of Operand which in turn is 
// a subclass of Expression, it must implement the function evaluate, whose body is defined in variable.cpp.

// variable.h
#ifndef VARIABLE_H
#define VARIABLE_H

#include "symboltable.h"

extern SymbolTable symbolTable;

class Variable: public Operand {
public:
    Variable(string name) { this->name = name; }
    double evaluate() { return symbolTable.lookUp(name); }
private:
    string name;
};

#endif