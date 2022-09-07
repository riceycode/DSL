#include <stdio.h>

int Lsearch(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}
int main()
{
	int arr[100];  int n, x, j;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter array elements: \n");
	for (j=0;j<n;j++)
	{
		scanf("%d",&arr[j]);
	}
	printf("Enter element to be searched for: \n");
	scanf("%d",&x);
	int result =Lsearch(arr, n, x);
	if (result==-1)
		printf("Element not found in array.\n");
	else
		printf("Element found in array at index position %d\n", result);
}






