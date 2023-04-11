#include<stdio.h>
#include<string.h>
int main()
{
	int arr[6]={9,6,7,8,2,10};
	printf("Enter the number to be searched	: ");
	int a,i;
	scanf("%d",&a);
	for (i=0;i<6;i++)
	{
		if (arr[i]==a)
		{
			printf("The element is at position %d",(i+1));	
		}
	}
}




