#include "stdio.h"
#include "ctype.h"

int main()
{
    char month;
    int day;
top:
    printf("Input month of 2005:");
    scanf("%d",&month);

    if (month<1||month>12||isalpha(month))
    {
    printf("��������ȷ���·�");
    goto top;
    }

    else if (month==2)
    {
        printf("2005 �� 2 ���� 28 ��\n");
        return 0;
    }
    else if (month==4||month==6||month==9||month==11)
    {
        day=1;
    }
    else
    {
        day=2;
    }

    switch(day){
    case 1: printf("2005��%d����30��\n",month);break;
    case 2: printf("2005��%d����31��\n",month);break;
    }
    return 0;
}
