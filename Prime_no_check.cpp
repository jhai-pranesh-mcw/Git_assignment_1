#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;//get the input

    for(int  i = 2; i < number/2 ; i++)
    {
        if(number % i == 0) // check if divisible 
        {
            cout<<"Not a prime";
            return 0;
        }
    }
    cout<<"Prime";
    return 0;
}