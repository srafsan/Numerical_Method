#include<bits/stdc++.h>
#define ll long long int
using namespace std;
double x[100], y[100];

double func(double x)
{
    return (7*x) /(1+x);
}

double trapezoidal(double a, double b, double n)
{
    cout<<"X\t\tY\n";
   double h = (b-a)/n;
   int p=0;
   for(double i=a; i<=b; i+=h)
   {
       x[p]=i;
       y[p]= func(i);
       printf("%.6lf\t%.6lf\n",x[p],y[p]);
       p++;
   }
   double ans = 0.0;
   for(int j=1;j<n;j++)
   {
       ans = ans + 2*y[j];
   }
   ans = ans + y[0] + y [int(n)];
   ans = h/2 * (ans);
   return ans;
}


int main()
{
    double a,b,n;
    cout<<"ID = C173207 "<<"So, A=7"<<endl;
    cout<<"The given equation is : y = 7*x /(1 + x)\n\n";
    cout<<"Enter the number of intervals : ";
    cin>>n;
    cout<<"Enter the lower limit : ";
    cin>>a;
    cout<<"Enter the upper limit : ";
    cin>>b;
    double answer = trapezoidal(a,b,n);
    cout<<"\nArea under the limit : "<<answer<<endl;
}
