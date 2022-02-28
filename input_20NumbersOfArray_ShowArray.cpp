#include<iostream>

using namespace std;

int main(){
	int arraye[20],i;
	
	cout<<"Enter 20 Number : \n";
	for(i = 0;i < 20;i++){	
		cin>>arraye[i];
	}
	
	cout<<"\nYou entered : \n";
	
	for (i = 0;i < 20;i++){	
		cout<<arraye[i]<<endl;
	}
}
