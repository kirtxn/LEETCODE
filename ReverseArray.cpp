#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
   int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr,0,n-1);
    display(arr,n);
}