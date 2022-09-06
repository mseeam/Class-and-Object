/********************************************************************************
 * File  :   main.cpp                                                           *
 * Author: Mohammad Seeam                                                       *
 * Assignment 3: Classes and Objects                                            *
 * This is a simple application to demonstrate classes and objects in C++.      *
 * This header structure and files for all cpp and h files.                     *
 * This file, main.cpp, includes only main.h.                                   *
 *******************************************************************************/

#include "main.h"

int main(int argc, char** argv) {
    //creates a circle object with no parameters
    Circle myCircle1;
    //creates a circle object with radius 5
    Circle myCircle2(50);

    //creates a sphere object with no parameters
    Sphere mySphere1;
    //creates a sphere object with radius 10
    Sphere mySphere2(100);

    //examples of passing objects by reference
    displayCircle(&myCircle1);
    displayCircle(&myCircle2);

    displaySphere(&mySphere1);
    displaySphere(&mySphere2);

    return 0;
}