#include <iostream>
#include <array>
using namespace std;

int main(){
    int arr[8] = {2, 5, 6, 3, 4, 8, 9, 7};
    int size = sizeof(arr) / sizeof(int);
    int start = 0;
    int end = size -1;

    for(start,end; start<end; start++, end--)
    {
        swap(arr[start], arr[end]);
        start++;
        end --;
       
    }

    for(int i=0; i<size; i++){
        cout << arr[i];
    }
}