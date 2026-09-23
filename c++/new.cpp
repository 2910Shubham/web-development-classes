#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int sumArr(vector<int> arr){
    int sum =0;

    for(int i=0; i<arr.size(); i++){
        sum += arr[i];
    }

    return sum;



}


int main(){
        int n =7;
        int great = INT_MIN;
        int arr[n]= {3,-4,5,4,7,-8};
       

        for(int st=0; st<n; st++){
            int sum = 0;
            for(int end=st; end<n; end++){
                sum += arr[end];
                great = max(great, sum);
               // sum.push_back(sumArr(temp));
                cout << " ";
            }


            cout << endl;
        }
        
        
        cout << "Greatest sum of the subarray of arr is: " << great;


   };

