#include<iostream>
#include"array_max.h"
using namespace std;
void Array_Max::set_value(){
	cout<<"Input the number in the array:"<<endl;
	for(int i=0;i<10;i++)
		cin>>arr[i];
} 

void Array_Max::show_value(){
	cout<<"Number in the array:"<<endl;
	for(int i=0;i<10;i++)
		cout<<arr[i]<<" ";
}

void Array_Max::max_value(){
	for(int i=0;i<10;i++){
		if(arr[i]>max)
			max=arr[i];
	}
	cout<<"The Max number in the array is:"<<max<<endl;
}
