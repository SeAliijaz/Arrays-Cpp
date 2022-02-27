#include<iostream>
using namespace std;

int main(void)
{
	int age[150];
	int i;
	int count = 0;
	int n;
	
	cout<<"Enter the number of persons required : ";
	cin>>n;
	
	cout<<"Enter the ages of "<<n<<" persons"<<endl;
	
	for(i = 0; i < n;i++)
	{
		cin>>age[i];
		if(age[i] >= 50 && age[i] <= 60)
		{
			count = count + 1;
		}
	}
	cout<<count<<" persons are between 50 & 60!"; 
}
