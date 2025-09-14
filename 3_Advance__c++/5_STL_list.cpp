//STL is a collection of generic classses and functions. it is used to perform various c++ provided functions and classes through templates.
/*
Components of STL : 
1. Containers [stores data, use template classes]
2. Algorithms [sorting, searching, use template functions]
3. Iterators  [objects points to an element in a comntainer which connects algorithms to the containers. (handled as a pointer)]
*/
/*
container: is of three types :
    1. Sequence Container-> liner fashior -> examples: vector , list, dequeue
    2. Associate Container-> Direct Access -> for faster searching or etc[int tree data structure data is stored.] -> example: Set/Multiset, map/multimap
    3.Derived Container-> real world modelling -> example: Stack, queue, priority_queue 
*/
//WAP to create a list(0 legth list) and using iterator prints all its elements. sort it amd merge with another list(empty list so  assigh 7 values).

#include<iostream>
#include<list>
using namespace std;
int main(){
    list<float> lst1; // creates an empty list
    int n;
    cout<<"Enter the length of list : ";
    cin>>n;
    for(int i=0;i<n;i++){
        float ele;
        cout<<"Enter the List-1's "<<i+1<<". element : ";
        cin>>ele;
        lst1.push_back(ele);   //inserts the element at the end.
    }
    lst1.sort();   //sorts the list.
    list<float> :: iterator iter = lst1.begin(); 
    //iter is a pointer which is an object that points the lists element for iteration.
    cout<<"Sorted list is : ";
    for(iter;iter!=lst1.end();iter++){  //for loop till iterator reaches the end.
        cout<<*iter<<" ";
    } 
    cout<<endl;

    list<float> lst2(7); // creates a 7 float list blocks
    list<float> :: iterator it;
    int i;
    for(it=lst2.begin(), i=1; it!=lst2.end(); it++,i++){
        float ele2;
        cout<<"Enter the list-2's "<<i<<". element : ";
        cin>>ele2;
        *it=ele2;
    }
    lst2.sort();
    for(it=lst2.begin(), i=1; it!=lst2.end(); it++,i++){
        cout<<i<<". element in the list-2 after sorting is : "<<*it<<endl;
    }
    lst1.merge(lst2);       // merges the list 2 into list 1
    lst1.pop_back();        // removes the last element
    //iter is a pointer which is an object that points the lists element for iteration.
    cout<<"Merged Sorted list is : ";
    for(iter=lst1.begin();iter!=lst1.end();iter++){  //for loop till iterator reaches the end.
        cout<<*iter<<" ";
    } 
    return 0;
}
