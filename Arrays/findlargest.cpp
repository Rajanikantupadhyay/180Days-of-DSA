/*You are very hungry and want to eat something but you don't know how to cook. That is why you decided to order some food. When you visit an online food delivery website then notice it gives you a list of prices according to food. Before ordering food you want to know what is the minimum and maximum price of food available on the website.

Input Format

First line contains T- number of test cases. Second line contains the N- size of the list. Third line contains elements of a list.

Constraints

0<=T<=200, 0<=N<=10000, 1<=a[i]<=1000000

Output Format

Print two integer minimum and maximum price respectively. */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    
    for (int i=1; i<=t; i++){
        int size;
        cin >> size;
        
        int arr[size];
        for(int i=0; i<size; i++){
            cin >> arr[i];
        }
        int largest = arr[0];
        int min = arr[0];
        for(int i=0; i < size; i++){
            if(arr[i] > largest){
                largest = arr[i];
            }
            if(arr[i] < min){
                min = arr[i];
            }
        }
        cout << min <<" " <<largest;
        cout <<endl;
    }
    return 0;
}