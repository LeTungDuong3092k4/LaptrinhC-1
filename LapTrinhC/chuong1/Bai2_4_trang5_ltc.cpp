//viet chuong trinh kiem tra xem co phai la tam giac hay khong
#include "stdio.h"
#include "math.h"

int main()
{
	int a,b,c;
	
	do{
		printf("Gia tri cua a la:",a);scanf("%d",&a);
		printf("Gia tri cua b la:",b);scanf("%d",&b);
		printf("Gia tri cua c la:",c);scanf("%d",&c);
		if(a+b>c && a+c>b && b+c>a){
			printf("3 so vua nhap tao thanh 1 tam giac\n");
			
			float s,p;
			
			p=(a+b+c)/2;
			s=sqrt(p*(p-a)*(p-b)*(p-c));
				printf("Dien tich cua tam giac la:%.2f",s);
		}else{
			printf("khong the tao thanh tam giac\n");
		}
		
	}while(a<0 || b<0 || c<0 || a+b<=c || a+c<=b || b+c<=a);
	


}
