//Map is a key vaule set.
//WAP for iterating the map values and printing all key with thier corresponding values 
//also insert some pairs to it and get the total size.
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string,float> marks;
    marks["Mihir"]=99.5;
    marks["Muskana"]=87.3;
    marks["Rohan"]=78.9;
    marks["Rahul"]=89.7;
    marks["Harsh"]=69.0;
    marks.insert({{"Vihan",85},{"Sonam",93}});  //inserting ney key value pairs [Note: the number of curly braces] 
    //inside curly braces represents particual set adn ou side curly bas  represent the total sets to be added
    map<string, float> :: iterator iter;
    for(iter=marks.begin();iter!=marks.end();iter++){
        cout<<"For the key : "<<(*iter).first<<" the value is : "<<(*iter).second<<endl;
    }
    return 0;
}