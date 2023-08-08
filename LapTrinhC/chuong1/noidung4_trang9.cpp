//dung while khong dung for
#include "stdio.h"
#include "math.h"
int main()
{
	int n,s,i;
	do{
		printf("Nhap n=");scanf("%d",&n);
	}while(n<0);
	
	while (i<=n){
		s+=i*i;i++;
	}
	printf("Ket qua la:%d",s);
}
