#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return x*x*x-x*3+1;
}
double dif(double x)
{
    return 3*x*x-3;
}

void NR(double x)
{
    double h=f(x)/dif(x);
    while (abs(h)>=0.001)
    {
        h = f(x)/dif(x);
        x = x - h;
    }

    cout << "Joe Root:" << x;
}
int main()
{
    double Mash_02=-5;
    NR(Mash_02);
    return 0;
}
