#include <iostream>

using namespace std;

void quicksort(int arr[], int l , int r)
{
	if (l <= r)
	{
		int key = arr[(l+r)/2];
		int i = l;
		int j = r;

		while (i <= j)
		{
			while (arr[i] < key)
				i++;
			while (arr[j] > key)
				j--;

			if (i <= j)
			{
				swap(arr[i], arr[j]);
				i++;
				j--;
			}
		}
		if (l < j)
			quicksort(arr, l, j);
		if (r > i)
			quicksort(arr, i, r);
	}
}

void quickSort(int a[], int n)
{
    quicksort(a,0,n-1);
}
