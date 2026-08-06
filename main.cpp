#include<iostream>
using namespace std;

class Calculator
{
    public:
        float number_1;
        float number_2;
    
    Calculator(float num1, float num2)
    {
        number_1 = num1;
        number_2 = num2;
    }

    float Addition()
    {
        return number_1 + number_2;
    }

    float Subraction()
    {
        return number_1 - number_2;
    }

    float Divide()
    {
        if(number_2 == 0)
        {
            cout<<"Division by zero is not possible";
            return 0.0;
        }
        return number_1 / number_2;
    }

    int Remainder()
    {
        return (int)number_1 % (int)number_2;
    }
};


int main()
{
    //initialize the variables
    float number_1;
    float number_2;
    
    cin>>number_1>>number_2; //get the input
    
    Calculator calc(number_1, number_2);

    cout<<"\n Total :" << calc.Addition();
    cout<<"\n Subraction :" << calc.Subraction();
    cout<<"\n Quotient :" << calc.Divide();
    cout<<"\n Remainder :" << calc.Remainder();
    
    return 0;
}