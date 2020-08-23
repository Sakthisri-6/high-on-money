#include<iostream>
using namespace std;
main()
{
	int age , diff =0;
	cout<<"Enter your age.\n";
	cin>>age;
	if(age>=19)
	{
		cout<<"Your age is above 19 and you are ELIGIBLE to vote\nThankyou\n";
		
	}
	else if(age<19)
	{
		diff = 19 - age;
		cout<<" Now you are NOT ELIGIBLE to vote \n you have to wait for  "<<diff<<" YEARS to vote\n thankyou \n";
	}
	
}
