#include<stdio.h>
#include<math.h>
int main(){
    double x1,x2,y1,y2;
    double s;
    while(~scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2)){
    //�������룬һ��4��ʵ��
        s = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        //���������ľ���
        printf("%.2lf\n",s);
        //���������λС��
    }
    return;
}
