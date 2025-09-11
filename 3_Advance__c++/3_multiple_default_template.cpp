//WAP to illustrate multiple default arguments in the template.
#include<iostream>
using namespace std;
template <class T1=int, class T2=float, class T3=char>  // default and multiple parametersin the template
class Mihir{
    public:
    T1 a;
    T2 b;
    T3 c;
    Mihir(T1 a, T2 b, T3 c) : a(a), b(b), c(c){}    //initializer list : a(a), b(b), c(c)
    void display(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"The value of c is : "<<c<<endl;
    }
};
int main(){
    Mihir<> obj1(5,9.9,'M');
    obj1.display();
    cout<<endl;
    Mihir<char,float> obj2('A',8.84,'M');
    obj2.display();
    return 0;
}