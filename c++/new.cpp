#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  vector<int> nums = {1,3,1,1,4,1,1,5,1,1,6,2,2};
   int fq = 1, size=nums.size(), n=nums[0];

        for(int i=0; i<size; i++){
            if(fq==0){
                n = nums[i];
            }
            if(nums[i]==n){
                fq++;
            }else{
                fq--;
            }
            if(fq > size/2){
            cout << n ;
            return n;
        }

            cout << i << ' '<< "fq :" << ' '<< fq << n << '\n';

        }
      
        cout << n;
         return n;
    
  
  

  

}