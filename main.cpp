// Main.cpp                                     Feb 2023
// Demonstrates:
// Using the Rectangle class to create and manipulate Rectangle objects

#include <iostream>
#include "Rectangle.h"    // copies definition of class into this file
using namespace std;

// function prototypes
void display_pass_by_value( Rectangle );
void display_pass_by_reference( Rectangle& );
void display_pass_using_pointer( Rectangle* );

int main() {
    cout << "Rectangle class, constructors and passing objects to functions." << endl;

    // This line instantiates a Rectangle object r1 using no-argument constructor
    // (Unlike Java, this line creates a new object on the Stack)
    Rectangle r1;
    cout << "Rectangle r1 area: " << r1.area() << endl;

    Rectangle r2(3, 4); // instantiate an object and call its constructor
    cout << "Rectangle r2 area: " << r2.area() << endl;

    // 'uniform initialization' style for construction - (preferred modern syntax)
    Rectangle r3{ 5, 6 }; // instantiate an object and call its constructor
    cout << "Rectangle r3 area: " << r3.area() << endl;

    Rectangle r4 = r3;  // new Rectangle object r4 is created on the stack
                        // a bitwise copy of r3 member data is made into r4
                        // i.e. all the field values are copied across into new object

    cout << "Rectangle r4 area: " << r4.area() << endl;

    // various ways to pass a class Object to a function
    display_pass_by_value(r3);

    display_pass_by_reference(r3);

    display_pass_using_pointer(&r3);    // get and pass the address of the object

    return 0;
}

void display_pass_by_value(Rectangle rect)
{
    cout << "Pass by Value - Rectangle area: " << rect.area() << endl;

    // rect is a local object created on the stack that is initialized by the values
    // from the passed object (potentially expensive).
    // rect is a separate object from the original object
}

void display_pass_by_reference(Rectangle& rectRef)
{
    cout << "Pass by Reference - Rectangle area: " << rectRef.area() << endl;

    // rectRef is a reference to the original passed Rectangle object.
    // rectRef is bound to the original object and acts as an 'alias' for that object.
    // The reference can access and modify the original object.
    // We can use "const" to prevent the reference from changing the original.
    // i.e.  "const Reactangle & rectRef
}

void display_pass_using_pointer(Rectangle* rectPtr)
{
    cout << "Pass by Pointer - Rectangle area: " << rectPtr->area() << endl;

    // rectPtr is a pointer (a local parameter variable that can hold the address of an object)
    // The address of the original object must be passed and stored in the pointer
    // which gives this function access to the original object by de-referencing the pointer.
    // Note the use of the arrow notation for accessing members of the object
    // (*rectPtr).area() is equivalent to rectPtr->area();
}



