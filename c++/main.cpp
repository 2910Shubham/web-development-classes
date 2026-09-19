#include <iostream>
using namespace std;

int main() {
    int a = 4;

    // Top Part
    for(int i = 1; i <= a; i++) {
        // Leading spaces
        for(int j = a - i; j >= 1; j--) {
            cout << " ";
        }

        // Left side numbers
        for(int j = 1; j <= i; j++) {
            if(j>1){
                cout << " ";
            }else{

                cout << "*";
            }
        }

        // Right side numbers
        for(int j = i - 1; j >= 1; j--) {
           if(j>1){
                cout << " ";
            }else{

                cout << "*";
            }
        }

        cout << "\n";
    }

    // Bottom Part
    for(int i = a - 1; i >= 1; i--) {
        // Leading spaces
        for(int j = a - i; j >= 1; j--) {
            cout << " ";
        }

        // Left side numbers
        for(int j = 1; j <= i; j++) {
            if(j>1){
                cout << " ";
            }else{

                cout << "*";
            }
        }

        // Right side numbers
        for(int j = i - 1; j >= 1; j--) {
          if(j>1){
                cout << " ";
            }else{

                cout << "*";
            }
        }

        cout << "\n";
    }

    return 0;
}
