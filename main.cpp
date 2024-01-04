#include <iostream>

using namespace std;

class Calculator
{
    private:
     int number1;
     int number2;
     int result;
    char operation;

    public:
     Calculator (int n1, int n2, int res);
};

Calculator::Calculator(int n1,int n2, int res)
{
if ((n1=0 || n2 = 0)&&(operation=/)){
        cout<<"Error"<<endl;    
}

int main()
{
   int number1;
   int number2;
   int result;
    cin >> number1;
    cin >>number2;
    result=number1+number2;
    cout<<result<<endl;
  //  cout<<"Hello World"<<endl;
    return 0;
