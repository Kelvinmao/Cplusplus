#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector> 
using namespace std;
class Solution{
public: 
	int sort(vector<int> & nums){
		int swapped=0;
		do{
			swapped=0;
			for(int i=0;i<nums.size()-1;i++){
				if(nums[i+1]<nums[i]){
					swap(nums[i],nums[i+1]);
					swapped=1;
				}
			}
		}
		while(swapped);
		for(int i=0;i<nums.size();i++)
			cout<<nums[i]<<" ";
		cout<<endl;
	}
	
	float sort(vector<float> & nums) {
		int swapped=0;
		do{
			swapped=0;
			for(int i=0;i<nums.size()-1;i++){
				if(nums[i+1]<nums[i]){
					swap(nums[i],nums[i+1]);
					swapped=1;
				}
			}
		}
		while(swapped);
		for(int i=0;i<nums.size();i++)
			cout<<nums[i]<<" ";
		cout<<endl;
	}
	
	double sort(vector<double> & nums) {
		int swapped=0;
		do{
			swapped=0;
			for(int i=0;i<nums.size()-1;i++){
				if(nums[i+1]<nums[i]){
					swap(nums[i],nums[i+1]);
					swapped=1;
				}
			}
		}
		while(swapped);
		for(int i=0;i<nums.size();i++)
			cout<<nums[i]<<" ";
		cout<<endl;
	}
};		
int main(void){
	Solution sol;
	cout<<"��������������鳤��:";
	cout<<endl;
	int arr_size=0; 
	cin>>arr_size;
	vector<int> numsInt(arr_size,0);
	vector<float> numsFloat(arr_size,0);
	vector<double> numsDouble(arr_size,0); 
	srand(time(0));
	cout<<"���ɴ�������������Ϊ:";
	for(int i=0;i<numsInt.size();i++){
		numsInt[i]=rand()%100;
		cout<<numsInt[i]<<" ";	
	} 
	cout<<endl<<"�����Ϊ:";
	sol.sort(numsInt);
	cout<<endl;
	
	cout<<"���ɴ����򵥾��ȸ���������Ϊ:";
	for(int i=0;i<numsFloat.size();i++){
		numsFloat[i]=rand()%100*3.141592;
		cout<<numsFloat[i]<<" ";	
	} 
	cout<<endl<<"�����Ϊ:";
	sol.sort(numsFloat);
	cout<<endl;
	
	srand(time(0)); 
	cout<<"���ɴ�����˫���ȸ���������Ϊ:";
	for(int i=0;i<numsDouble.size();i++){
		numsDouble[i]=rand()%100*3.141592;
		cout<<numsDouble[i]<<" ";	
	} 
	cout<<endl<<"�����Ϊ:";
	sol.sort(numsDouble);
	cout<<endl;
}

