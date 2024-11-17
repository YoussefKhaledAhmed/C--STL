#include <iostream>
#include <array>
#include "custom_methods.hpp"

int arr_test(){
    std::array<int , 5> my_arr = {1,2,3,4,5};
    std::array<int , 5> my_arr_2;
    custom_TL::array custom_arr_methods;

    /* 1. Element access: */
    /* a. method: at() */
    std::cout << my_arr.at(2)<<std::endl;
    // std::cout<< my_arr.at(10)<<std::endl; --> this will generate an error.

    /* b. [] operator: */
    std::cout << my_arr[2] << std::endl;
    std::cout << my_arr[10] << std::endl;

    /* c. method: front() */
    std::cout<<my_arr.front()<<std::endl;

    /* d. method: back() */
    std::cout<<my_arr.back()<<std::endl;

    /* e. method: data() */
    /* argument_1: passed using method: data()  *
     * argument_2: passed using the address of  *
     *             my_arr it self as an object. *
     * argument_3: size of the arr.             */
    custom_arr_methods.print_array(my_arr.data() , &my_arr , my_arr.size());


    /* all of them have the same value: */
    std::cout<<"First_argument -> "<< my_arr.data() << std::endl;
    std::cout<<"Second_argument -> "<< &my_arr << std::endl;
    std::cout<<"Second_argument -> "<< &(my_arr[0]) << std::endl;

    /* Operations: */
    /* 1. fill operation: */
    my_arr.fill(2);
    my_arr_2.fill(3);
    custom_arr_methods.print_array(my_arr.data() , &my_arr , my_arr.size());

    /* 2. Swap operation: */
    custom_arr_methods.swap_array(my_arr , my_arr_2);

    return 0;
}
