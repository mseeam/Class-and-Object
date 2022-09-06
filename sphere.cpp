/********************************************************************************
 * File  :   sphere.cpp                                                         *
 * Author: Mohammad Seeam                                                       *
 * Assignment 3: Classes and Objects                                            *
 * This is a simple application to demonstrate classes and objects in C++.      *
 * This header structure and files for all cpp and h files.                     *
 * This file, sphere.cpp   , includes sphere.h                                  *
 *******************************************************************************/

#include "sphere.h"

Sphere::Sphere() {
    //used own setters as 10
    setRadius(10);
}

Sphere::Sphere(int radius) {
    setRadius(radius);
}

Sphere::~Sphere() {
}

int Sphere::getRadius(){
    return radius;
}

int Sphere::getArea() {
    return (((4) * (3.14) * (radius*radius)));
}

int Sphere::getCircumference(){
    return (2*3.14*radius);
}

int Sphere::getVolume() {
    return (((1.3333) * (3.14) * (radius*radius*radius))); // note 4/3=1.333
}

void Sphere::setRadius(int r) {
    if (r > MIN) {      //r can not be less than MIN/0 because radius can not be negative
        radius = r;
    } else {
        radius = MIN;
    }
}
