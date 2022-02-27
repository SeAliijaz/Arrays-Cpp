#include<iostream>
using namespace std;

int main(void)
{
	system("Color F");
	cout<<"\t\t    |=========================================|"<< endl;
	cout<<"\t\t    |=========================================|"<< endl;
	cout<<"\t\t    *>> Insert Single Element in an Array <<*"<<endl;
	cout<<"\t\t    |=========================================|"<< endl;
	cout<<"\t\t    |=========================================|\n\n"<< endl;
	
	////////////////////////***********************/////////////////////////////
    //Array size taken
    //i for loop
    //elem for element 
    //pos for position
    //tot for toral numbers 
	int arr[50], i, elem, pos, tot;
    
    //Ask to enter the size
	cout<<"Enter the Size for Array: ";
    cin>>tot;
    
    //Enter selectes size numbers
	cout<<"Enter "<<tot<<" Array Elements: ";
    
    //For loop
	for(i = 0; i < tot; i++)
    {
	    cin>>arr[i];
	}
	
	//Ask to enter element to insert
	cout<<"\nEnter Element to Insert: ";
    cin>>elem;
    
    //Ask to at what position element you want to insert
	cout<<"At What Position ? ";
    cin>>pos;
    
    //for loop to make position and insertion of an element
	for(i = tot; i >= pos; i--)
    {
	
		arr[i] = arr[i-1];
    arr[i] = elem;
    tot++;
	}
    //print of new Array
	cout<<"\nThe New Array is:\n";
    
    //for loop
	for(i=0; i < tot; i++)
	{
 	cout<<arr[i]<<"  ";
    cout<<endl;
	}
}
