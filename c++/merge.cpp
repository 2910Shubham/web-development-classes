#include <iostream>
#include <array>

using namespace std;

int main(){
    int arr[] = {3,7,10,11,14,19};
    int arr1[] = {5,9,12,13,18,22,25,28};
    int  n= sizeof(arr)/sizeof(int), m= sizeof(arr1)/ sizeof(int), one[n+m] = {};
    int i=0, j=0, k=0;

    while(i<n && j< m){
        if(arr[i]<arr1[j]){
          one[k] = arr[i];
          i++;
          k++;
        }else{
            one[k]= arr1[j];
            j++;
            k++;
        }
    }
        while(j<m){
            one[k++] = arr1[j++];
         
        }

        while(i<n){
            one[k++] = arr[i++];
            
        }
    for(int f=0; f<m+n; f++){
        cout << one[f] << " "; 
    }

}