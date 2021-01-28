#include<stdio.h>
int main(){
    char a,b,c;
    int t;
    while(scanf("%c%c%c",&a,&b,&c)!=EOF){
    //连续输入，一组三个字符
            if(a>b){
            //借助整型t按ASCII码从小到大进行排序
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
            //清除回车；
        }
        return 0;
}
