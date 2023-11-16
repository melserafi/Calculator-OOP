#include<iostream>
using namespace std;
class claculator{
    private:
        int a,b;
        char ch,op;
        void input(){
                cout<<"Enter first number "; cin>>a;
                cout<<"Enter second number "; cin>>b;
                cout<<"Enter  opertaor (+,-,*,/) :"; cin>>op;
            }
            int add(){
                return a+b;
            }
            int subtractor(){
                return a-b;
            }
            int multiply(){
                return a*b;
            }
            int divide(){
                return a/b;
            }
        public:
        claculator(){
            ch ='y';
        }
        void calc(){
            while(ch=='y'){
                input();
                switch(op){
                    case '+':
                        cout<<a<<"+"<<b<<"="<<add();
                        break;
                    case '-':
                        cout<<a<<"-"<<b<<"="<<subtractor();
                        break;
                    case '*':
                        cout<<a<<"*"<<b<<"="<<multiply();
                        break;
                        case '/':
                        cout<<a<<"/"<<b<<"="<<divide();
                        break;
                        default:
                        cout<<"\ninvalid Entry. Try again"<<endl;
                    }
                    cout<<"\n\nDo you want to perform to another calculation : (y/n)";
                    cin>>ch;
                }
                
            }
    };
    
int main (){
    claculator c;
    c.calc();
    return 0;
}