#include <iostream>
using namespace std;

void ArrayReverse(int arr[], int n){
    int s = 0, e = n-1;

    while(s<=e){
       swap(arr[s], arr[e]);
       s+=1;
       e-=1;
    }

}

int main() {
    // your code goes here
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(int);

    ArrayReverse(arr,n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

	return 0;
}

