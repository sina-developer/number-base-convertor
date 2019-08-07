/** 

github : https://github.com/sina-developer
instagram : https://instagram.com/sina_developer

 **/
#include <iostream>

using namespace std;


void ConvertBase(int base , int number)
{	
    if (number / base < base)
    {	
        cout << (number / base) << (number % base);
    }
    else
    {
        Base(base, number / base);
        cout <<(number % base);
    }
}

int main() 
{
	int base , number;
	cout << "Enter Target Base = ";
	cin>>base;
	cout<< "Enter Your Number = ";
	cin >> number;
	ConvertBase(base,number);
    return 0;
}

