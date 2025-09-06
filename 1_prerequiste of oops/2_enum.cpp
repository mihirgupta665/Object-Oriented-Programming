//enum is a set which contains elements in increasing whole number order.

#include<iostream>
using namespace std;
int main(){
    enum Meal{breakfast, lunch, dinner};   //meal becomes a data type now.
    cout<<breakfast<<endl;   //breakast=0, lunch=1, dinner=2.
    Meal m2=lunch;   //making us of created data type.
    cout<<m2<<endl;
    return 0;
}