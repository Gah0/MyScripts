#include "stdio.h"
#include "math.h"

int main (){
    long long int i,j,k,l,n,m;
    printf("�����������ĸ���n��");
    scanf("%d",&n);
    printf("����%d��������\n",n);
    for(j=0;j<=k;j++)
    {
            scanf("%d",&m);
            n=(long long int)sqrt((long double)m);//15
                for(i=2;i<=n;i++)
                {
                    if(m%i==0)
                        break;
                }
                    if(i>n){
                    printf("%d��һ������!\n",m);
                }else{
                    printf("%d����һ������!\n",m);
                }
    }
    return 0;
}
