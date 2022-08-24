
#include <stdio.h>

double Add(double arr[], int n)
{
	double sum = 0; 
	for (int i = 0; i < n; i++)
	sum += arr[i];

	return sum;
}

int main()
{
	double arr[100]; int n, j;
	printf("Enter size of array: \n");
	scanf("%d",&n);
	printf("Enter the values: \n");
	for (j=0;j<n;j++)
	{
		scanf("%lf",&arr[j]);
	}

	printf("Sum of given array is %lf\n", Add(arr, n));
	return 0;
}
