//Structure is for different data type entities . It stores memory by adding all themembers required memory.
//union alike structure have one member defined at a time. it could have more than one member, but they all share a common memory space.
//In union memory alloted is optimised by only occuping memory of the required by highest member.
//In union if one member is defined and then another members are also defined then as they share common memory , the data is continuosly overwritten and last members data is saved.

#include<iostream>
using namespace std;
union Barter{   // shares common memory
        int rice;
        double wheet;
        char car;
    };   //typedef
int main(){
    Barter ex;
    ex.rice=100;
    cout<<"Rice : "<<ex.rice<<endl;
    ex.wheet=9999.99;
    cout<<"Rice : "<<ex.rice<<endl;  // its gets over written and a garbage value is allted to rice.
    cout<<"Wheet : "<<ex.wheet<<endl;
    return 0;
}