#include<stdio.h>
/*ֻҪ�ܴ��1-100�������ı������У���һ��Ҫȡģ 
int main(){
	for(i = 3; i < 100;i += 3){
		printf("%d",i);
	}
	return 0;
}*/
int main(){
	int i = 0;
	for(i = 1;i < 100;i++){
		if(i % 3 == 0){//������˫�Ⱥ� 
			printf("%d ",i);
		}
		} 
	return 0;
} 
