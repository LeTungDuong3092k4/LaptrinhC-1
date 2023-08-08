#include "stdio.h"
#include "math.h"
 int main()
 {
 	float x,y,max;
 	printf("Nhap gia tri cua x la:",x);scanf("%f",&x);
 	printf("Nhap gia tri cua y la:",y);scanf("%f",&y);
 	
 	max=x;
 	if (max<y)
 		max=y;
 	printf("So lon nhat la: %.2f",max);
 }
