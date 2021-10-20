#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{
	int num[10];
	int i;
	
	for(i = 0; i < 10; i++)
	{
		printf("Nhap vao so nguyen thu %d: ", i+1);
		scanf("%d", &num[i]);
	}
	printf("\nResult: ");
	for(i = 9; i >= 0; i--)
	{
		printf(" %d ", num[i]);
	}
	return 0;
}
