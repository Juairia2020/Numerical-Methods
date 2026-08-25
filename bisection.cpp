#include<bits/stdc++.h>
using namespace std;

double func(double x)
{
    return x*x*x - 5.4*x*x + 7.89*x - 2.72;
}

double bisection(double x_1, double x_2, double tol)
{
    while(true)
    {
        double x_0 = (x_1 + x_2)/2;
        if(func(x_0)==0)return x_0;

        if(func(x_1)*func(x_0)<0)
        {
            if(abs(x_1-x_0)<tol)return x_0;
            x_2 = x_0;
        }
        else
        {
            if(abs(x_2-x_0)<tol)return x_0;
            x_1 = x_0;
        }
    }
}

int main()
{
    int a,b;
    double tol;
    cin>>a>>b>>tol;

    for(double i=a; i<b; i+=0.5)
    {

        if(func(i)*func(i+0.5) < 0 )
        {
            cout<<bisection(i,i+0.5,tol)<<endl;
        }
    }




}

//x^3 - x^2 +2 = 0
