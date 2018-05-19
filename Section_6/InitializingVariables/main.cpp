#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {




    cout << "What is the Length of the room? ";
    double room_length {0};
    cin >> room_length;

    cout << "What is the Width of the room? ";
    double room_width {0};
    cin >> room_width;



    cout << "The area of the room is: " << room_length * room_width << " SqFt";



    return 0;
}