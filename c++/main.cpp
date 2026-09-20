#include <iostream>
#include <climits>
using namespace std;

int fn(int arr[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    return max;
}

int min(int arr[], int size){
    int min= INT_MAX;

    for(int i=0; i<size; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;

}

int sum(int arr[], int size){
    int add=0;

    for(int i=0; i<size; i++){
        add += arr[i];
    }
    return add;
}


int main() {
   // cout << nCr(8,2);
     int size;
    cout << "Enter the size of array:";
    cin >>size;

    int arr[size];

    cout << "Enter the " << size << " numbers";

    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
     cout << "your entered numbers are:";
    for(int i=0; i<size; i++){


        cout << arr[i] << "\n";
    }

     cout << "max value is:" << fn(arr,size) << "\n";
     cout << "min value is" << min(arr,size) << "\n";
     cout << "sum of all value is" << sum(arr,size) << "\n";



   



    return 0;

}
