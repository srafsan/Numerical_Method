#include<bits/stdc++.h>
#define ll long long int
using namespace std;
double x[100], y[100];

double func(double x)
{
    return exp(x);
}

double simpson(double a, double b, double n)
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
   double ans = 0.0, even_sum=0.0, odd_sum=0.0;
   for(int j=1;j<n;j++)
   {
       if(j&1 == 1)
        odd_sum=odd_sum + y[j];
       else
        even_sum= even_sum + y[j];
   }
   ans = 2*even_sum + 4*odd_sum + y[0] + y [int(n)];
   ans = h/3 * (ans);
   return ans;
}


int main()
{
    double a,b,n;
    cout<<"The given equation is : y = e^x\n\n";
    cout<<"Enter the number of intervals : ";
    cin>>n;
    cout<<"Enter the lower limit : ";
    cin>>a;
    cout<<"Enter the upper limit : ";
    cin>>b;
    double answer = simpson(a,b,n);
    cout<<"\nArea under the limit : "<<answer<<endl;
}
