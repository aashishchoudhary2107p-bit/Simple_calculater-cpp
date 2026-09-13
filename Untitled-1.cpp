#include <iostream>
using namespace std;
int main(){
    double num1 , num2 ;
    char op;

    cout <<"Enter your first number :";
    cin >>num1;

    cout <<"Enter your second number :";
    cin >>num2;

    cout <<"Choose your operator (+ , - , * , /):";
    cin >>op;

    if(op=='+')
    {
        cout <<"ADDITION :" << (num1 + num2) <<endl;
    }
    else if (op=='-')
    {
        cout<<"SUBTRACTION :" << (num1 - num2) <<endl;
    }
    else if (op=='*')
    {
        cout <<"MULTIPLICATION :" << (num1 * num2) <<endl;
    }
    else if (op=='/')
    {
        if(num2!=0)
        {
            cout <<"DIVISON :" << (num1 / num2) <<endl;
        }
        else 
        {
            cout<<"Undefined value !!!";  
        }
    }
    return 0;
}