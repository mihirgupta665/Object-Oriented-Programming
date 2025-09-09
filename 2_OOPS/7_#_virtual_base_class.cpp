//Virtual inhertence is done so that during inhertense no duplicate(more than one) data members is given to a drived class from a base class
//Only one copy of the common member in the derived classes is shared
//So all the changes made in the drived classes are reflected together in that same members.
//Constructor inhertience while passing then the base class and the class defined in the order are passed first.
//Virtual class occurs then exception occurs and virtual class construction would be executed first first.
// If again there are mutiple virtual class then they are firstly passsed in order of decaration only.
/*
class C: public A, virtual public B{   
....            // order of constructor execution is : B(virtual base) --> A(base) --> C(derived)
}
*/
//WAP to show multiple inheritence with second class virtual class and all classes must have constructor
//student will derive two classe - "Test" and "sports"
//Then these two class will make derive 1 class together 'result"
#include<iostream>
#include<iomanip>
using namespace std;
class Student{
    protected:
    int roll;
    public:
    Student(int r) {           //base : constructor for roll nuo
        roll=r;
    }
    void display(){
        cout<<"Roll no :- "<<roll<<endl;
    }
};
class Test: virtual protected Student{
    protected:
    int m_maths,m_science;
    Test(int r, int m, int s):Student(r){   //constructor of derived class need to have constructor and argument of the base class.
        m_maths=m;                          //Firstly argument would be of base class (student) only
        m_science=s;
    }
    void display(){
        roll+=6;
        cout<<"Marks obtained in Maths : "<<m_maths<<endl;
        cout<<"Marks obtained in science : "<<m_science<<endl;
    }
};
class Sport: virtual protected Student{
    protected:
    int score;
    Sport(int r,int sp):Student(r){        // constructor of defirved class need to ahve constructorof bas class.
        score=sp;                          // after base class arguments derived class argumnets will be taken
    }
    void display(){
        roll+=10;
        cout<<"Score obtained in Sports : "<<score<<endl;
    }
};
class Result: protected Test, protected Sport{
    int total;
    double p;
    public:
    Result(int r,int m,int s,int sp) : Test(r,m,s), Sport(r,sp), Student(r) {           //constructor of derived class nedd to have constructor of base class.
        total=m_maths+m_science+score;                                            // Note : the Studnet class argumnet need also to be bass irrespective of that it is not mentioned in declartion, but the 1st gen classs are derived from the base class
        p=total/210.0*100;
    }                                                       //check if same name in argumnet is needed
    void display(){
        cout<<endl<<"Result : "<<endl;
        Student::display();     //ambiguit resolution
        Test::display();
        Sport::display();
        cout<<"Total score out of 210 is : "<<total<<endl;
        cout<<"Percentage obtained : "<<fixed<<setprecision(2)<<p<<endl;
        if(p>33.33){
            cout<<"Pass : Congratulations for your Performance."<<endl;
        }
        else{
            cout<<"Failed : Better Luck Next Year."<<endl;
        }
    }
};

int main(){
    int roll;
    cout<<"Enter the roll no. : ";
    cin>>roll;
    int m_maths,m_science;
    cout<<"Enter the marks of maths(out of 100) : ";
    cin>>m_maths;
    cout<<"Enter the marks of science(out of 100) : ";
    cin>>m_science;
    int score;
    cout<<"Enter the Sports Score(out of 10) : ";
    cin>>score;
    Result mihir(roll,m_maths,m_science,score);
    mihir.display();
    return 0;
}
