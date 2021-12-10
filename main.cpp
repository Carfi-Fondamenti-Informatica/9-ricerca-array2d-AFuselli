#include <iostream>
using namespace std;
#include "lib.h"

int main() {
    char a[10][20];
    for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
           a[i][j]=0;
       }
    }
    for(int i=0;i<10;i++){
        cin >> a[i];
    }
    char b[20];
    int p;
    for(int i=0;i<20;i++){
        b[i]=0;
    }
    cin >> b;
    if(funzione (a,b,p)){
        cout << p;
    }else{
        cout << "non presente";
    }
    return 0;
}
