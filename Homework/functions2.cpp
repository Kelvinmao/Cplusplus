//Defination of methods
#include<iostream>
#include<cmath>
#include"header.h"
using namespace std;

//Attention!
// if you dont define the destructor of derive class, there will be some error happen in the process of link!
//Defination of the constructor of base class,and define the destructor of derive class.
Shape::Shape(){}
Shape::~Shape(){}
Circle::~Circle(){}
Rectangle::~Rectangle(){}
Triangle::~Triangle(){}

Circle::Circle(int r){
	radius=r;
}

void Circle::printArea(){
	cout<<"The area of this circle is:";
	cout<<(3.14*pow(radius,2))<<endl;
}

Rectangle::Rectangle(int len,int wid){
	length=len;
	width=wid;
}
void Rectangle::printArea(){
	cout<<"The area of this Rectangle is:";
	cout<<length*width<<endl;
}

Triangle::Triangle(int e_1,int e_2,int e_3){
	edge_1=e_1;edge_2=e_2;edge_3=e_3;
}

void Triangle::printArea(){
	cout<<"The area of this Triangle is:";
	int s=(edge_1+edge_2+edge_3)/2;
	int area=sqrt(s*(s-edge_1)*(s-edge_2)*(s-edge_3));
	cout<<area<<endl;
}

