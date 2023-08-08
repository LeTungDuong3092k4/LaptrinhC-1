#include "stdio.h"

int main()
{
	int n;
	int s;
	while(s<10000)
	s+=++n;
	printf("\nSo n=%d\tTong:%d",n,s);
}
