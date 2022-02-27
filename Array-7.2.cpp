#include<iostream>
using namespace std;

int main(void)
{
	//Taking variale array with size
	int arr[5];
	//taking i for loop
	int i;
	
	//For Loop start for Entering Five times integers
	for(i = 0; i < 5; i++)
	{
	//ASk to enter an integer with the help of loop it will display the same message	
	cout<<"Enter an Integer : ";
	cin>>arr[i];
	}
	
	//It will tell new values that are written in arr[i]
	cout<<"The Value in Arrays Are given Below\n";
	
	//For loop to Display the written elements
	for(i = 0; i < 5; i++)
	{
		cout<<arr[i]<<endl;
	}
}
