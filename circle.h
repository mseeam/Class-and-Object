/********************************************************************************
 * File  :   circle.h                                                           *
 * Author: Mohammad Seeam                                                       *
 * Assignment 3: Classes and Objects                                            *
 * This is a simple application to demonstrate classes and objects in C++.      *
 * This header structure and files for all cpp and h files.                     *                                *
 *******************************************************************************/

#ifndef CLASSES_CIRCLE_H
#define CLASSES_CIRCLE_H

#define MIN 0 // I also fixed MIN as 0 so that no one can give radius negative which is impossible. 
              // I just use this MIN to check radius value so that no one can set radius<0

class Circle{

    public:
    /******************************************************
     * constructors                                       *
     * one with no params, one with params (overloading)  *
    ******************************************************/

    Circle();
    Circle(int); //one param for (r) radius

    /******************************************************
    * destructor (not used in this example)               *
    ******************************************************/
    
    ~Circle();

    /******************************************************
    * Getter function                                     *
    ******************************************************/
    int getRadius();
    int getArea();
    int getCircumference();
    
    /******************************************************
    * Setter function                                     *
    ******************************************************/
    void setRadius(int);

    protected:
    /******************************************************
    * private variables that define a Circle              *
    ******************************************************/
    
    int radius;

};

#endif //CLASSES_CIRCLE_H
