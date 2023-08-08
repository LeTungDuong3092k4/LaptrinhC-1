#include "stdio.h"
#include "math.h"
 int main()
 {
 	float x,y,z,min,max;
 	
 	printf("Nhap gia tri cua x la:",x);scanf("%f",&x);
 	printf("Nhap gia tri cua y la:",y);scanf("%f",&y);
 	printf("Nhap gia tri cua z la:",z);scanf("%f",&z);
 	
 	//dung toan tu dieu kien ? va :
 	
 	max=x>y?(x>z?x:z):(y>z?y:z);
 	printf ("Gia tri lon nhat trong 3 so la: %.2f\n",max);
 	
 	min=x<y?(x<z?x:z):(y<z?y:z);
 	printf ("Gia tri nho nhat trong 3 so la: %.2f",min);
 }
