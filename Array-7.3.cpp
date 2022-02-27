#include<iostream>
using namespace std;

int main(void)
{
	//size of an array var.
	int arr[5];
	
	//var. i for loop
	int i;
	
	//var. int sum
	int sum = 0;
	
	//Var. Float avg
	float avg = 0.0;
	
	//Loop
	for(i = 0; i < 5; i++)
	{
		cout<<"Enter An Integer : ";
		cin>>arr[i];
	
	//Sum Formula
	sum = sum + arr[i];	
	}
	//Average Formula
	avg = sum/5.0;
	
	//it will tell sum & Average 
	cout<<"sum is : "<<sum<<endl;
	cout<<"Average is : "<<avg<<endl;
}
