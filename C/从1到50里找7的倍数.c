/*��1��50��7�ı���*/


#include "stdio.h"

#define NUM 50

int main (){
    int num[NUM];
    int sum,i;

    for(i=1;i<50;i++){
    if(i%7==0)
        sum +=num[i];
    else
        continue;
    }
    return 0;
}
