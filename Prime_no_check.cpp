#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;//get the input

    int last = number % 2;
    for(int  i = 2; i < last ; i++)
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