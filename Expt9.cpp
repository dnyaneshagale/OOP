#include <iostream>
using namespace std;

int main()
{
    int numerator, denominator, result;
    cout<<"Enter numerator and denominator"<<endl;
    cin>>numerator>>denominator;

    try
    {
        if(denominator == 0)
        throw denominator;
        result = numerator/denominator;
    }

    catch(int e)
    {
        cout<<"do not try to divide by zero!!!";
    }
    cout<<"\nDivision: "<<result;

    return 0;
}
