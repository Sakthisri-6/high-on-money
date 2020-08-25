#include<iostream>
using namespace std;
main()
{
	int arr[4];
	int *p;
	p = arr;
	cout<<"Enter elements:";
	for (int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"You entered:";
	for(int j=0;j<5;j++)
	{
		cout<<*p<<endl;
		p++;
		
	}
	
}

