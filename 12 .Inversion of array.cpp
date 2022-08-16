#include <bits/stdc++.h>
int merge(long long arr[], long long temp[], int low, int mid, int high)
{
	int inv_count = 0;
	int i = low;
	int j = mid;
	int k = low;
	while ((i <= mid - 1) && (j <= high))
	{
		if (arr[i] <= arr[j])
			temp[k++] = arr[i++];
		else
		{
			temp[k++] = arr[j++];
			inv_count += mid - i;
		}
	}
	while (i <= mid - 1)
		temp[k++] = arr[i++];
	while (j <= high)
		temp[k++] = arr[j++];
	for (i = low; i <= high; i++)
		arr[i] = temp[i];
	return inv_count;
}
int mergesort(long long arr[], long long temp[], int low, int high)
{
	int mid, inv_count = 0;
	if (high > low)
	{
		mid = (high + low) / 2;
		inv_count += mergesort(arr, temp, low, mid);
		inv_count += mergesort(arr, temp, mid + 1, high);
		inv_count += merge(arr, temp, low, mid + 1, high);
	}
	return inv_count;
}
long long int getInversions(long long *arr, int n)
{
	long long temp[n];
	return mergesort(arr, temp, 0, n - 1);
}