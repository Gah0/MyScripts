#include "stdio.h"
#include "conio.h"

int main (){
    int i,n,even,odd;
    char c;
    char num [n+1];//����ɱ䳤����
    char p = &num[n+1];

    printf("������������������֣���Y�������벢�����\n");
    scanf("%d",&num);

    for(i=0; i<num; i++){
        if(p%2==0){
            even += num[i];
            printf("�������ֵ%d�ѷ������飬��Y��������/ż����\n",even);
        }
        else{
            odd += num[i];
            printf("�������ֵ%d�ѷ������飬��Y��������/ż����\n",odd);
        }
    if(getch =='^Z')
        break;
    }

    printf("ż����%d,������%d,ż����-�����͵Ľ��Ϊ%d\n",even,odd,even-odd);
    return 0;
}
