/*36��ש��36�˰᣻�а�4��Ů��3������С��̧һ��ש��Ҫ��һ��ȫ���꣬���С�Ů��С����������ˣ�
 *
 *
 *
*/

#include<stdio.h>
int main()
{
int m,f,child; //m �� w Ů c С��
for(m=0;m<=9;m++)
   for(f=0;f<=12;f++)
        for(child=0;child<=36;child+=2)
            if((m+f+child==36)&&(4*m+3*f+child/2==36))
printf("��%d Ů%d С��%d \n",m,f,child);
return 0;
}
