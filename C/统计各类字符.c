/*��̣�����һ���ַ����ֱ�ͳ�������˶��ٸ���ĸ�����֡��ո�������ַ���*/

#include "stdio.h"

int main(){
    int other=0,num=0,blank=0,Eng=0;
    printf("������ϲ����һ�����ӣ�ͳ�Ƹ����ַ���\n");
    while(getchar()!='\n')
    {
        if (getchar > 'a' && getchar <'z'){
            ++Eng;
        }
        else if (getchar > '0' && getchar < '9'){
            num -= -1;
        }
        else if (getchar==' '){
            blank -= -1;
        }
        else{
            other -= -1;
        }
    }

    printf("���ܹ�������%d����ĸ,%d������,%d���ո�,%d�������ַ���\n",Eng,num,blank,other);
    return 0;
}
