#include <iostream>
using namespace std;

int main() {
    int arr[6] = {5,3,6,3,2,1};
    int uni[5]= {}, size= sizeof(arr)/sizeof(int), unisize = 0;

    for(int i=0;i<size;i++){
      int target = arr[i], count = 0;

      for(int j=0; j<size; j++){
        if(target==arr[j]){
              count ++;
            
        }
      }
      if(count==1){
         uni[unisize] = target;
            unisize++;
      }
    }

    for(int i=0; i<unisize;i++){
        cout << uni[i];
    }

    return 0;
}