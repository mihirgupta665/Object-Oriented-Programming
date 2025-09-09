/*
Polymorphism is of two type
1. compile time polymorphism(objects and functions are binded in complietime only)
    1.1: Function overloading
    1.2: Operator Overloading
2.  Runtime time polymorphism
    2.1: Virtual function
*/
//base class pointer if points to derived class then only those section og members are accessible which are inherited from the base class.
//WAP two derived class from base class and point to derive class use virtual funtion in base class.

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class CWH{
    protected:
    static int count;
    string title;
    float rating;
    public:
    CWH(){
        count++;
    }
    CWH(string t,float r):title(t),rating(r){
        count++;
    }
    virtual void display(){   // virtual makes this function secondary whicb means if derived class has the function of same name then that function will be called. ("In the case when pointer is of base class and is pointing towards derived.")
        cout<<"Code with harry display is running."<<endl;
        cout<<"It has only title : "<<title<<" and rating : "<<rating<<endl;
    }
    static int getcount(){
        return count;  // will return 2 always as we are creating pointers of the base class not object of it.
        // when we make the pointer point the object of derived classs then only object is created.
        // it only counts the instances of the object not how many pointers are pointing to the object.
    }
};
class Web: public CWH{
    public:
    int wordcount;
    Web(string t, float r, int wc): CWH(t,r),wordcount(wc){} // constructor of base class need also be called and its argument are mentioned before the derived class arguments.
    void display(){
        cout<<"Dislaying Web : "<<endl;
        cout<<"It has title : "<<title<<endl;
        cout<<"Web rating is : "<<fixed<<setprecision(2)<<rating<<endl;
        cout<<"Number of Wordscount : "<<wordcount<<endl;
    }
};
class Video: public CWH{
    public:
    double length;
    Video(string t, float r, double l): CWH(t,r),length(l){} // constructor of base class need also be called and its argument are mentioned before the derived class arguments.
    /*
    void display(){
        cout<<"Dislaying Video : "<<endl;
        cout<<"It has title : "<<title<<endl;
        cout<<"Web rating is : "<<fixed<<setprecision(2)<<rating<<endl;
        cout<<"Length of Video : "<<fixed<<setprecision(2)<<length<<endl;
    }
    */
};
int CWH::count;
int main(){
    string s;
    float r;
    int wc;
    cout<<"Enter the title string : ";
    // cin.ignore();
    getline(cin,s);
    cout<<"Enter the rating : ";
    cin>>r;
    cout<<"Enter the word count : ";
    cin>>wc;
    Web page(s,r,wc);
    double l;
    cout<<"Enter the length : ";
    cin>>l;
    Video YT(s,r,l);
    int n;
    cout<<"Enter the total number of pointer of base class : ";
    cin>>n;
    CWH** ptr= new CWH*[n];
    for(int i=0;i<n;i++){
        if(i%2==0){
            ptr[i]=&page;
        }
        else{
            ptr[i]=&YT;
        }
    }
    cout<<"Total numbe of objects successsfully created pointed are : "<<CWH::getcount()<<endl;
    for(int i=0;i<n;i++){
        ptr[i]->display();
    }
    delete[] ptr;
    return 0;
}
