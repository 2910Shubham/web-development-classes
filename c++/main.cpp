#include <iostream>
using namespace std;

int fact(int n){
    int fact=1;

    for(int i=1; i<=n; i++){
        fact= fact*i;
    }
    return fact;
}

int nCr(int n, int r){
    
   int ncr = fact(n)/(fact(r)*fact(n-r));

  return ncr;
}


int main() {
   // cout << nCr(8,2);

   cout << (20>>1);
   cout << (40>>2);
   cout << (35>>3);
   cout << (100>>2);
   



    return 0;

}
