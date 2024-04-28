#include <iostream>
using namespace std;
class calculator
{
    float num1;
    float num2;
    int op;
    public:
    calculator(){
        cout<<"enter num1:";
        cin>>num1;
        cout<<"enter num2:";
        cin>>num2;
        cout<<"enter operator"<<endl<<"1.add"<<endl<<"2.subtract"<<endl<<"3.multiply"<<endl<<"4.divide:"<<endl;
        cin>>op;
       }
    void calculate(){
        switch(op){
            case 1:cout<<"Addition:"<<(num1+num2);
            break;
            case 2:cout<<"Subtraction:"<<(num1-num2);
            break;
            case 3:cout<<"Multiplication:"<<(num1*num2);
            break;
            case 4:cout<<"Division:"<<(num1/num2);
            break;
        }
    }
};


int main() {
    int y;
    
    do{
        calculator c;
        c.calculate();
        
        cout<<endl<<"do you want to continue if yes press 1 else 0";
        
        cin>>y;}
        while(y==1);
         return 0;
}
    
        
        
