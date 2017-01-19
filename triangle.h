/* 
 * Ths class can represent a triangle on a 2d
 * plane with sides of length a,b,c..
 * File:   header.h
 * Author: Gulzada IISAEVA 131044085
 *
 * Created on October 31, 2015, 7:58 PM
 */

#ifndef HEADER_H
#define	HEADER_H

#include <cstdlib>
#include "math.h"
#include <iostream>

using namespace std;


class Triangle
{
private:
    bool isvalid();
    double a,b,c;
    
    
public:
    Triangle(); //A no parameter constructor 
    
    Triangle (double sides);
    //A one parameter constructor that will set all triangle sides to the given value.
    
    Triangle( double a,double b);
    //A two parameter constructor that will set A and B sides and set the C side to 1.0
    
    Triangle (double a, double b, double c);//A three parameter constructor
    
    ////Setter and getters for the required data members.
    void set_a (double _a);
    void set_b (double _b);
    void set_c (double _c);           
    void set_corners(double a,double b,double c);
    double get_a () const;
    double get_b () const;
    double get_c () const;
    
    //Input and Output functions for the triangle sides.
    void input();
    void output() const;
    
    //Three functions that return the angle of a triangle corner (angleA, angleB, angleC)
    double angleA() const;
    double angleB() const;
    double angleC() const;
    
    bool rightAngle ();
    //A function that returns true if the triangle is a right angle triangle
    
    double calc_perimeter() const;//A function that returns the perimeter of the triangle
    
    double calc_area()const;//A function that returns the area of the triangle


    
};

void swap_corners(Triangle t); //A function that swaps the triangle corners

bool isLarger(const Triangle& triangle1, const Triangle& triangle2);
//A function that shows the largest triangle

#endif	/* HEADER_H */

