#include<bits/stdc++.h>
using namespace std;
#define f(x) pow(x,3)+pow(x,2)-1
#define g(x) (1/sqrt(1+init))
int main(){
	 int i,N;
	 float init,x1,err;
	 printf("Initial guess?,error?,Max Iter. Lim.?\n");
	 scanf("%f%f%f",&init, &err, &N);
	 printf("\nStep\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	 for(i=1;fabs(f(x1))>err;i++)
	 {
		  x1=g(init);
		  printf("%d\t%f\t%f\t%f\t%f\n",i,init,f(init),x1,f(x1));
		  if(i>N){
			   printf("Not Convergent.");
		  }
		  init=x1;
	 }
	 printf("\nRoot = %f", x1);
	 return(0);
}
