#include <iostream>
#include <vector>
using namespace std;

int main(){
   vector <int> vec;
   vector <int> vec1 (3,0);
   vector <char> vec2 = {'a', 'b', 'c'};

   for(char i : vec2){
    cout << i;
   }
}
