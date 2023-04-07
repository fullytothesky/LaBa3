#pragma once
#include <iostream>
#include <string>

class MATRIX {

    int amount;
    int** mat;

public:
    MATRIX() ;
    MATRIX(int n) ;
    ~MATRIX() ;
    void setElement() ;
    void printMatrix() ;
    int sumDiagona() ;


};