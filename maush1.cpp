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
       float addition(float a,float b){
           return (a+b);
       }
       
       float subtraction(float a,float b){
           return (a-b);
       }
       
       float multiplication(float a,float b){
           return (a*b);
       }
       
       float division(float a,float b)
       {if(b==0){
           cout<<"infinity";
           
       }
       else{
           return (a/b);}
       }
    void calculate(){
        switch(op){
            case 1:cout<<"Addition:"<<addition(num1,num2);
            break;
            case 2:cout<<"Subtraction:"<<subtraction(num1,num2);
            break;
            case 3:cout<<"Multiplication:"<<multiplication(num1,num2);
            break;
            case 4:cout<<"Division:"<<division(num1,num2);
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
            
