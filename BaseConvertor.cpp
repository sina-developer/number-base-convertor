/** 

github : https://github.com/sina-developer
instagram : https://instagram.com/sina_developer

 **/
#include <iostream>

using namespace std;


void Base(int n , int m)
{	
    if (m / n < n)
    {	
        cout << (m / n) << (m % n);
    }
    else
    {
        Base(n, m / n);
        cout <<(m % n);
    }
}

int main() 
{
	int n , m;
	cout << "Enter N = ";
	cin>>n;
	cout<< "Enter M = ";
	cin >> m;
	Base(n,m);
    return 0;
}

