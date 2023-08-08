#include "stdio.h"
int main()
{
	char phuongan, choitiep;
	printf("Tu khoa nao dung de thoat vong lap trong lap trinh C");
	printf("\nA:int");
	printf("\nB:continue");
	printf("\nC:break");
	printf("\nD:exit");
	
	do{
		fflush(stdin);
		printf("\nNhap vao cau tra loi:");
		scanf("%c",&phuongan);
		fflush(stdin);
		switch (phuongan)
		{
			case 'a': case 'A':
				{
					printf("Ban da chon sai\n");
					printf("Them luot nua?:");
					scanf("%c",&choitiep);
					break;
				}
			case 'b': case 'B':
				{
					printf("Ban da chon sai\n");
					printf("Them luot nua?:");
					scanf("%c",&choitiep);
					break;
				}
			case 'c': case 'C':
				{
					printf("Ban da chon dung\n");
					choitiep='n';
					break;
				}
			case 'd': case 'D':
				{
					printf("Ban da chon sai\n");
					printf("Them luot nua?:");
					scanf("%c",&choitiep);
					break;
				}
		}//lenh xoa bo nho dem vi luu phim enter trong bo nho dem fflush(stdin);
	}while(choitiep=='y' || choitiep=='Y' || phuongan=='[a,A,b,B,d,D]');
}
