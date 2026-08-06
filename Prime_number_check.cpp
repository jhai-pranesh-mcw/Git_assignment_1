#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;

    for(int  i = 2; i < number; i++)
    {
        if(number % i == 0)
        {
            cout<<"Not a prime";
            return 0;
        }
    }
    cout<<"Prime";
    return 0;
}