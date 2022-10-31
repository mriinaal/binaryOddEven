// input is a binary number << output ODD or EVEN. 
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the Binary Number: ";
    cin >> n;

    int bit = n & 1;

    switch (bit)
    {
    case 1: cout<<"IS ODD";
        break;
    
    default: cout<<"IS EVEN";
        break;
    }
}
