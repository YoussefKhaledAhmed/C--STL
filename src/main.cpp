#include "arr_test.hpp"
#include "vector_test.hpp"
#include <iostream>

#define ARR_CHOICE     0
#define VECTOR_CHOICE  1

int main(){
    int test_choice = ARR_CHOICE;
    std::cout << "which choice u want: \n \
    1.array  -> 0\n \
    2.vector -> 1\n\
    choice: ";
    std::cin >> test_choice;
    
    switch (test_choice)
    {
    case ARR_CHOICE:
        arr_test();
        break;
    
    case VECTOR_CHOICE:
        vector_test();
        break;
    }
    
    return 0;
}