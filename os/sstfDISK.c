#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main(){
	int n;
    printf(" Name:Bhavya Shastri\n Student ID:200121266\n Section:B\n");
	printf("Enter the number of requests : \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter seek time of process: \n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int pointer;
	printf("Enter position of initial head pointer : \n");
	scanf("%d",&pointer);

	int ans[n]; //array for seek sequence
	int count = 0 , seekDistance = 0;

	while(count!=n){
		int index;
		int currDiff = INT_MAX;
		//Find least distance
		for(int i=0;i<n;i++){
			if( a[i]!=-1 && (abs(a[i]-pointer)<currDiff)){
				currDiff = abs(a[i]-pointer);
				index=i;
			}
		}
		seekDistance += abs(a[index]-pointer);
		ans[count]=a[index];
		pointer = a[index];
		a[index]=-1;
		count++;
	}
	printf("Seek Sequence : \n");
	for(int i=0;i<n;i++)
		printf("%d ",ans[i]);
	printf("\nTotal number of seek operations : %d\n",seekDistance);
}