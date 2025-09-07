#include<iostream>
using namespace std;
typedef class employee{
    private:
    int a,b,c;
    public: 
    int d,e;
    void setdata(int a1, int b1, int c1);     // function declaration
    void getdata(){
        cout<<"Value of a is : "<<a<<endl;
        cout<<"Value of b is : "<<b<<endl;
        cout<<"Value of c is : "<<c<<endl;
        cout<<"Value of d is : "<<d<<endl;
        cout<<"Value of e is : "<<e<<endl;
    }
}ep;
void ep :: setdata(int a1, int b1, int c1){  
    a = a1;
    b = b1;
    c = c1;
}
int main(){
    ep google;
    int a1,b1,c1;
    cout<<"Enter the value of a, b and c : "<<endl;
    cin>>a1>>b1>>c1;
    google.setdata(a1,b1,c1);
    google.d=5;
    google.e=11;
    google.getdata();
    return 0;
}

