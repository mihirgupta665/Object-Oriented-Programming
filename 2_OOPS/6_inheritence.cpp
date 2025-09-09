//Whenever  aclass is derived then a deault constructor is called of base class.
//private members of basse class can not be inherited.
// visibilty mode : private makes the derived components private and public makes the derived componets public,
//Protected: member data and function are likely private but can be inherited. but not accessed outside the class.
/*
                        public derivation           private derivation             protected derivation
1.Privarte members      Not Inherited               Not Inherited                  Not Inherited
2.Protected memberss    Protected                   Priavte                        Protected
3.Public members        Public                      Private                        Protected
*/
// Calculator simple and scientific adn a derived hybrid 
// resolution of ambiguity
#include<iostream>
#include<math.h>
using namespace std;
class simple {
    int a;
    int b;
    char ch;
    public:
    void setvalue(){
        cout<<"Enter First Value : ";
        cin>>a;
        cout<<"Enter Second Value : ";
        cin>>b;
        cout<<"Which operation you want : + or - or * or % : ";
        cin>>ch;
    }
    void display(){
        cout<<"Result : "<<endl;
        switch(ch){
            case '+':
            cout<<a<<" "<<ch<<" "<<b<<" : "<<a+b<<endl;
            break;
            case '-':
            cout<<a<<" "<<ch<<" "<<b<<" : "<<a-b<<endl;
            break;
            case '*':
            cout<<a<<" "<<ch<<" "<<b<<" : "<<a*b<<endl;
            break;
            case '/':
            if(b==0){
                cout<<"Cannot divide by 0."<<endl;
                break;
            }
            cout<<a<<" "<<ch<<" "<<b<<" : "<<double(a/b)<<endl;
            break;
            default:
            cout<<"Invalid choice";
        }
    }
};
class scientific {
    double angle,radian;
    int ch;
    public:
    void setangle(){
        cout<<"Enter the angles (in degree) : ";
        cin>>angle;
        radian=angle*M_PI/180;
        cout<<"Enter your choice : "<<endl;
        cout<<"Enter 1. for sine : "<<endl;
        cout<<"Enter 2. for cosine : "<<endl;
        cout<<"Enter 3. for tangent : "<<endl;
        cin>>ch;
    }
    void display(){
        switch(ch){
            case 1:
            cout<<"Sine of ("<<angle<<"°) is : "<<sin(radian)<<endl;
            break;
            case 2:
            cout<<"Cosine of"<<angle<<"°) is : "<<cos(radian)<<endl;
            break;
            case 3:
            if(cos(radian)==0){
                cout<<"Tangent will tend to infinity."<<endl;
                break;
            }
            cout<<"Tangent of"<<angle<<"°) is : "<<tan(radian)<<endl;
            break;
            default:
            cout<<"Enter values between 1 to 3 inclusively only"<<endl;
        }
    } 
};
class hybrid: protected simple, protected scientific{
    int a;
    int choice;
public:
    void setcalculator(){
        cout<<"Enter your choice"<<endl;;
        cout<<"Enter 1 or simple Calculator : "<<endl;
        cout<<"Enter 2 or scientific Calculator : "<<endl;
        cout<<"Enter 1 or 2 : ";
        cin>>choice;
    }
    void display(){
        if(choice==1){
            setvalue();
            simple :: display(); 
        }
        if(choice==2){
            setangle();
            scientific :: display();
        }
    }

};
int main(){
hybrid calc;
calc.setcalculator();
calc.display();
return 0;
}