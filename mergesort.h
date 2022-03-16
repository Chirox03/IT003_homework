#include <iostream>

using namespace std;

int L[1000000], R[1000000];

void merge(int a[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    for (i = 0; i < n1; i++) L[i] = a[l + i];
    for (j = 0; j < n2; j++) R[j] = a[m + 1 + j];
    i = j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j]) a[k] = L[i++];
        else a[k] = R[j++];
        k++;
    }
    while (i < n1) a[k++] = L[i++];
    while (j < n2) a[k++] = R[j++];
}

void mergeSort(int a[], int l, int r)
{
    if (l >= r) return ;
    int mid = (l + r) / 2;
    mergeSort(a, l, mid);
    mergeSort(a, mid+1, r);
    merge(a, l, mid, r);
}

void mergesort(int a[], int n)
{
    mergeSort(a,0,n-1);
}
