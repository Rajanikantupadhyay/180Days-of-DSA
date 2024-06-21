#include<iostream>
using namespace std;
int findUniqueElement(int arr[], int size){
    int i = 0;
    for (int  j = 1; j < size; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i;
}

int main()
{
    int arr[] = {1,1,2,2,2,3,3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int k = findUniqueElement(arr, size);
    for (int i = 0; i <= k; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}