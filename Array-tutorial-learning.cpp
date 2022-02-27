#include<iostream>
using namespace std;	
	
int main(void){
	
	//Tutorial Array 
	system("Color F");
	cout<<"\t\t    |=========================================|"<< endl;
	cout<<"\t\t    |=========================================|"<< endl;
	cout<<"\t\t    	||   Sum of all elements of an Array   ||"<< endl;
	cout<<"\t\t    |=========================================|"<< endl;
	cout<<"\t\t    |=========================================|\n\n"<< endl;

	//How to find sum of all elements of an Array
	//Taking integer arr[5] to store 5 elements in one var.
	
	int arr[5]={10,20,30,40,50};
	
	//Taking i for Loop 
	//Taking sum for Adding all elements of an array
	int i, sum = 0;
	
	//Taking an loop for quick process
	for(i = 0; i < 5;i++)
	{
		//Formula
		sum = sum + arr[i];
	}
	//Printing it in C++ and the answer is 150
	cout<<sum;
}
