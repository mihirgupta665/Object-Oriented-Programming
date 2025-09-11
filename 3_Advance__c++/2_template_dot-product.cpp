//As class is template for object. template is a template of class.
/*
Syntax:  
template <class T>
class T is specified to any data type at the time ob object creation.
and where ever T is used it is replaced by compiler as same data type specified before object.
For ex: vector <float> obj;    {now, T will be replaced by float} 
*/
//WAP to take to array of custom data type and do dot product of them. using template

#include<iostream>
using namespace std;
template <class T>
class vector{
    int size;
    T* arr;
    static int c;
    public:
    vector(int s) : size(s){
        arr=new T[size];
        c++;
    }
    int static getcount(){
        return c;
    }
    void set(){
        for(int i=0;i<size;i++){
            cout<<"For array - "<<c<<" Enter the "<<i+1<<" value : ";
            cin>>arr[i];
        }
    }
    T dotproduct(vector &v){
        T dp=0;
        for(int i=0;i<size;i++){
            dp+=this->arr[i] * v.arr[i];    // this means the object called the function and v means the object passed as the actual argument in the fuction call.
        }
        return dp;
    }
};
template <class T>   // for static member synatx need to re written .
// as there could be more than one classes with different data types of mebers therefore explicitly templace should be defined for the static variable.
int vector<T>::c;
int main(){
    int n;
    cout<<"Enter the common length of both vector : ";
    cin>>n;
    vector<float> vec1(n),vec2(n);
    cout<<"Number of objects created are : "<<vector<float>::getcount()<<endl;
    //if we write vector<int> then an independent c variable for class vector<int> will be called. which willl reult in 0 as output.
    // vector<float> represent the loat class so the same class static variable need to be called. [Note: evry class of differnet data type will have its own independent static variable.]
    vec1.set();
    vec2.set();
    cout<<"The dot product of the two vectors is : "<<vec1.dotproduct(vec2)<<endl;
    return 0;
}