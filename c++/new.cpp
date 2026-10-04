#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> fn(){

}


int main() {
  vector<int> nums = {3,2,4};
  int target = 6;
//    int fq = 1, size=nums.size(), n=nums[0];
//   sort(nums.begin(), nums.end());
        int n = nums.size();

      for(int i=0; i<n; i++){
          for(int j=0; j<n;j++){
            int sum = nums[i]+ nums[j];
            cout << sum << "\n";
            if(sum ==target){
                cout << i << ' ' << j;
                // return {i,j};
            }else{
                return {};
            }
          }
        }
        
        
    return {};
    
  
  

  

}