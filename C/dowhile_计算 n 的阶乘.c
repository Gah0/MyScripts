/*
��̣����� n �Ľ׳ˣ�n����,n ��ȡֵ�� 1~10 ֮�䡣�ֱ�ʹ�� while��do...while �� for ��� ʵ�֡�
1*2*3*4
*/
#include <stdio.h>

int main(){
    long int i=1,num,result=1;
    printf("press a number(<10):");
    scanf("%d",&num);


    do{
        result*=i;
        i++;
    }
    while(i<=num);

    printf("%d�Ľ׳���%d",num,result);
    return 0;
}

