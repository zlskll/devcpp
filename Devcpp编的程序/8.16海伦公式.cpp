#include<stdio.h>
#include<cmath>
 int main(){//根号用sqrt（被开方数） 记得加头文件 
     int a,b,c;
     printf("请输入三角形三边：\n"); 
     scanf("%d %d %d",&a,&b,&c);
     int s = (a + b + c) / 2;
     int mj = sqrt(s * (s - a) * (s - b) * (s - c));
     printf("该三角形的面积为：%d\n",mj);
 }
