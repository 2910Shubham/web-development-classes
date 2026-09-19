#include <iostream>
using namespace std;


int main() {
    int a =4, count=0;
    for(int i=0; i<=a-1; i++){
        for(int k=1; k<=a-i; k++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout <<"*" << " ";
        }
        cout << "\n";
    }
 return 0;
}
