#include<iostream>
using namespace std;
int max(int a,int b,int c){
	if(b>a)
		a=b;
	if(c>a)
		a=c;
	return a;
}
float max(float a,float b,float c){
	if(b>a)
		a=b;
	if(c>a)
		a=c;
	return a;
}
int main(void){
	int a=0,b=0,c=0,imax=0;
	cin>>a>>b>>c;
	imax=max(a,b,c);
	cout<<"The max number is:"<<imax<<endl;
	
	float d=0.0,e=0.0,f=0.0,fmax=0.0;
	cin>>d>>e>>f;
	fmax=max(d,e,f);
	cout<<"The max number is:"<<fmax<<endl;
}

