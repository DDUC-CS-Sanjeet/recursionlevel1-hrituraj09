#include<iostream>
using namespace std;
int gcd_rec(int a,int b)
{
	if(a<0||b<0)
	cout<<"invalid input!!";
	if(b==0)
	return a;
	return gcd_rec(b,a%b);
}
int fibonacci_rec(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibonacci_rec(n-1)+fibonacci_rec(n-2));
    }
}
int calculatePower_rec(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base*calculatePower_rec(base, powerRaised-1));
    else
        return 1;
}
int factorial_rec(int n)
{
    if(n > 1)
        return n * factorial_rec(n - 1);
    else
        return 1;
}
int gcd(int a,int b)
{
	int tmp;
	while(b!=0)
	{
		tmp=a;
		a=b;
		b=tmp%b;
	}
	return a;
}
int power(int a,int b)
{
	int res=1;
	for(int i=0;i<b;i++)
	res*=a;
	return res;
}
int factorial(int num)
{
	int res=1;
	for(int i=num;i>0;i--)
	res*=i;
}
int fibonacci(int n)
{
	int t1=0,t2=1;
	for (int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            cout << " " << t1<<" ";
            continue;
        }
        if(i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        int nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << " ";
    }
}
int main()
{
	int n,i=0,t;
    cout<<"Input the number of terms for Fibonacci Series:";
    cin>>n;
    cout<<"\nFibonacci Series is as follows\n";
 
    while(i<n)
    {
        cout<<" "<<fibonacci_rec(i);
        i++;
    }
    cout<<"\n fiboacci iterative: "<<endl;
    t=fibonacci(n);
    
    int a,b,c;
    cout<<"\n enter two numbers : "<<endl;
    cin>>a>>b;
    if(a==0||b==0)
    {
    	c=1;
    	cout<<c<<endl;
	}
    else
    {
	
    c=gcd_rec(a,b);
    cout<<"gcd by recursion "<<c<<endl;
    c=gcd(a,b);
    cout<<"gcd iterative "<<c<<endl;}
    int x,v;
    cout<<"\n Enter a number to get its factorial: "<<endl;
    cin>>x;
    cout<<"\n factorial rcursive: "<<endl;
    v=factorial_rec(x);
    cout<<v;
    cout<<"\n factorial iterative: \n";
    v=factorial(x);
    cout<<v<<endl;
    int bas,p,prod;
    cout<<"Enter number to raise to the power: "<<endl;
    cin>>bas;
    cout<<"enter the power: ";
    cin>>p;
    prod=calculatePower_rec(bas,p);
    cout<<"recursive power product: "<<prod<<endl;
    prod=power(bas,p);
    cout<<"iterative power product: "<<prod<<endl;
	return 0;
	
}
