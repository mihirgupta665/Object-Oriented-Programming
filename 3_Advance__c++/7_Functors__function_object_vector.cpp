//Functors also know as 'Function object' is a function that is wrapped in the class so that fuction could be accessed as a object.
#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<float> arr;
    int n;
    cout<<"Enter the length of array : ";
    cin>>n;
    for(int i=0;i<n;i++){
        float ele;
        cout<<"Enter the value of "<<i+1<<". element of the array : ";
        cin>>ele;
        arr.push_back(ele);  // adds a element in the vector array.
    }
    sort(arr.begin(),arr.end());   //sort function is an algorithm
    cout<<"Sorted array in ascending order : ";
    vector<float> :: iterator iter;
    for(iter=arr.begin();iter!=arr.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    sort(arr.begin(),arr.end(),greater<float>());   //greator<float>() is a functors
    cout<<"Sorted array in descending order : ";
    for(iter=arr.begin();iter!=arr.end();iter++){  
        //iter needs an object pointing to the elements. Therefore: arr.begin() and arr.end() serves the purpose.
        cout<<*iter<<" ";
    }
    cout<<endl;

    return 0;
}