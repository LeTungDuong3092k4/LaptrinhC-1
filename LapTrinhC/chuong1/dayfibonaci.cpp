//day fibonaci
#include "stdio.h"
#include "math.h"

int main()
{
	int n,a=0,b=1,c,i;
	do{
		printf("Nhap vao so thu tu fibonaci can tinh:");scanf("%d",&n);
	}while(n<0);
	if(n==0){
		printf("So fibonaci thu 0 la:%d",a);
	}else if(n==1)
	{
		printf("So fibonaci thu 1 la:%d",b);
	}else{
		for(i=2;i<=n;i++)
		{
			c=a+b;
			a=b;
			b=c;
		}
		printf("So fibonaci thu %d la:%d",n,c);
	}
	return 0;
}
