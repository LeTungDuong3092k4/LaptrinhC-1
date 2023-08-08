#include "stdio.h"
#include "math.h"

int main()
{
	int n;
	do{
		printf("Nhap n trong khoang tu 1 den 5:");scanf("%d",&n);
	}while(n<0 || n>5);
	switch(n)
	{
		case 1:
			{
				printf("so %d trong tieng anh la ONE",n);break;
			}
		case 2:
			{
				printf("so %d trong tieng anh la TWO",n);break;
			}
		case 3:
			{
				printf("so %d trong tieng anh la THREE",n);break;
			}
		case 4:
			{
				printf("so %d trong tieng anh la FOUR",n);break;
			}
		case 5:
			{
				printf("so %d trong tieng anh la FIVE",n);break;
			}
	}
}
