#include <iostream>

using namespace std;

int gcd(int n1, int n2);

int main()
{

int n1, n2;

cout << "Please input first positive integer and press Enter" <<endl;
cin >> n1;

cout << "Please input second integer and press Enter" <<endl;
cin >>n2;

cout << " The Greatest Common Divisor of " << n1 << " and " << n2 << " is " << gcd(n1, n2) <<endl;

return 0;
}

int gcd(int n1, int n2)

{
if (n2 != 0)

return gcd(n2, n1 % n2);

else
return n1;
} 
