#include <iostream> //Instructs the compiler to include the declarations of the standard stream I/O facilities as found in iostream

using namespace std; //Makes names from std without std::

double square(double x)  //square a double precision floating point number
{
    return x*x;
}
void print_square(double x) //void means the function does not return a value
{
    cout <<"the square of "<< x <<" is " << square(x) << "\n"; //std:: no longer necessary due to using namespace std;
}

//###############STARTHERE###################

int main()   //Defines a function called main. the {} represent a grouping (The start and the end of the function body)
//Every C++ has a single global function called main, which the program starts off by executing
//The int values represents the data type to be returned from main. Any nonzero values returned from main indicates failure.
{
    std::cout <<"Hello, World!\n";
    print_square(1.234);
}
//std:: represents the std library namespace where the name cout can be found
//The operator << ("put to") writes its second argument onto its first. Here, it writes the string literal onto the output stream std::cout

//Every name and expression has a data type which defines the operations that may be performed on it and its functionality. This data type must be declared when the name is declared
//Fundamental types include:            
//bool - boolean, inc true and false                size: 1
//char - character, e.g. "a" or "1"                 size: 1
//int - integer values                              size: 4
//double - double precision floating point number   size: 8
//Each of these types have a fixed size memory-wise which is important to consider when porgramming at this level (size references no. of bytes)
//To find out the size of any given dat type, the sizeof() operator can be used

//All basic operations are the same in c++, bar from
//unary plus -->  +x
//unary minus -->  -x (idk what they do)
//In arithmatic variable type conversion arent necessary and are handled by c
void some_function() 
{
    double d = 2.2;
    int i = 7;
    d = d+i;
    i=d*i;
    //There is also a variety of different ways to initialise variables like
    double digit {2.3};
    //book shows some depreciated ways so idk about special variable types
    //the auto keyword can also be used, which automatically gives the variable a type
    auto boolean = true
}
