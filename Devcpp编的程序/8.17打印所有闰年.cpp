#include<stdio.h>
#include<math.h>//也可以是#include<cmath> 
//闰年：1.若非整百年，能整除以4即可
//      2.若为整百年，应能整除400才算世纪闰年 
//1.打印1000-2000所有闰年 
/*int main(){
	int i = 0; 
	for(i = 1000; i <=2000; i++){
		if(i % 4 == 0 && i % 100 != 0)
		   printf("%d ",i);
	    if(i % 400 == 0)
	       printf("%d ",i);
	} 
	return 0;
}*/
//2.打印所有闰年优化 
/*int main(){

	int i = 0; 
	int count = 0;
	for(i = 1000; i <=2000; i++){
		if((i % 4 == 0 && i % 100 != 0) ||(i % 400 == 0))
		   printf("%d ",i);
		   count++;//数了数有几个闰年 
	} 
	printf("\n%d",count);
	return 0;
}*/
//3.打印100-200之间的素数(素数：只能整除1和自身以外的数)
/*int main(){
	int i = 0;
	int x = 0;
	for(i = 100; i <= 200; i++){
		for(x = 2;x< = i;x++){
			if(i % x == 0)
				break;//找出第一个非1的因数x就停止 
		}
		if(i == x)//如果第一个非1的因数x就是i本身 那它就是素数， 
		   printf("%d",i); //如果不是就进下一个循环 
	}
	return 0;
}*/
//4.利用flag反向判断素数条件 
/*int main(){
	
    int count = 0;
	int i = 0;
	int x = 0;
	//定义一个判断变量 
	for(i = 100; i <= 200; i++){
		int flag = 1;//flag要放循环内才能随循环更新 
		for(x = 2;x < i;x++){//用2到i-1数去试除 
			if(i % x == 0){ 
			    flag = 0;
				break;//找出第一个非1的因数x就停止 
		    } //除本身找不到非1的因数  ->进不了if ->flag为1 ->为素数，打印出来 
	    }     //除本身能找到非1的因数  ->能进if   ->flag为0 ->不是素数，进下一个循环，检索下一个i 
	    if(flag == 1){ 
	    count++; 
		printf("%d ",i); 
        }

 }   return 0; 
}*/
//5.利用开平方优化打印素数(找的效率更高了)  
int main(){//任何一个数 m = a * b(a,b中肯定有一个小于根号m的数)
    int count = 0;//所以只要在2到根号m之间找一个数a，能整除a则已， 
	int i = 0;    //不能整除a的话后面肯定也找不到 
	int x = 0;
	for(i = 101; i < 200; i += 2){//优化①:开局就跳过首尾(首尾都不是素数)并且跳过偶数 
		int flag = 1;//flag要放循环内才能随循环更新 
		for(x = 2;x < sqrt(i);x++){//优化②：用2到根号i的数去试除，提高了效率 
			if(i % x == 0){ 
			    flag = 0;
				break;//找出第一个非1的因数x就停止 
		    } //除本身找不到非1的因数  ->进不了if ->flag为1 ->为素数，打印出来 
	    }     //除本身能找到非1的因数  ->能进if   ->flag为0 ->不是素数，进下一个循环，检索下一个i 
	    if(flag == 1){ 
	    count++; 
		printf("%d ",i); 
        }
 }      printf("\n%d",count);
        return 0; 
}
	
	
	
	














