#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	 float a[10][10], ans[10], mul;
	 int i,j,k,n;

	 printf("Unknowns in the equations?: ");
	 scanf("%d", &n);

	 printf("Enter the coefficients of each equation row-wise\n: ");
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n+1;j++)
		  {
			   scanf("%f", &a[i][j]);
		  }
	 }

	 for(i=1;i<=n-1;i++)
	 {

		  for(j=i+1;j<=n;j++)
		  {
			   mul = a[j][i]/a[i][i];

			   for(k=1;k<=n+1;k++)
			   {
			  		a[j][k] = a[j][k] - mul*a[i][k];
			   }
		  }
	 }

	 ans[n] = a[n][n+1]/a[n][n];

	 for(i=n-1;i>=1;i--)
	 {
		  ans[i] = a[i][n+1];
		  for(j=i+1;j<=n;j++)
		  {
		  		ans[i] = ans[i] - a[i][j]*ans[j];
		  }
		  ans[i] = ans[i]/a[i][i];
	 }

	 printf("\nAnswers:\n");
	 for(i=1;i<=n;i++)
	 {
	  	printf("Answer %d = %0.3f\n",i, ans[i]);
	 }

	 return(0);
}

/*
2 1 1 10
3 2 3 18
1 4 9 16
*/
