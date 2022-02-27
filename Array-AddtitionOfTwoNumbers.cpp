#include<iostream>
using namespace std;

int main(void)
{
	//Taken Variales
	//C for Loop
	//N For Numbers and Elements
 	int first[20], second[20], sum[20], c, n;
	
	//Ask to enter Elements of first Array 
  	cout<<"Enter the number of elements in the array"<<endl;
  	cin>> n;
	
	//Enter the **n** Selected Array Elements
  	cout<<"Enter elements of first array"<< endl;
	
	//For Loop for Elements selection
  	for(c = 0; c < n; c++)
	{  
	cin>> first[c];
	}
  	
  	//Ask to enter Elements of second Array
	cout<<"Enter elements of second array"<<endl;
	
	//for loop is used
  	for (c = 0; c < n; c++)
    {
	cin>> second[c];
	}
	//It will tell sum of all elements of arrays
  	cout<<"Sum of elements of the arrays"<<endl;
	
	//For loop
  	for (c = 0; c < n; c++) 
	{
	//formula to add two Arrays	
	sum[c] = first[c] + second[c];
    //Print of sum of two arrays
	cout << sum[c] << endl;
  	}
}
