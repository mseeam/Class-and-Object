/********************************************************************************
 * File  :   circle.cpp                                                         *
 * Author: Mohammad Seeam                                                       *
 * Assignment 3: Classes and Objects                                            *
 * This is a simple application to demonstrate classes and objects in C++.      *
 * This header structure and files for all cpp and h files.                     *
 * This file, circle.cpp   , includes circle.h                                  *
 *******************************************************************************/

#include "circle.h"

Circle::Circle() {
    //used own setters as 5
    setRadius(5);
}

Circle::Circle(int radius) {
    setRadius(radius);
}

Circle::~Circle() {

}

int Circle::getRadius() {
    return radius;
}

int Circle::getArea() {
    return (3.14 * (radius*radius));
}

int Circle::getCircumference(){
    return (2*(3.14)*radius);
}

//int Circle::getVolume() { //circle does not have volume
//    return height;
//}

void Circle::setRadius(int ra) {
    if (ra > MIN) {     //ra can not be less than MIN/0 because radius can not be negative
        radius = ra;
    } else {
        radius = MIN;
    }
}


