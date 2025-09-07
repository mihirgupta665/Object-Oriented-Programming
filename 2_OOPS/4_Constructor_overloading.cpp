// Explicit Constructor
// costructor overloading
//two points distance
#include<iostream>
#include<math.h>
using namespace std;
class point{
    int x;
    int y;
    friend double distance(point a, point b);
    public:
    point(int a, int b){           // default arguments can't be taken during overloading
        x=a;
        y=b;
    }
    point(int a){
        x=a;
        y=0;
    }
    void getpoints(){
        cout<<"X axis = "<<x<<" and Y axis = "<<y<<endl;
    }
    point();
};
point :: point(){                         // scope resolution construction creation
    x=1;              // if we write int x = 1 this will lead to creation of local variable
    y=1;
}
double distance(point a, point b){                 // friend function
    double d= sqrt((pow(a.x,2)-pow(b.x,2))+(pow(a.y,2)-pow(b.y,2)));
    return d;
}
int main(){
    int x,y;
    cout<<"Enter the value of x axis value : ";
    cin>>x;
    cout<<"Enter the value of y axix value : ";
    cin>>y;
    point p1 = point(x,y);                       //Explicit Object creation
    p1.getpoints();
    point p2(5);
    p2.getpoints();
    point p3;
    p3.getpoints();
    cout<<"Distance between point 1 and point 2 is : "<<distance(p1,p2)<<endl;
    point p4=p1;
    p4.getpoints();
    return 0;
}
