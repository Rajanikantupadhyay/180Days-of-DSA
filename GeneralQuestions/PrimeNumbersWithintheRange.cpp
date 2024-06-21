#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        int num1, num2;
    cin >> num1 >> num2;
    
    for(int i=num1; i<=num2; i++){
        bool isPrime = true;
        int val = i;
        for(int j=2; j <= sqrt(val); j++){
            if (val % j == 0){
                isPrime = false;
                break;
            }
        }
        
        if(isPrime){
            cout << val <<" ";
        }
    }
    cout <<endl;
    }
    
    return 0;
}