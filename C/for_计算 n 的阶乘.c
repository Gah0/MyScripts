/*
��̣����� n �Ľ׳ˣ�n����,n ��ȡֵ�� 1~10 ֮�䡣�ֱ�ʹ�� while��do...while �� for ��� ʵ�֡�
1*2*3*4
*/
#include <stdio.h>

int main(){
    long int num,i=1,result=1;
    printf("press a number(<10):");
    scanf("%d",&num);


    for(i=1;i<=num;i++){
        result*=i;
    }
    printf("%d�Ľ׳���%d",num,result);
    return 0;
}

