#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number of elemnts: ");
	scanf("%d", &n);

	int arr[n];
	int sum = 0;

	printf("Enter %d elements: ", n);
	for(int i=0; i < n; i++){
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	float average = (float)sum / n;
	printf("average is: %.2f", average);
	return 0;
}