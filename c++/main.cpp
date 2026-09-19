#include <iostream>
using namespace std;

int main(){
    int a = 5;

    //upper

     for(int i=1; i<=a; i++){
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        for(int j=a-i; j>=1; j--){
            cout << " " << " " ;
        }
         for(int j=1;j<=i;j++){
            cout << "*";
        }
    
        cout << "\n";
     }


     //lower 

     for(int i=1; i<=a; i++){
        for(int j=a-i;j>=1;j--){
            cout << "*";
        }
        for(int j=1; j<=i; j++){
            cout << " " << " ";
        }
          for(int j=a-i;j>=1;j--){
            cout << "*";
        }
    
        cout << "\n";
     }



}