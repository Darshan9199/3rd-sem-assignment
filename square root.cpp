#include <bits/stdc++.h>
using namespace std;
int mySqrt(int x)
{
    if(x <= 1)
        return x;
    return floor(sqrt(x));
}
int main()
{
    int x = 7;
    cout << mySqrt(x) << '\n';
}
