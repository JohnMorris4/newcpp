/*
 * Section 6
 * Primitive Types
 *
 */

#include <iostream>
#include <climits>
#include <cfloat>


int main() {
/*
 * Character Type
 */

    char middle_initial {'E'};
    std::cout << "Your middle initial is " << middle_initial << std::endl;


    short val1 {30000};
    short val2 {1000};
    long product {val1 * val2};

    //std::cout << product;

    //Cfloat values
    std::cout<< "FLT_DIG " << sizeof(FLT_DIG) << std::endl;
    std::cout<< "FLT_EPSILON " << sizeof(FLT_EPSILON);





    return 0;
}