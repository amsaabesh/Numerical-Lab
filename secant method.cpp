#include<bits/stdc++.h>
using namespace std;
float func(float x){
    float f=pow(x,3)-x-1;
    return f;
}
void sec(float x1,float x2,float epsi){
    float n=0,xm,x0,c;
    if (func(x1)*func(x2) < 0) {
        while (fabs(x1-x2)>=epsi){
            x0=(x1*func(x2)-x2*func(x1))/(func(x2)-func(x1));
            x1=x2;
            x2=x0;
            n++;
        }

        cout<<"Root="<<x0<<endl;
        cout<<"Ite. No: "<<n<<endl;
    } else
        cout<<"Interval pai na...";
}
int main()
{
    float x1=0,x2=2,epsi=0.00001;
    sec(x1,x2,epsi);
}
