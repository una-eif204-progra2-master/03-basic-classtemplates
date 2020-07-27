/*
 * =====================================================================================
 *
 *       Filename:  BasicClassTemplate.cpp
 *
 *    Description:  Basic Class Template
 *
 *        Created:  26/07/2020
 *
 *         Author:  Maikol Guzmán mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iostream>  // allows program to output data to the screen

template<typename T>
struct MyStruct {
    T data;
};

// function main begins program execution
int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;  // display message

    MyStruct<int> myStruct;
    // MyStruct myStruct; // error because the type must be specified

    myStruct.data = 2;

    assert(typeid(myStruct.data) == typeid(int)); // Assert testing

    return 0;  // indicate that program ended successfully
}  // end function main
