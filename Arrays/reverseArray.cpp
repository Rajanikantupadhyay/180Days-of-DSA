#include<iostream>
using namespace std;

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    } 
}

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;
    while (start < end)
    {
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;
    }
    
    display(arr,size);
}
int main()
{
    int arr[] = {4,5,8,9,7,1,2,3,0};
    int size = sizeof(arr) / sizeof(int);

    reverseArray(arr, size);
    return 0;
}