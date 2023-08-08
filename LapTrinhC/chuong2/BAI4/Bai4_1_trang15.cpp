#include <stdio.h>
#include <math.h>

int ktsnt(int);
int ktsnt(int n)
{
	if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
	int n;
	char phuongan;
	char dientiep;
	printf("Hay chon chuc nang");
	printf("\nA:Dien so de kiem tra");
	printf("\nB:Thoat");
	do{
		fflush(stdin);
		printf("\nNhap vao cau tra loi:");
		scanf("%c",&phuongan);
		fflush(stdin);
		switch(phuongan)
		{
			case 'a':case 'A':
			{
				printf("Nhap n=");scanf("%d",&n);
				if(ktsnt(n))
				{
	  			  printf("%d la so nguyen to", n);
				}else
				{
					printf("%d khong phai so nguyen to", n);
				}
				
				printf("\nBan co muon nhap them nua khong?:");
				scanf("%c",&dientiep);
				break;
			}
			case 'b':case 'B':
				{
					printf("Xin chao tam biet");
					dientiep='n';
					break;
				}
		}	
	}while(dientiep=='y'||dientiep=='Y'||phuongan=='[a,A]');
	return 0;
}
