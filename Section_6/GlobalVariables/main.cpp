#include <iostream>


int age {21}; //Global Variable that is never called since age is also called local
int main() {

    /*
     * Local variable
     */
    int age {16};
    std::cout << age;
    return 0;
}