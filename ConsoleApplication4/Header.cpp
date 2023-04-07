#include "Header.h"


    MATRIX::MATRIX() {
        amount = 0;
        mat = nullptr;
    }
    MATRIX::MATRIX(int n) {
        amount = n;
        mat = new int* [amount];

        for (int i = 0; i < amount; i++) {

            mat[i] = new int[amount];
        }

    }

    MATRIX::~MATRIX() {
        for (int i = 0; i < amount; i++) {
            delete[] mat[i];
        }
        delete[] mat;
    }

    void MATRIX::setElement() {

        for (int i = 0; i < amount; i++) {
            for (int j = 0; j < amount; j++) {
                std::cout << "Enter element of row " << i << " number " << j << std::endl;
                std::cin >> mat[i][j];
            }
        }

    }
    void MATRIX::printMatrix() {
        std::cout << "matrix:" << std::endl;
        for (int i = 0; i < amount; i++) {
            for (int j = 0; j < amount; j++) {

                std::cout << mat[i][j] << "  ";

            }
            std::cout << "\n";
        }
    }

    int MATRIX::sumDiagona() {
        int max_sum = 0;
        int max_sum_index = 0;
        int current_sum = 0;
        for (int j = 0; j < amount; j++) {
            current_sum += mat[j][j];
        }

        
        if (current_sum > max_sum) {
            max_sum = current_sum;

        }
        return max_sum;
    }



