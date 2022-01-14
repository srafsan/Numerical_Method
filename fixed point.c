#include<stdio.h>
#include<conio.h>
#include<math.h>

/* Define function f(x) which
   is to be solved */
#define   f(x)   x*x*+x*-2
/* Write f(x) as x = g(x) and
   define g(x) here */
float gfunc(float x)
{
    float y;
    y=2-(x*x);
    return y;
}

int main()
{
	 int step=1, N;
	 float x0, x1, e;
	 printf("Given function : x*x*x + x*x - 1\n\n");
	 /* Inputs */
	 printf("Enter initial guess: ");
	 scanf("%f", &x0);
	 printf("Enter tolerable error: ");
	 scanf("%f", &e);
	 printf("Enter maximum iteration: ");
	 scanf("%d", &N);
	 x1=x0;
	 /* Implementing Fixed Point Iteration */
	 printf("\nStep\tx0\t\tx1\n");
	 do
	 {
	      x0=x1;
		  x1 = gfunc(x0);
		  printf("%d\t%f\t%f\n",step, x0, x1);

		  step = step + 1;

		  if(step>N)
		  {
			   printf("Not Convergent.");
			   return (0);
		  }

	 }while( fabs(x1-x0) > e);

	 printf("\nRoot is %f", x1);

	 return(0);
}
