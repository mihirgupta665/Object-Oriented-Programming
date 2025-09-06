//Inline fuction is a request made to compiler to replace the function call(inline) with statemnets inside the actual function.
//with inline in small functions can be optimized by not coipoing the parameters not creating temporary storage inn resistors and not returning evrytime a simple and easy obtainable value.
//NOTE: default arguments are in extreme right and non default arguments are written firstly in extremely left portion of the function's paranthesis.
//NOTE: consts makes a argument constant which means that no changes even no accidental changes could be made to argumnets.
//During overloading of functions compiler could promote arguments data type to match the functions argumnet and yet it doesnot match the argument then only a error is shown.
#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

// This will not swap a and b
void swap(int a, int b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}

// Call by reference using pointers
void swapPointer(int* a, int* b){ //temp a b
    int temp = *a;          //4   4  5   
    *a = *b;               //4   5  5
    *b = temp;            //4   5  4 
}

// Call by reference using C++ reference Variables
// int & 
int& swapReferenceVar(int &a, int &b){ //temp a b
    int temp = a;          //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
    return a;
}

int main(){
    int x =4, y=5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y); // This will not swap a and b
    // swapPointer(&x, &y); //This will swap a and b using pointer reference
    // swapReferenceVar(x, y); //This will swap a and b using reference variables
    swapReferenceVar(x, y) = 766; //This will swap a and b using reference variables
    //above line will also make x=766 as a points to x by reference.
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}