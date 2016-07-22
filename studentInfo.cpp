#include<stdio.h>
int main(void){
	class Student{
		public:
			char *name;
			int age;
			float score;
			
		public:
			int printInfo(void){
				printf("%s age is:%d,score is %f",name,age,score);
			}
	};
	
	class Student stu1;
	stu1.name="kelvin";
	stu1.age=20;
	stu1.score=100.0;
	stu1.printInfo();
	return 1;
} 
