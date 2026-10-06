#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {-1,1,0,-3,3};
    //expected outcome : [24,12,8,6]
   vector<int> output = {};
    int n = nums.size();
    
  for(int k=0; k<n; k++){
      int product = 1;
      for(int i=0; i<n; i++){
          if(i!=k){
              product *= nums[i];
            }
        }
        output.push_back(product);   
  }
    

    for(int i=0; i<n; i++){
        cout << output[i] << " ";
    }









    
    // for(int i=0; i<n; i++){
    //     product = product *= nums[i];
    // }

    // cout << "product is " << product;

    // for(int i=0; i<n; i++){
    //       output.push_back(product/nums[i]);
    // }

    // for(int i=0; i<n; i++){
    //     cout << output[i] << " " << "\n";
    // }






}
