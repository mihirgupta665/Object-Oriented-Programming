//WAP to show static counter which increment fer object, then call it with a static funtion.
//pass first 2 objects into one object through fuctions.
#include<iostream>
using namespace std;
typedef class static_object_passing{
    static int count;
    int id; 
    int price;
    public:
    void setitem();
    void getitem(){
        cout<<"Price for the id '"<<id<<"' is --> "<<price<<endl;
    }
    static void getcount(){
        cout<<"Total number of objects created are : "<<count<<endl;
    }
    void sumprice(static_object_passing o1,static_object_passing o2){
        price=o1.price+o2.price;
        cout<<"Price of last object is "<<price<<endl;
    }
}sop;
int sop :: count;  // by default initialized by 0. (outside the class and outside int main scope)
void sop :: setitem(){
    cout<<"Enter the "<<count+1<<". ID : ";
    cin>>id;
    cout<<"Enter the "<<count+1<<". price : ";
    cin>>price;
    count++;
}
int main(){
    int n;
    cout<<"Enter the total number of items : ";
    cin>>n;
    sop item[n];
    for(int i=0;i<n;i++){
        item[i].setitem();
    }
    sop::getcount();
    for(int i=0;i<n;i++){
        cout<<i+1<<". ";
        item[i].getitem();
    }
    sop o3;
    o3.sumprice(item[0],item[1]);
    return 0;
}