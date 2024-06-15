// Finding and printing the repeated element from a sorted array array
//! NOTE :- If the array is not sorted then sort the array first and then apply this code
#include<iostream>
using namespace std;

void findRepeated(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = i; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
                
        }
        if (count > 1)
        {
            cout << arr[i] << " ";
            i += count - 1;
        }        
    }
    
}
int main()
{
    int arr[] = {1,2,2,2,3,7,7,7,8,8,8,8};
    int size = sizeof(arr) / sizeof(int);
    findRepeated(arr, size);
    return 0;
}
