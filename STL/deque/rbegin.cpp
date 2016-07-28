#include<iostream>
#include<deque>
using namespace std;
int main(void){
	class Test_rbegin{
		public:
			deque<int> :: iterator pos;
			deque<int> :: reverse_iterator rpos;/*because deque::rbegin return a reverse_iterator*/
		public:
			void traverse(deque<int> &que){
				for(pos=que.begin();pos!=que.end();pos++)
					cout<<*pos<<" ";
				cout<<endl;
			}
			void reverse(deque<int> &que){
				for(rpos=que.rbegin();rpos!=que.rend();rpos++)
					cout<<*rpos<<" ";
				cout<<endl;
			}
	};
	
	class Test_rbegin test;
	deque<int> que(5,0);
	for(int i=0;i<5;i++)
		que[i]=i;
	cout<<"After Initial the que"<<endl;
	test.traverse(que);
	cout<<"Reverse the que by deque::rbegin() iterator"<<endl;
	test.reverse(que);
} 
