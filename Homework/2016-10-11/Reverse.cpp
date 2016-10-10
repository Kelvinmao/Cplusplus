#include<iostream>
using namespace std;
class Solution{
public:
	 void reverseStr(string & str){
	 	int low=0,high=str.size()-1;
		while(low<high)
			swap(str[low++],str[high--]);
	 }
}; 
int main(void){
	string str;
	Solution sol;
	cout<<"Input the string to be reversed:";
	cin>>str;
	sol.reverseStr(str);
	cout<<"The reverse string is:"<<str<<endl;
	return 0;
} 

