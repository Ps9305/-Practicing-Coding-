#include<iostream>
using namespace std;
void merge(int a[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int A[n1], B[n2];;
     
    for(int i = 0; i<n1; i++)
    {
        A[i]=a[l + i];
    }

    for (int i = 0; i < n2; i++)
    {
        B[i] = a[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i<n1 && j<n2)
    {
        if(A[i] < B[j])
        {
            a[k] = A[i];
            k++; i++;
        }
        else{
            a[k] = B[j];
            k++; j++;
        }
    }
    while (i<n1)
    {
       a[k] = A[i]; 
       k++; i++;
    }  
     while (i<n2)
    {
       a[k] = B[j]; 
       k++; j++;
    }      
}
void mergeSort(int a[], int l, int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        mergeSort(a, l, mid);
        mergeSort(a, (mid+1), r);

        merge(a, l, mid, r);
    }
}
int main()
{
    int a[]={5,4,3,2,1};

    mergeSort(a, 0, 4);

    for(int i = 0; i < 5; i++)
    cout<<a[i]<<" ";

    return 0;
}