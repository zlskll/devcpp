#include<stdio.h>
int main(){
	int n= 0;
	int jie= 1;
	int i= 0;
	int sum= 0;
	for(n= 1;n<= 3;n++){
	   //��n�Ľ׳ˣ���jie���³�n�Ľ׳ˣ���
	   jie= 1;//�׳˶��Ǵ�1��ʼ�˵ģ����ÿ��ѭ�����󲻳�ʼ���ͻ�ƫ�� 
	   for(i= 1;i<= n;i++){
		jie= jie*i;
        }	
		sum=sum+jie;	
	}
    

	printf("%d\n",sum);

    
    
    return 0;
}
/*int main(){
	int n= 0;
	int sum= 0;
	int jie= 1; 
    for(n= 1;n<= 3;n++){
	    jie= jie*n;
	    sum= sum+jie;
	}
	printf("%d",sum);
	
	
	return 0;
}*/

