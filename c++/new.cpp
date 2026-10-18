#include <iostream>
#include <string>
#include <vector>
using namespace std;


  int maxProfit(vector<int>& prices) {
        int bb = prices[0];
        int bs = 0;

        for(int i=1; i<prices.size(); i++){
           

            if(prices[i]-bb < 0){
                bb= prices[i];
            }
             cout << "when bb is " << bb << "bs is "<<prices[i] - bb <<" before if" << '\n';                  
         
            if(prices[i] - bb>bs){
                bs = prices[i] - bb;
            }
                cout << "when bb is " << bb << "bs is "<< bs <<" after if" << '\n';
        }

        return bs;
        
    }

int main(){
    vector<int> test = {7,1,5,3,6,4};

   cout << maxProfit(test);
    
    return 0;
}