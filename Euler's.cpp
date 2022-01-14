#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
db n, a[10000], b[10000];

double func(double x, double y)
{
    return 1-y;
}


void Eulers(double h, double x, double y)
{
    for(int e=1;e<=n;e++)
    {
        b[e]=b[e-1]+h*func(a[e-1],b[e-1]);
        cout<<"x="<<a[e]<<" y="<<b[e]<<endl;
    }
}

int main()
{
    cout<<"Enter the initial value of x and y\n";
    db x,y;
    cin>>x>>y;
    cout<<"Enter the number of required solutions\n";
    cin>>n;
    cout<<"Enter the tabulated values\n";
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    a[0]=x;
    b[0]=y;
    db h = fabs(a[1]-a[0]);
    cout<<"x="<<x<<" y="<<y<<endl;
    Eulers(h,x,y);
}
