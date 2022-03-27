#include <iostream>

using namespace std;
int GCD(int , int );

int main() {
    int n1, n2, gcd;
    cout << "Enter two numbers: "<<endl;
    cin >> n1 >> n2;
    gcd = GCD(n1, n2);
    cout << "GCD = " << gcd;

    return 0;
}

int GCD(int a, int b)
{
    int gcd;
      // swapping variables b and a if a is greater than b.
    if ( a > b)
    {   
        int temp = a;
        a = b;
        b = temp;
    }
    
    for (int i = 1; i <=  a; ++i)
    {
        if (a % i == 0 && b % i ==0)
        {
            gcd = i;
        }
    }
    return gcd;
}