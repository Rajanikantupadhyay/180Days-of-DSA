#include<iostream>
using namespace std;

//Brutforce Approach
bool pairSum(int arr[], int size){
    int target = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return true;
            }
        }
    }   
    return false;
}

    
int main()
{
    int arr[] = {3,2,5,10,1,7};
    int size = sizeof(arr) / sizeof(int);

    bool res = pairSum(arr,size);
    if (res == 1)
    {
        cout << "Pair Existed";
    } else{
        cout << " Not Existed";
    }
   
    return 0;
}