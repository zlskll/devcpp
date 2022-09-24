#include<stdio.h>
/*只要能打出1-100所有三的倍数就行，不一定要取模 
int main(){
	for(i = 3; i < 100;i += 3){
		printf("%d",i);
	}
	return 0;
}*/
int main(){
	int i = 0;
	for(i = 1;i < 100;i++){
		if(i % 3 == 0){//这里是双等号 
			printf("%d ",i);
		}
		} 
	return 0;
} 
