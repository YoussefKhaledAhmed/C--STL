#include <array>
#include <vector>
#include <iostream>
#include <iterator>

/* space that provides some custom methods for STLs */
namespace custom_TL{

    /* 1. Array: */
    class array
    {
    private:
        /* data */
    public:

        template <std::size_t size>
        void print_array(const int *ptr , std::array<int , size>* ptr_2, const int size_arr){
            
            std::cout <<"for loop over std::array<int , size>* ptr_2 using .at() method"<<std::endl;
            /* 1. for loop over the ptr */
            for(char i = 0 ;i<size_arr ; i++){
                std::cout<<"element -> "<<ptr[i]<<std::endl;
            }

            std::cout <<"for loop over const int *ptr  using [] operator"<<std::endl;
            /* 2. for loop over the ptr_2 */
            for(char i = 0 ;i<size_arr ; i++){
                std::cout<<"element -> "<<(*ptr_2).at(i)<<std::endl;
            }
        }

        template <std::size_t size>
        void swap_array(std::array<int , size> ptr_arr1 , std::array<int , size> ptr_arr2){

            /* Before swaping: */
            std::cout<<"\nbefore swaping: \n";
            for(char i=0 ; i<size ; i++){
                std::cout<< "arr-1 -> " << ptr_arr1.at(i) <<  "  , arr-2 -> " << ptr_arr2.at(i) <<"\n";
            }

            ptr_arr1.swap(ptr_arr2);

            /* After swaping: */
            std::cout<<"\nAfter swaping: \n";
            for(char i=0 ; i<size ; i++){
                std::cout<< "arr_1 -> " << ptr_arr1.at(i) <<  "  , arr_2 -> " << ptr_arr2.at(i) <<"\n";
            }
        }
    };

    /* 2. Vector: */
    class vector
    {
    private:
        /* data */
    public:
        template <typename T>
        void print_vector(const int * ptr_1 , std::vector<T , std::allocator<T>> * ptr_2 , const int * size);
    };
}


/* Classes functions: to avoid being inline.*/
/* vector methods: */
template <typename T>
void custom_TL::vector::print_vector(const int * ptr_1 , std::vector<T , std::allocator<T>> * ptr_2 , const int * size){

    typename std::vector<T>::iterator it = ptr_2->begin();

    /* 1. using the first argument: const int * ptr_1 */
    std::cout << "printing vector using int * ptr_1: \n";

    for(char i=0 ; i<(*size) ; i++){
        std::cout<< ptr_1[i]<<"  ";
    }
    std::cout<<"\n";
    

    /* 2. using the second argument: std::vector<T , std::allocator<T>> * ptr_2 */
    std::cout << "printing vector using std::vector<T> * ptr_2: \n";

    for(int x : *ptr_2){
        std::cout<< x <<"  ";
    }
    std::cout <<"\n";

    /* using iterator: it */
    std::cout << "printing vector using iterators over std::vector<T> * ptr_2: \n";

    for(it ; it<ptr_2->end() ; it++){
        std::cout<< *it <<"  ";
    }
    std::cout <<"\n";
}