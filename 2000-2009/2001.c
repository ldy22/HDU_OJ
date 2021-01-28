#include<stdio.h>
#include<math.h>
int main(){
    double x1,x2,y1,y2;
    double s;
    while(~scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2)){
    //连续输入，一组4个实数
        s = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        //计算两点间的距离
        printf("%.2lf\n",s);
        //结果保留两位小数
    }
    return;
}
