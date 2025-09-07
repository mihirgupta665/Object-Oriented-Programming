// WAP to friend two fuction of calculator class to complex class function
#include<iostream>
using namespace std;
class complex;                                   // Forward Declaration
class Calculator{
    public:
    int sumreal(complex o1, complex o2); // just declared as complex is still not intialized
    int sumimag(complex o1, complex o2); // with scope resolution will be initialized later
};
class complex{
    static int count;
    int a;
    int b;
    friend int Calculator :: sumreal(complex o1, complex o2); 
    friend int Calculator :: sumimag(complex o1, complex o2);
    public:
    void set(){
        cout<<"Enter the value of real part of "<<count+1<<" complex number : ";
        cin>>a;
        cout<<"Enterv the value of imaginary part of "<<count+1<<" complex number : ";
        cin>>b;
        count++;
    }
    void get(){
        cout<<count+1<<". Complex  number is : ";
        cout<<a<<" + "<<b<<"i "<<endl;  
    }
};
int complex :: count;
int Calculator :: sumreal(complex o1, complex o2) {
    return (o1.a + o2.a);
}
int Calculator :: sumimag(complex o1, complex o2) {
    return (o1.b + o2.b);
}
int main(){
    complex o1,o2;
    o1.set();
    o1.get();
    o2.set();
    o2.get();
    Calculator calc;
    int res_r = calc.sumreal(o1, o2);
    int res_i = calc.sumimag(o1, o2);
    cout<<"Sum of real parts of imaginary numbers : "<<res_r<<endl;
    cout<<"Sum of imaginary parts of imaginary numbers : "<<res_i<<endl;
    cout<<"Final imaginary number : "<<res_r<<" +"<<res_i<<"i"<<endl;
    return 0;
}