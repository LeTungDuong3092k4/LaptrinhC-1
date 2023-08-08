#include "stdio.h"
#include "math.h"

int main()
{
	int a,b;
	printf("Nhap gia tri cua a la:");scanf("%d",&a);
	printf("Nhap gia tri cua b la:");scanf("%d",&b);
	
	if(a%b==0){
		printf("%d chia het cho %d",a,b);
	}else{
		printf("%d khong chia het cho %d",a,b);
	}

}

