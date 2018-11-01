#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(void){
	
	int nums[SIZE];
	int i;
	
	printf("input %i numbers: ", SIZE);
	for(i=0;i<SIZE;i++)
	{
		scanf("%d ",&nums[i]);
	}
	
	
	//sorting function
	//bubblsesort();
	
		
	printf("sorted numbers are: ");
	for (i=0;i<SIZE;i++)
	{
		printf("%d ", nums[i]);
	}
	
	return 0;
	
}
