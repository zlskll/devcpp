#include<stdio.h>
#include<cmath>
 int main(){//������sqrt������������ �ǵü�ͷ�ļ� 
     int a,b,c;
     printf("���������������ߣ�\n"); 
     scanf("%d %d %d",&a,&b,&c);
     int s = (a + b + c) / 2;
     int mj = sqrt(s * (s - a) * (s - b) * (s - c));
     printf("�������ε����Ϊ��%d\n",mj);
 }
