

#include "Header.h"




int main()
{
    int max;
    int allmatrix;
    std::cout << "How many matrix you want to create?" << std::endl;

    std::cin >> allmatrix;
    MATRIX* matrices = new MATRIX[allmatrix];

    int max_sum = 0;
    int max_sum_index = 0;
   
    for (int i = 0; i < allmatrix; i++) {
        int  objects;

       std::cout << "enter size of your matrix:" << std::endl;
        std::cin >> objects;
        
        MATRIX obj(objects);
        
        obj.setElement();
        std::cout << "matrix number: " <<i+1<< std::endl;
        obj.printMatrix();

        max= obj.sumDiagona();
        if (max > max_sum) {
            max_sum = max;
            max_sum_index = i+1;
        }
        
  }
    std::cout << "The biggest sum is: " << max << std::endl;
    std::cout << "The matrix with the biggest calculated sum: " << max_sum_index << std::endl;
    delete[] matrices;
}
