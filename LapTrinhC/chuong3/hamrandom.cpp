#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int main()
{
//	printf("Rand-Max=%d",RAND_MAX);
	srand(time(NULL));    //time(0) hoac time(NULL) deuduoc
	int i;
	for(i=0;i<30;i++)
	{
		int random=rand()%10;
		printf("%5d",random);
	}

	return 0;
}
