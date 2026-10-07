#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {-1,1,0,-3,3};
    int n = nums.size();

   vector<int> output(n) ;
   vector<int> pre(n)   ; // 1, 



    pre[0] = 1;
    output[n-1] = 1;


     
    for(int i=1; i<n; i++){
        pre[i] = pre[i-1] * nums[i-1];
    }
    
    for(int i=n-2; i>=0; i--){
        output[i] = output[i+1] * nums[i+1];
    }
    

     for(int i=0; i<n; i++){
        output[i] *= pre[i];
     }
     for(int i=0; i<n; i++){
       cout  <<output[i]<< " ";
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
