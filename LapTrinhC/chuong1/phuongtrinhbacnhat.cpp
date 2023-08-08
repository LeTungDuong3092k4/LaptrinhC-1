#include <stdio.h>
#include <conio.h>

int main()
{
	float a, b;
	printf("Nhap vao a: ");
	scanf("%f", &a);
	printf("Nhap vao b: ");
	scanf("%f", &b);

	if (a == 0 && b != 0)
	{
		printf("Phuong trinh vo nghiem");
	}
	else if (a != 0)
	{
		printf("Phuong trinh co nghiem la: %g", -b / a);
	}
	else
	{
		printf("Phuong trinh vo so nghiem");
	}

	getch();
	return 0;
}
