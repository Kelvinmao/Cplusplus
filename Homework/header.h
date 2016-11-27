//header file
#ifndef SHAPE_H_
#define SHAPE_H_
class Shape{
	public:
		Shape();
		virtual ~Shape();
		virtual void printArea()=0;
};

class Circle:public Shape{
	int radius;
	public:
		Circle();
		explicit Circle(int r);
		~Circle();
};

class Rectangle:public Shape{
	int length;
	int width;
	public:
		Rectangle();
		Rectangle(int len,int wid);
		~Rectangle();
};

class Triangle:public Shape{
	int edge_1;
	int edge_2;
	int edge_3;
	public:
		Triangle();
		Triangle(int e_1,int e_2,int e_3);
		~Triangle();
};
#endif
