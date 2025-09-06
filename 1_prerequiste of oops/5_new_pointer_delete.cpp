//new dynamically allocates memory to data members.
//int* arr= new int[3]; //dynamically creates 3 continguous block of size_of(int)i.e. 4*3 = 12 bytes.
#include<iostream>
using namespace std;
int main(){
    int a=9;
    int* ptr = &a;
    cout<<"Value of a is : "<<*ptr<<endl;
    float* ptrf= new float(78.77);
    cout<<"Value of float is : "<<*ptrf<<endl;
    int* arr= new int[3];        //dynamically allocates 3 block of int size.
    arr[0]=9;
    arr[1]=12;
    arr[2]=17;
    cout<<"arr[0] is : "<<arr[0]<<endl;
    cout<<"arr[1] is : "<<*(arr+1)<<endl;  //prints the second bloack of memory value (pointer arithmetic)
    *(arr+2)=21;        //updating values with pointers
    cout<<"arr[2] is : "<<*(arr+2)<<endl;
    delete[] arr;  //free up the resources and memory.

    return 0;
}