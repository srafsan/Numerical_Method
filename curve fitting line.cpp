#include<bits/stdc++.h>
#define ln(x) log(x)
using namespace std;

void curvefitLine(double x[], double y[], int n);

int main()
{
    double x[100],y[100];
    cout<<"Equation form: y=ax^b"<<endl;
    cout<<"Enter the total number of inputs:\n";
    int n;
    cin>>n;
    cout<<"X values: ";
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<"Y values: ";
    for(int j=0;j<n;j++)
    {
        cin>>y[j];
    }

    curvefitLine(x, y, n);
    return 0;
}

void curvefitLine(double x[], double y[], int n)
{
    int i, j;
    double a,b,Ex=0,Ey=0,Exy=0,Exx = 0;
    for (i=0; i<n;i++) {
        Ex += ln(x[i]);
        Ey += ln(y[i]);
        Exy += ln(x[i])*ln(y[i]);
        Exx += ln(x[i])*ln(x[i]);
    }
    b = (n*Exy - Ex*Ey)/(n*Exx - (Ex*Ex));
    a = (Ey - b*Ex)/n;

    cout<<"\ngradient b = "<< b;
    cout<<"\nconstant a = "<< exp(a);
    cout<<"\nRequired equation:\ny = "<<exp(a)<<" * x ^ "<<b<<endl;

}
