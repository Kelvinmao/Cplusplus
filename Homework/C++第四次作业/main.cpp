#include<iostream>
#include"header.h"
using namespace std;
int main(void){
	matrix matA;
	matrix matB;
	cout<<"Input The value Of matrix A with common method"<<endl;
	matA.set_value();
	cout<<"Input The value Of matrix B with common method"<<endl; 
	matB.set_value();
	matA+matB;
	cout<<"The result is(with common method)"<<endl;
	matA.show_mat();
	cout<<"Input the value of matrix A with overload >>"<<endl;
	matA.operator >>(cin);
	cout<<"Input the value of matrix B with overload >>"<<endl;
	matB.operator >>(cin); 
	cout<<"The result is(with overload <<)"<<endl;
	matA+matB;
	matA.operator <<(cout);
}
