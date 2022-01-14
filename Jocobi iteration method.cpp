#include<bits/stdc++.h>
#include<math.h>
using namespace std;

double a[1000];
double b[1000];
double c[1000];
double d[1000];

double eqn1(double x, double y, double z)
{
    double val=0;
    val=(d[0]-(b[0]*y)-(c[0]*z))/a[0];
    return val;
}
double eqn2(double x, double y, double z)
{
    double val=0;
    val=(d[1]-(a[1]*x)-(c[1]*z))/b[1];
    return val;
}

double eqn3(double x, double y, double z)
{
    double val=0;
    val=(d[2]-(a[2]*x)-(b[2]*y))/c[2];
    return val;
}


int main()
{
 double x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
 int itr=1;

 cout<<"Enter the left hand side matrix\n";

 for(int w=0;w<3;w++)
    cin>>a[w]>>b[w]>>c[w];

 cout<<"Enter the right hand side matrix\n";
 for(int w=0;w<3;w++)
    cin>>d[w];

 printf("Enter the maximum error you want:\n");
 scanf("%lf", &e);

 printf("\nIteration\tx\t\t\ty\t\t\tz\n");
 do
 {
  x1 = eqn1(x0,y0,z0);
  y1 = eqn2(x0,y0,z0);
  z1 = eqn3(x0,y0,z0);

  printf("%d\t\t%0.6lf\t\t%0.6lf\t\t%0.6lf\n",itr, x1,y1,z1);

  itr++;
  e1 = fabs(x1-x0);
  e2 = fabs(y1-y0);
  e3 = fabs(z1-z0);



  x0 = x1;
  y0 = y1;
  z0 = z1;
 }while(e1>e && e2>e && e3>e);

 printf("\nSolution: x=%0.3lf, y=%0.3lf and z = %0.3lf\n",x1,y1,z1);


 return 0;
}
/*
5 2 1
1 4 2
1 2 5
*/
/*12 15 20*/
