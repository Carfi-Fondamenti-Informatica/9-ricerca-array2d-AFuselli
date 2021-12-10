//
// Created by Andrea Fuselli on 10/12/21.
//

#include "lib.h"

bool funzione (char a[10][20], char b[20], int &p){
    int k=0;
    for(int i=0;i<10;i++){
        k=0;
        for(int j=0;j<20;j++){
            if(a[i][j]==b[j]){
                k++;
                if(k==20){
                    p=i;
                    return true;
                }
            }
        }
    }
    return false;
}

