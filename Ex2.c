#include <stdio.h>


int caculate_sum(int arr[],int length)
{
 int sum=0;
 for(int i=0;i<length;i++)
 	{
 		if(i%2==0)
 			{
 				sum+=arr[i]; //sum of elements of even indices
 			}
 	}
 	return sum;
}
int main()
{
	int arr1[]={2,6,3,8,6,3};
	int arr2[]={1,2,5,3,1,5,1};
	int length1=6;
	int length2=8;

	printf("res1:%d\n",caculate_sum(arr1,length1));
	printf("res2:%d",caculate_sum(arr2,length2));
	return 0;
	
}