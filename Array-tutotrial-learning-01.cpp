#include<iostream>
using namespace std;

int main()
{
	//Changing System Color
	system("Color F");
	cout<<"\t\t    |=========================================|"<< endl;
	cout<<"\t\t    |=========================================|"<< endl;
	cout<<"\t\t        || >>  Largest Element In Array << ||"<< endl;
	cout<<"\t\t    |=========================================|"<< endl;
	cout<<"\t\t    |=========================================|\n\n"<< endl;
		
	//Taking seven variables to find which is the largest number
	int arr[7] = {12, 22, 33, 90, 100, 600, 50};
	//Taking i for loop
	//Taking large for suppose an integer as a largest number
	int i, large;
	
	//Supposed first Elemnent index as a largest
	large = arr[0];
	
	//For loop 
	for(i = 0; i < 7;i++)
	{
		//applying condition if supposed array is largest than 
		if(arr[i] > large)
		{
			//Stored the value of an large number
			large = arr[i];	
		}
	}
	//Print of an large number
	cout<<large;
}
