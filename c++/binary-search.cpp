#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int  main(){
    vector<int> vec = {5,6,9,8,7,15,2,0,11}; // 0 2 5 6 7 8 9 11 15
    int target = 9;
    int ans = 0;


    sort(vec.begin(), vec.end());
    int n = vec.size();
    int st = 0;
    int end = n-1;
    
    while(st<=end){
      int hf = (st+end)/2;
      if(target>vec[hf]){
        st = hf+1;
      }
      if(target<vec[hf]){
        end = hf-1;
      }

      if(target==vec[hf]){
        cout << hf;
          break;
      }
    }

   

}