
#include<bits/stdc++.h>
using namespace std;

double f(double x,double y)
{
    return x+(y*y);
}

int main()
{
 float x0,y0,xf,h,yf,m1,m2,m3,m4,m;

 cout<<"Enter initial values for x and y"<< endl;
 cin>> x0>>y0;
 cout<<"Enter final value of x = ";
 cin>>xf;
 cout<<"Enter step-size: ";
 cin>> h;

cout<<"---------------------------------------------------------------\n";
 cout<<"x0\ty0\tyf\tm1\tm2\tm3\tm4\tm\n";
 cout<<"---------------------------------------------------------------\n";
 while(x0<=xf)
 {
  m1 = (f(x0, y0));
  m2 = (f((x0+h/2), (y0+m1*h/2)));
  m3 = (f((x0+h/2), (y0+m2*h/2)));
  m4 = (f((x0+h), (y0+m3*h)));
  m = (m1+2*m2+2*m3+m4)/6;
  yf = y0 + m*h;
  cout<< x0<<"\t"<< y0<<"\t"<< yf<<"\t"<< m1<<"\t"<< m2<<"\t"<< m3<<"\t"<< m4<<"\t"<< m<< endl;
  x0 = x0+h;
  y0 = yf;
 }
 cout<<"\nValue of y at x = "<< xf<< " is " << yf;

 return 0;
}



