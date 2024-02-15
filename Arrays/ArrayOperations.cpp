#include<iostream>
using namespace std;

void inputArray(int arr[], int size){
    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
}
void displayArray(int arr[], int size){
    for (int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}
void insertion(int arr[], int size){
    int pos, element;
    cout << "Position : ";
    cin >> pos;
    cout << "Enter element : ";
    cin >> element;

    for (int i=size; i>=pos; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = element;
    size++;
    cout << "Updated Array as follows: " << endl;
    displayArray(arr,size);
}
void deleteElement (int arr[], int size){
    int element,pos=-1;
    cout << "Enter the Element : ";
    cin >> element;
    for (int i=0; i<size; i++){
        if ( arr[i] == element){
            pos = i;
            cout << "Element present at the Index: " <<pos << endl;
            break;
        }
    }
    if(pos <= 0){
        cout << endl <<  "not found";
        }
    for(int i=pos;i<size-1;i++){
        arr[i] = arr[i+1];
    }
    cout << "Element deleted on the Index :"<< pos <<endl;
    size--;
    cout << "The new array is :  ";
    displayArray(arr,size);
}
void updateArray(int arr[], int size){
    int element, newElement, pos = -1;
    cout << "Enter the element to be updated : ";
    cin >> element;
    cout << "Enter the new element : ";
    cin >> newElement;
    for ( int i=0; i<size; i++){
        if ( arr[i] == element){
            pos = i;
            cout << "Element found at Index : "<<pos <<endl;
            arr[pos] = newElement;
            break;
        }
    }
    if (pos <= 0){
        cout << "Element not Found" <<endl;
    }
    displayArray(arr,size);
}
int main()
{
    int arr[100], size;
    cout << "Size of the Array : ";
    cin >> size;

    inputArray(arr,size);
    displayArray(arr,size);
    insertion(arr,size);
    deleteElement(arr,size);
    updateArray(arr,size);
    return 0;
}
