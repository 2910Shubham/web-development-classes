#include <iostream>
#include <climits>
using namespace std;

int main(){
    // cout << "hellow";
    int arr[]= {10,89,87,2,43,5}, arr1[] = {89,2,6,69,43,10}, size= sizeof(arr)/sizeof(int);
    int insize=0 , ins[insize] = {};


    for(int i=0; i<size; i++){
        int target = arr[i];
        // cout << "iter " << i <<": " << target;

        for(int j=0; j<size; j++){
            // cout << "comparing " << arr1[j] << "& " << target; 
            if(arr1[j]== target){
                // cout << "found intersection " << "🔥" << arr1[j];
                ins[insize] = arr1[j];
                insize++;

            }
        }

    }
    // cout << "Printing intersection: ";
    for(int j=0; j<insize;j++){
        cout << ins[j];
    
    }
    

    return 0;

    
}