#include<bits/stdc++.h>
using namespace std;

#define E 0.001
#define SP fixed<<setprecision(3)

double a,b,c,d,e;
double func(double x)
{
    return a*x*x*x*x + b*x*x*x + c*x*x + d*x + e;
}

void false_pos(double lo, double hi){

    int it=0;
    double old_x = 0.0;
    while(true){

        double x_0 = (lo*func(hi) - hi*func(lo))/(func(hi)-func(lo));

        if(func(x_0)==0){
            cout<<"Root: "<<SP<<x_0<<" --> ["<<lo<<","<<hi<<"] Iterations: "<<it<<endl;
            break;
        }

        if(func(x_0)*func(lo)<0){
            hi = x_0;
        }
        else  if(func(x_0)*func(hi)<0){
            lo = x_0;
        }

        if(abs(func(x_0) - func(old_x))<E){
            cout<<"Root: "<<SP<<x_0<<" --> ["<<lo<<","<<hi<<"] Iterations: "<<it<<endl;
            break;
        }

        it++;
        old_x = x_0;

    }

}

int main(){

   cin>>a>>b>>c>>d>>e;
   double range = sqrt((b/2)*(b/a) - 2*(c/a));

   for(double i=-range; i<range; i+=0.5){

    if(func(i)==0){
        cout<<"Root: "<<SP<<i<<" --> ["<<i<<","<<i<<"] Iterations: 0\n";
    }

    if(func(i)*func(i+0.5)<0){
        false_pos(i,i+0.5);
    }

   }

}
