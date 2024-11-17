#include <vector>
#include <iostream>
#include "custom_methods.hpp"

void vector_test(){

    /* vector size: */
    int vect_size = 5;

    /* vector: */
    /* constructor: (5 , 2)-> 5 elements with 2 as initial value. *
     *           or (5 , 3)-> 5 elements with 3 as initial value. */
    // std::vector <int>vect_1(vect_size , 2);
    std::vector<int>vect_1 = {1,2,3,4,5};
    std::vector <int>vect_2(vect_size , 3);
    
    custom_TL::vector custom_vect_methods;

    /* printing both vectors: */
    custom_vect_methods.print_vector(vect_1.data() , &vect_1 , &vect_size);
}