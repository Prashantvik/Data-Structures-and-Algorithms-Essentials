#include <iostream>
using namespace std;

void AllSubarraySum(int arr[], int n){

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){

            int SubarraySum = 0;
            for(int k=i; k<=j; k++){
                SubarraySum += arr[k]; 
            }

            cout << SubarraySum << endl;
        }
        cout << endl; 
    }
}

int main() {
    // your code goes here
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(int);

    AllSubarraySum(arr,n);

	return 0;
}

