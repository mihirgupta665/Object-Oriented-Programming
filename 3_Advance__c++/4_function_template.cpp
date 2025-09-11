//function template could also be created in same manner with multiple parameters and default values too.
//Wap to have a function template for more than one generic type to have swap two variables of any custom data type.
//overload the template function with with writing a proper defined same name function with a specific data type before the template.

#include<iostream>
using namespace std;
int average(int a, int b){   // has a specific data type there for this data type this gets the highest priority to run
    cout<<"Specific function takes the priority"<<endl;
    int avg = (a+b)/2;
    return avg;
}
template<class T1, class T2> //overload the template as a specific data type function is already made above this.
float average(T1 a, T2 b){
    cout<<"Overloading the template."<<endl;
    float avg = (a+b)/2.0;
    return avg;
} 
int main(){
    float a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Average in integer is : "<<average((int)a, (int)b)<<endl;
    cout<<"Average in float is : "<<average(a,b)<<endl;
    return 0;
}