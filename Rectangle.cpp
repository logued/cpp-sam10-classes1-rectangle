//   Rectangle class Implementation.  Rectangle.cpp     Feb 2023
/**
 * Demonstrates:
 * Implementation of Rectangle class in this file
 * is separate from the definition of the class in Rectangle.h.
 *
 * Constructors and functions are implemented here, and
 * are associated with the Rectangle class using
 * the Scope Resolution Operator "::"
 *
 * "Rectangle.h" must be #included at the top of this file so that
 * the preprocessor can copy its contents into this file.
 * It is required because it holds the definition of the class Rectangle.
 * */

#include "Rectangle.h"      // copies in the Rectangle.h class definition

// IMPLEMENTATION of constructors of the Rectangle class

// The "Scope Resolution Qualifier :: " must be used to specify that the
// constructor belongs to the class "Rectangle".  This applies to all
// constructors and member function below.

Rectangle::Rectangle() {     // default no-arg constructor, qualifier "::"
    width = 5;
    height = 5;
}

Rectangle::Rectangle(int width, int height) {
    this->width = width;    // must distinguish member field from parameter
    this->height = height;
}
// OR newer style :
// Rectangle::Rectangle (int x, int y) : width(x), height(y) { }  // no statements in body of function


// IMPLEMENTATION of member functions of Rectangle class


int Rectangle::area() const {   // const functions do not have any statements that change values outside the function
    return width * height;      // no need to use this->width, as it is not clashing with another parameter of the same name
}

int Rectangle::getWidth() const { return width; }

int Rectangle::getHeight() const { return height; }

