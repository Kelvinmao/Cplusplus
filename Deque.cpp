#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main(void){
	int arr[]={5,8,9,4,6,2};
	
	/*Initialize the queue*/ 
	cout<<"Initialize the queue"<<endl;
	deque<int> que(arr,arr+6);
	deque<int> ::iterator pos; 
	
	/*Traverse the queue*/
	cout<<"Traverse the queue"<<endl;
	for(pos=que.begin();pos!=que.end();pos++)
		cout<<*pos<<" ";
	cout<<endl;
	
	/*push_back*/
	cout<<"push_back"<<endl;
	que.push_back(10);
	for(pos=que.begin();pos!=que.end();pos++)
		cout<<*pos<<" ";
	cout<<endl;
	
	/*push_front*/
	cout<<"push_front 5"<<endl;
	que.push_front(5);
	for(pos=que.begin();pos!=que.end();pos++)
		cout<<*pos<<" ";
	cout<<endl;
	
	/*pop_front*/
	cout<<"pop_front"<<endl;
	que.pop_front();
	for(pos=que.begin();pos!=que.end();pos++)
		cout<<*pos<<" ";
	cout<<endl;
	
	/*pop_back*/
	cout<<"pop_back"<<endl;
	que.pop_back();
	for(pos=que.begin();pos!=que.end();pos++)
		cout<<*pos<<" ";
	cout<<endl;
	
	/*search number 9*/
	cout<<"search number 9"<<endl;
	deque<int>:: iterator search=find(que.begin(),que.end(),9);
	if(search!=que.end())
		cout<<"Find"<<" "<<*search<<" "<<"SUCCESS"<<endl;
	else
		cout<<"FAILED";
} 
