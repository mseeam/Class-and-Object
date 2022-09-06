/********************************************************************************
 * File  :   sphere.h                                                           *
 * Author: Mohammad Seeam                                                       *
 * Assignment 3: Classes and Objects                                            *
 * This is a simple application to demonstrate classes and objects in C++.      *
 * This header structure and files for all cpp and h files.                     *
 * This file, sphere.h   , includes circle.h                                    *
 *******************************************************************************/

#ifndef CLASSES_SPHERE_H
#define CLASSES_SPHERE_H

#include "circle.h"

class Sphere : public Circle {
public:

    Sphere();
    Sphere(int); //one param for radius
    ~Sphere();

    /******************************************************
    * Getter functions                                    *
    ******************************************************/
    int getRadius();
    int getArea();
    int getCircumference();
    int getVolume();

    /******************************************************
    * Setter functions                                    *
    ******************************************************/
    void setRadius(int);

private:
    /******************************************************
    * private variables that define a sphere              *
    ******************************************************/
    int radius;


};

#endif //CLASSES_SPHERE_H