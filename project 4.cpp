#include<iostream>
using namespace std;
int prime(int n);
main()
{
	int j, p , num =0;
	cout<<"Enter a positive integer";
	cin>>p;
    for ( j=2;j<=p/2;j++)
    {
    	if(prime(j)==1)
    	{
    		if(prime(p-j)==1)
    		{
    			cout<<j<<"+"<<p-j<<"\n"<<endl;
    			num = 1;
			}
			
		}
		
	}
	if(num==0)
	{
		cout<<p<<"cannot be expressed as sum of two prime numbers";
		return 0;
	}

	
}
int prime(int n)
{
	int i,primenum = 1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		    primenum = 0 ;
		    break;
					
		}
		
	}return primenum;
}
