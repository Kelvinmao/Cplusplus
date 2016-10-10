#include<iostream>
#include<vector>
using namespace std;
int main(void){
	class Vec_learn{
		public:
			 
			 vector<int>::iterator pos;
			 vector<int>::reverse_iterator rpos;
			 
		public:
			
			void reverse_vec(vector<int> & vec){
				for(rpos=vec.rbegin();rpos!=vec.rend();rpos++)
					cout<<*rpos<<" ";
				cout<<endl;
			}
			void traverse_vec(vector<int> &vec){
				for(pos=vec.begin();pos!=vec.end();pos++)
					cout<<*pos<<" ";
				cout<<endl; 
			}
			void deleteElemAtPos(vector<int> &vec,int position){
				vec.erase(vec.begin()+position);
			}

			
};
	
	class Vec_learn test;
	vector<int> Vec(5,0);
	for(int i=0;i<5;i++)
		Vec[i]=i;
	cout<<"Before reverse the vector"<<endl;
	test.traverse_vec(Vec);
	cout<<"After reverse the vector"<<endl;
	test.reverse_vec(Vec);
	cout<<"After delete the second element"<<endl;
	test.deleteElemAtPos(Vec,2);
	test.traverse_vec(Vec);
} 
