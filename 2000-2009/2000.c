#include<stdio.h>
int main(){
    char a,b,c;
    int t;
    while(scanf("%c%c%c",&a,&b,&c)!=EOF){
    //�������룬һ�������ַ�
            if(a>b){
            //��������t��ASCII���С�����������
                t=a;
                a=b;
                b=t;
            }
            if(a>c){
                t=a;
                a=c;
                c=t;
            }
            if(b>c){
                t=b;
                b=c;
                c=t;
            }
            printf("%c %c %c\n",a,b,c);
            getchar();
            //����س���
        }
        return 0;
}
