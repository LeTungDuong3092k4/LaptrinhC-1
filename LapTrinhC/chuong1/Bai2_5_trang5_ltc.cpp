#include "stdio.h"
#include "math.h"
int main()
{
	int toan,ly,hoa,tong;
	do{
		printf("\nNhap diem toan:");scanf("%d",&toan);
		printf("Nhap diem ly:");scanf("%d",&ly);
		printf("Nhap diem hoa:");scanf("%d",&hoa);
		
		tong=toan+ly+hoa;
		if (toan<4 || ly<4 || hoa<4 || tong<15){
			printf("Truot");
		}else if(toan>=4 && ly>=4 && hoa>=4 && tong>=15){
			printf("Dau");
				if(toan>5 && ly>5 && hoa>5)
				{
					printf("\nHoc deu tat ca cac mon");
				}else{
					printf("\nHoc khong deu cac mon");
				}
		}
		
	}while(toan<0 || ly<0 || hoa<0);
}
