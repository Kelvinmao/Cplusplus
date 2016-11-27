#include<iostream>
#include"header.h"
int main(void){
	Circle cir(2);
	Rectangle rec(3,2);
	Triangle tri(3,4,5);	
	cir.printArea();
	rec.printArea();
	tri.printArea();
}
