//   Rectangle class Implementation.  Rectangle.cpp     Mar 2024
/**
 * Demonstrates:
 * Implementation of Rectangle class in this file
 * is separate from the definition of the class in the header file "Rectangle.h"
 * Constructors and member functions are implemented here, and
 * are associated with the Rectangle class using
 * the Scope Resolution Operator "::"
 * It is necessary to identify which class the function belongs to.
 * "Rectangle.h" must be #included at the top of this file so that
 * the preprocessor can copy its contents into this file.
 * In other words, we need a definition of the Rectangle class
 * in order to use th eRectangle class in the code.
 * */

// Preprocessor directives to prevent the file Rectangle.h being included in the
//  program more than once. Note the closing #endif at the bottom of the file.
//
#ifndef CPP_SAM10_CLASSES1_RECTANGLE_RECTANGLE_H
#define CPP_SAM10_CLASSES1_RECTANGLE_RECTANGLE_H

#include "Rectangle.h"      // copies in the Rectangle.h class definition

// IMPLEMENTATION of constructors of the Rectangle class

// The "Scope Resolution Qualifier :: " must be used to specify that the
// constructor belongs to the class "Rectangle".  This applies to all
// constructors and member function below.

Rectangle::Rectangle() {     // default no-arg constructor, qualifier "::"
    this->width = 1;        // we have set default values for width and height
    this->height = 1;       // ... otherwise they will remain uninitialized
}

Rectangle::Rectangle(int width, int height) {  // overloaded constructor that takes a width and height
    this->width = width;
    this->height = height;
}


// IMPLEMENTATION of member functions of Rectangle class

int Rectangle::area(void) const {           // const prevents code in this function from changing member data (field values)
    return width * height;
}

int Rectangle::getWidth(void) const { return width; }

int Rectangle::getHeight(void) const { return height; }


#endif //CPP_SAM10_CLASSES1_RECTANGLE_RECTANGLE_H
