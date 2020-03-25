/*
Write a C program to solve the following problem:
Suppose that a disk drive has 5,000 cylinders, numbered 0 to 4999. 
The drive is currently serving a request at cylinder143,
and the previous request was at cylinder 125.
The queue of pending requests, in FIFO
order,is:
86, 1470, 913, 1774, 948, 1509, 1022, 1750, 130
Starting from the current head position,
 what is the total distance (in cylinders)that the disk arm moves to satisfy 
 all the pending requests for each of the FCFS disk-scheduling algorithms?
*/
#include<stdio.h>
#include<stdlib.h>
void fcfs(int arr[]);
int total=0;
int n;
main()
{
	int choice;
	int arr[10000];
	int testcase[10]={143, 86, 1470, 913, 1774, 948, 1509, 1022, 1750, 130};
	printf("To check testcase Enter 1\nTo check your inputs Enter 2\n");
	scanf("%d",&choice);
	if(choice==1){
		n=10;
		fcfs(testcase);
	}
	else if(choice==2){
	printf("Enter the number of processes:\n");
	scanf("%d",&n);
	printf("Enter the current serving request \n");
	scanf("%d",&arr[0]);
	printf("Enter the order of queue:\n");
	for(int i=1;i<n+1;i++)
{

		scanf("%d",&arr[i]);
}
	fcfs(arr);
	}
	else{
		printf("Invalid inputs");
	}
	printf("FCFS is %d",total);
}
	void fcfs(int arr[])
{
	for(int i=1;i<n;i++)
{

		total=total+abs(arr[i]-arr[i-1]);
}
}
