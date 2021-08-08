#include <iostream>
using namespace std;

int largest_SubarraySum(int arr[], int n){

    largest_sum = 0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){

            int SubarraySum = 0;
            for(int k=i; k<=j; k++){
                SubarraySum += arr[k]; 
            }

            largest_sum = max(largest_sum, SubarraySum);
        } 
    }
    return largest_sum;
}


//Brute force approach to fing largest subarray sum
int main() {
    // your code goes here
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(int);

    largest_SubarraySum(arr,n);

	return 0;
}

