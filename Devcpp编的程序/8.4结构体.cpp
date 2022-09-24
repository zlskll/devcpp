//指针以及与结构体结合 
#include<stdio.h>
struct Stu{
	char name[20];//需要定义类型 
	int age;
	char id[20];
};
int main(){
	struct Stu s={"张三",18,"25" };//“张三”算是字符串，要用“”引上（字符用单引号）//二位数字是字符串 
	printf("%s %d %s\n",s.name,s.age,s.id);//要把Stu也打上,点逻辑符 
	struct Stu *ps=&s;//指针的定义取决于对象的类型 
	printf("%s %d %s\n",(*ps).name,(*ps).age,(*ps).id);
	struct Stu *pa=&s;
	printf("%s %d %s\n",ps->name,ps->age,ps->id);//？？？？？？？？？？？？？
	//为啥这里的指针不加星号？#解引用操作
	 
	
	
	return 0;
} 
