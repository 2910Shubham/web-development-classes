#include <iostream>
#include <array>

using namespace std;

int main(){
    int arr[] = {3,7,10,11,14,19};
    int  n= sizeof(arr)/sizeof(int);

    int w = 4;
    int stop = w;
    int curr = 0;



    for(int i=0; i<=w; i++){
        curr = curr + arr[i];
    }
  cout << "intial: "<< curr << '\n' ;
    int max = curr;

    for(int i=1; i<n-w; i++){
        curr = curr + arr[i+w-1] - arr[i-1];
        cout << "on iteration "<< i << " " << curr << '\n';

        if(curr>max){
            max = curr;
        }
    }

    cout << max;




   
}