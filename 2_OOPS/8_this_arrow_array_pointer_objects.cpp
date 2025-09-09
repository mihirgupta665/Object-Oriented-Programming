//array of object using pointers. For ex: Complex* ptr1= new complex[4];
//classes with objects as an array using pointers.
//this is a keyword which points to the object that invokes the member function.
//it can also be used to return the object itself For ex: (class_name & setdata());
//Wap 2 member class for complex number. make 4 array of object using pointer. use: this and pointer arithmetic
#include<iostream>
using namespace std;
class complex{    // use contructor :forst write then remove side by side check that removed elements are coped up successfully

    int a, b;
    static int* c;   //pointer for tracking purpose
    public:
    // complex(){
    //     if(c==nullptr){
    //         c=new int(0);
    //     }
    // }
    static int* count(){
        return c;     // return a pointer to integer.
    }
    complex& setdimension(int a, int b){  //this return a object by reference
        this->a=a;
        this->b=b;
        (*c)++;
        return *this;                     // dereferenceing  this and returning
    }
    void display(){
        cout<<*c<<". Complex Number is : "<<a<<" + "<<b<<"i"<<endl;
    }
    // ~complex(){
    //     if(c!=nullptr){
    //         c=nullptr;
    //         delete c;
    //     }
    // }
};
int* complex :: c= new int(0);                           // static variable for keeping a record of object created in real time.
int main(){
    int n;
    cout<<"Enter the total number of complex numbers : ";
    cin>>n;
    complex* point= new complex[n];         //pointer for array of n objects.
    complex* arr=point;
    for(int i =0;i<n;i++){
        int a,b;
        cout<<"Enter the "<<*complex::count()+1<<". complex number's real part : ";
        cin>>a;
        cout<<"Enter the "<<*complex::count()+1<<". complex number's imaginary part : ";
        cin>>b;
        (*point++).setdimension(a,b).display();     //pointer aritmetic for new block with 8 bytes(2* int)
        //as setdimension return a object itself therefore display fuction could be called for the returned object
    }
    delete[] arr;

    return 0;
}