//copy constructor
//destructor
// compound interest
#include<iostream>
using namespace std;
class bank{
    static int count;
    int p;
    int y;
    float r;
    friend int totalvalue(bank ob);           //Remember friend functionn takes object as its arguments
    public:
    bank(){
       cout<<endl<<"Default Constructor is been called"<<endl; 
    }         //construction default constructor so that "bank ob1" could be made without parameters.
    bank(int p1, int y1 , float r1){
        p=p1;
        y=y1;
        r=r1;
    }
    bank(int p1, int y1, int R1);    //just declared
    bank(const bank &ob){          // copy constructor. Note: it takes object as reference else recursive coping will be taken
        cout<<endl<<"Coping constructor is been called : "<<endl;
        p=ob.p;
        y=ob.y;
        r=ob.r;
    }
    ~bank(){            // does not take any arguments
        cout<<endl<<"Destruction of object taking place\n"<<endl;
    }
    float interest(float new_p);
    static int getcount(){    // static fuction to get total number of counts note : to be created in piblic section
        return count;
    }
};
bank :: bank(int p1, int y1, int R1){       //overloading constructor
        p=p1;
        y=y1;
        r=float(R1)/100;
    }
float bank :: interest(float new_p){
        return new_p*r;
    }
int totalvalue(bank ob){
    cout<<endl;
    ob.count++;                           // statically counts the number of object
    cout<<"Showing Details of object : "<<ob.count<<endl;
    int amount=float(ob.p);
    for(int i =1;i<=ob.y;i++){
        cout<<"Interest after "<<i<<" years is : "<<ob.interest(amount)<<endl;;
        amount+=ob.interest(amount);   // amount=amount+amount*r
        // amount*=(1+r)
        cout<<"Return Value from bank after "<<i<<" years is : "<<amount<<endl;
    }
    return amount;
}
int bank :: count;      //static member bu deault intializes with 0
int main(){
    cout<<"Inside the main program."<<endl;
    bank ob1;     //made default constructor is called
    ob1=bank(100,4,5);
    bank ob2;
    totalvalue(ob1);      // arument ob1 is making a copy so copy constructor executes and when fuction exits the destruction of copied obect takesz place.
    ob2=ob1;
    totalvalue(ob2);    //already copied the object
    {
        
        bank ob3;
        int p2,y2,r2;
        cout<<"Enter the Principal Amount : ";
        cin>>p2;
        cout<<"Enter the number of years : ";
        cin>>y2;
        cout<<"Enter the Rate of Interest : ";
        cin>>r2; 
        ob3=bank(p2,y2,float(r2)/100);
        totalvalue(ob3);    //again copy ob object is made and destruction will too take place.
    } // block finishes so intial ob3 orginal also gets destructed.
    cout<<"Total number of objects created : "<<bank::getcount()<<endl;
    cout<<"Exiting the main program"<<endl;    // ob1 and ob2 also gets destructed.
    return 0;
}