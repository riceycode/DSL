#include <stdio.h>
int i;
void large2nd(int a[], int n)
{
	int largest, slargest;
	if (a[0]>a[1])
	{
		largest=a[0];
		slargest=a[1];
	}
	else
	{
		largest=a[1];
		slargest=a[0];
	}
	for (i=2;i<n;i++)
	{
		if (largest=a[i])
		{
			slargest=largest;
			largest=a[i];
		}
		else if (slargest<a[i])
			slargest=a[i];
	}
	printf("The second largest number: %d\n", slargest);
}


int main()
{
	int n;
	printf("Enter no. of numbers: \n");
	scanf("%d",&n);
	int a[n];
	printf("Input the nos: \n");
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);

	large2nd(a, n);
}