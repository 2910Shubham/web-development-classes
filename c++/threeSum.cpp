#include <iostream>
#include <vector>

using namespace std;

// vector<vector<int>>
int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    //Output: [[-1,-1,2],[-1,0,1]]
    vector<vector<int>> output;

    int n = nums.size();

    int i = 0;
    int j = i+1;
    int k = j+1;

    while(i<n-2){
        // cout << "when i = " << i << '\n';
        // cout<< nums[i] << "\n";
        // cout<< nums[j] << "\n";
        // cout<< nums[k] << "\n";
        int sum = nums[i] + nums[j] + nums [k];
        if(sum==0){
            vector<int> triplet;
            triplet.push_back(nums[i]);
            triplet.push_back(nums[j]);
            triplet.push_back(nums[k]);


            output.push_back(triplet);

        }

        i++;
        j++;
        k++;
    }
return 0;

    

}