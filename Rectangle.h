#pragma once
/**  Rectangle class definition.    Rectangle.h
 *
 * HEADER File
 * This C++ Header file contains the Definition of the Rectangle class.
 * In this file, we define the name of the class, the data members (fields),
 * the member functions, and the constructors and destructors.
 * Note that the implementation of member functions is normally NOT placed
 * in the class definitions.  Instead, the implementation of member functions is placed
 * in a corresponding ".cpp" file (Rectangle.cpp in this case)
 *
 * Demonstrates:
 * - defining a class structure
 * - using access specifiers [  private: and public: ]
 * - defining member data
 * - defining constructors, constructor overloading
 * - member function definitions (with no implementation)
 * - use of 'const' functions
 */

class Rectangle
{
private:        // access specifier "private"
    int width;  // member data
    int height;

public:
    Rectangle();            // no-argument constructor
    Rectangle(int, int);    // constructor

    int area(void) const;         // function definitions (no implementation)
    int getWidth(void) const;       // 'const' functions prevent function from modifying the field data
    int getHeight(void) const;      ///   .. effectively making the functions 'accessors' (i.e. read access only)
};
