/********************************************************************************
 * File  :   functions.cpp                                                      *
 * Author: Mohammad Seeam                                                       *
 * Assignment 3: Classes and Objects                                            *
 * This is a simple application to demonstrate classes and objects in C++.      *
 * This header structure and files for all cpp and h files.                     *
 * This file, functions.cpp  , includes functions.h                             * 
 * This is the only file which prints                                           *
 *******************************************************************************/

#include "functions.h"

void displayCircle(Circle *myCircle){

    std::cout << myCircle->getRadius() << std::endl;
    std::cout << myCircle->getArea() << std::endl;
    std::cout << myCircle->getCircumference() << std::endl;
    std::cout << std::endl;
    
}

void displaySphere(Sphere *mySphere){

    std::cout << mySphere->getRadius() << std::endl;
    std::cout << mySphere->getArea() << std::endl;
    std::cout << mySphere->getCircumference() << std::endl;
    std::cout << mySphere->getVolume() << std::endl;
    std::cout << std::endl;

}