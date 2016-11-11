//Defination of member functions
#include<iostream>
#include"header.h"
using namespace std;

matrix::matrix(){
	for(int i=0;i<Row;i++)
		for(int j=0;j<Col;j++)
			mat[i][j]=0;
}

void matrix::show_mat() const{
	for(int i=0;i<Row;i++){
		for(int j=0;j<Col;j++)
			printf("%2d ",this->mat[i][j]);
		printf("\n");	
	}
}

void matrix::set_value(){
	for(int i=0;i<Row;i++)
		for(int j=0;j<Col;j++)
			cin>>this->mat[i][j];
}
void matrix::operator+(matrix & mat){
	for(int i=0;i<Row;i++)
		for(int j=0;j<Col;j++)
			this->mat[i][j]+=mat.mat[i][j];
}

istream & matrix::operator>>(istream & os){
	for(int i=0;i<Row;i++)
		for(int j=0;j<Col;j++)
			os>>this->mat[i][j];
	return os;
}

ostream & matrix::operator<<(ostream & os) const{
	for(int i=0;i<Row;i++){
		for(int j=0;j<Col;j++)
			os<<this->mat[i][j]<<" ";
		cout<<endl;	
	}
	return os;
}

//istream & matrix::operator >>(matrix & mat){
//	return mat>>cin;
//}
//
//ostream & matrix::operator <<(matrix & mat) const{
//	return mat<<cout;
//}
matrix::~matrix(){
	
}
