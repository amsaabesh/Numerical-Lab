#include<stdio.h>
#include<math.h>
#define f(x) x*x*x+x*x-1
#define g(x) (1/sqrt(1+x0))
int main()
{
	 int i=1,N;
	 float x0,x1,e;
	 printf("Initial guess?\n");
	 scanf("%f", &x0);
	 printf("error?\n");
	 scanf("%f", &e);
	 printf("Max Iter. Lim.?\n");
	 scanf("%d", &N);
	 printf("\nStep\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	 for(i=1;fabs(f(x1))>e;i++)
	 {
		  x1=g(x0);
		  printf("%d\t%f\t%f\t%f\t%f\n",i,x0,f(x0),x1,f(x1));
		  if(i>N)
		  {
			   printf("Not Convergent.");
		  }
		  x0=x1;
	 }
	 printf("\nRoot is %f", x1);
	 return(0);
}
