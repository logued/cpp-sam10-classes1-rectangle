// Main.cpp
//
// Demonstrates:
// Demonstrates the basics of defining a class called Rectangle
// by defining a header file Rectangle.h and an implementation file Rectangle.cpp.
//
// In main() we create (instantiate) and use a number of Rectangle objects.

#include <iostream>
#include "Rectangle.h"    // copies definition of class into this file
using namespace std;

// function prototypes declare the signature of functions implemented below.
void display_pass_by_value( Rectangle );
void display_pass_by_reference( Rectangle& );
void display_pass_using_pointer( Rectangle* );

int main() {
    cout << "Rectangle class, constructors and passing objects to functions." << endl;

    // This line instantiates a Rectangle object r1 using the no-argument constructor.
    // (The no-argument constructor is implemented to initialize width and height to 1)
    // The object r1 is created on the Stack. (Unlike in Java, where all new objects are created on the Heap)
    //
    Rectangle r1;
    cout << "Rectangle r1 area: " << r1.area() << endl;

    Rectangle r2(3, 4); // instantiate an object and call its constructor
    cout << "Rectangle r2 area: " << r2.area() << endl;

    // 'uniform initialization' style for construction - (preferred modern syntax)
    Rectangle r3{ 5, 6 }; // instantiate an object using an initializer (which calls constructor)
    cout << "Rectangle r3 area: " << r3.area() << endl;

    Rectangle r4 = r3;  // create new object r4, and copy all r3 member data into r4 ( a bitwise copy)
    cout << "Rectangle r4 area: " << r4.area() << endl;

    // various ways to pass a class Object to a function
    // pass copy of r3 object as an argument
    display_pass_by_value(r3);

    // pass a reference to r3 ias argument ( determined as the parameter is a reference)
    display_pass_by_reference(r3);

    // get the address of r3 and pass that address as an argument (as a pointer parameter is declared)
    display_pass_using_pointer(&r3);    // get and pass the address of the object

    return 0;

    // One exit of main, all variables and objects are freed up from the stack.
}

void display_pass_by_value(Rectangle rect)
{
    cout << "Rectangle area: " << rect.area() << endl;
    // rect is a local object created on the stack that is initialized by the values
    // from the passed object (potentially expensive).
    // rect is a separate object from the original object
}

void display_pass_by_reference(Rectangle& rectRef)
{
    cout << "Rectangle area: " << rectRef.area() << endl;
    // rectRef is a reference to the original passed Rectangle object.
    // rectRef is bound to the original object and acts as an 'alias' for that object.
    // The reference can access and modify the original object.
    // We can use "const" to prevent the reference from changing th eoriginal.
    // i.e.  "const Reactangle & rectRef
}

void display_pass_using_pointer(Rectangle* rectPtr)
{
    cout << "Rectangle area: " << rectPtr->area() << endl;
    // rectPtr is a pointer (a local parameter variable that can hold the address of an object)
    // The address of the original object must be passed and stored in the pointer
    // which gives this function access to the original object by de-referencing the pointer.
    // Note the use of the arrow notation for accessing members of the object
    // (*rectPtr).area() is equivalent to rectPtr->area();
}



