#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key){
    //check for individual elements
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return key;
        }
    }
    //out of the loop
    return -1;
}

int main() {
	// your code goes here
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    int index = linear_search(arr,n,key);
    
    if(index == -1){
        cout << "Key(" << key << ") is not present" << endl;
    }
    else{
        cout << "Key(" << key << ") is present at index " << index << endl;
    }

	return 0;
}