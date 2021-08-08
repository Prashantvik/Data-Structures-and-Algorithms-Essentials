#include <iostream>
using namespace std;

void PrintingPairs(int arr[], int n){

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            cout << arr[i] << " " << arr[j] << endl;
        }
        cout << endl;
    }

}

int main() {
    // your code goes here
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(int);

    PrintingPairs(arr,n);

	return 0;
}

