#include <iostream>

int main() {
    //part a create normal 5x5 array
    int arr[5][5];
    for (int i = 0;i < 5;i++) {
        for(int j = 0; j < 5; j++) {
            arr[i][j] = i * 5 + j;
        }
    }
    //part b print row major
    std::cout << "Row Major" << std::endl;
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //part a print column major
    std::cout << "Column Major" << std::endl;
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << arr[j][i] << " ";

        }
        std::cout << std::endl;
    }

    //print row major using pointer
    int *xptr = &(arr[0][0]);
    std::cout << std::endl;
    std::cout << "Print using pointers Row Major" << std::endl;
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
        std::cout << *xptr << " ";
            xptr++;

        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //part a and b make second array using pointers
    int arr2[5][5];
    int *xptr2 = &(arr2[0][0]);

    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr2[i][j] = i * 5 + j;
        }
    }


    //print column major using pointer
    std::cout << "\nPrint using pointers in column major after creating new"
                 "array because why would i refill the last one, also these "
                 "instructions are very weird and couldve been arranged "
                 "much easier" << std::endl;
    xptr = &(arr2[0][0]);
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            std::cout << *(*(arr2 + j)+i) << " ";
            xptr++;
        }
        std::cout << std::endl;
    }

}
