#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
    printf(" Name:Bhavya Shastri\n Student ID:200121266\n Section:B\n");
	printf("Enter the number of requests : \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter seek time of process: \n");
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	int pointer;
	printf("Enter position of initial head pointer : \n");
	scanf("%d",&pointer);
	int seekDistance = 0;
	for(int i = 0 ; i < n ; i++){
		seekDistance += abs(a[i]-pointer);
		pointer = a[i];
	}
	printf("Seek Sequence : \n");
	for(int i = 0 ; i < n ; i++){
		printf("%d ",a[i]);	
	}
	printf("\nTotal number of seek operations : %d\n",seekDistance);
}