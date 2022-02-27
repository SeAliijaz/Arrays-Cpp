#include<iostream>
using namespace std;

int main(void)
{
	
	system("Color F");
	cout<<"\t\t    |=========================================|"<< endl;
	cout<<"\t\t    |=========================================|"<< endl;
	cout<<"\t\t          || >>  Book Example 7.1 << ||"<< endl;
	cout<<"\t\t    |=========================================|"<< endl;
	cout<<"\t\t    |=========================================|\n\n"<< endl;
			
	//////////////////****************************/////////////////////////
	//Input Value and store it into and display without using loops//
	//////////////////****************************/////////////////////////
	
	//Variable Array taken 
	//Size is 5
	//it will store 5 and display what we will write
	int arr[5];
	
	//Ask to enter Five integers
	cout<<"Enter Five Integers > \n";
	
	//Writting and storing for displaying
	cin>>arr[0];
	cin>>arr[1];
	cin>>arr[2];
	cin>>arr[3];
	cin>>arr[4];
	
	//Array display 
	cout<<"The New Values are > \n";
	
	//The written arrays will be displayed
	cout<<arr[0]<<endl;
	cout<<arr[1]<<endl;
	cout<<arr[2]<<endl;
	cout<<arr[3]<<endl;
	cout<<arr[4]<<endl;

	//////////////////****************************/////////////////////////
}
