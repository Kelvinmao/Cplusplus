//header
#ifndef HEADER_H_
#define HEADER_H_
using namespace std;
class matrix{
	static const int Row=2;
	static const int Col=3;
	int mat[Row][Col];
	public:
		matrix();
		~matrix();
		void show_mat() const;
		void set_value();
		void operator+(matrix & mat);
		istream & operator >>(istream & os);
		ostream & operator <<(ostream & os) const;
//		istream & operator >>(matrix & mat);
//		ostream & operator <<(matrix & mat) const;
};
#endif
