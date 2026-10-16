#include <iostream>
#include <string>
using namespace std;


    void peli(string one){
        int len = one.length();
        bool isbool = 1;
        for(int i=0, j=len-1;i<j; i++, j--){
            if(one[i]==one[j]) continue;
            if(one[i]!=one[j]){
                isbool = 0;
                break;
            }
        }

        if(isbool){
            cout << "Pelindrom";
        }else{
            cout << "Not Pelinfrom";
        }

    }
int main(){
    peli("appa");
    return 0;
}