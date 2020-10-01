#include<iostream.h>
#include<conio.h>

int main()
{
	float i,a,b,d;
	char c,choice='y';
while(choice=='y')
{
	cout<<"======================================";
	cout<<"\n1st number =";
	cin>>a;
	cout<<"2nd number =";
	cin>>b;
	cout<<"operator:";
	cin>>c;
if(c=='+')
	{
		d=a+b;
		cout<<"Sum is:"<<d<<endl;
}
else if(c=='-')
	{
		d=a-b;
		cout<<"Subtraction is:"<<d<<endl;
}
else if(c=='*')
	{
		d=a*b;
		cout<<"Multiplication is:"<<d<<endl;
}
else if(c=='/')
	{
		d=a/b;
		cout<<"Division is:"<<d<<endl;
}
else
{
 cout<<"Invalid"<<endl;
}
	cout<<"Do you want to perform more such options press y else press n";
	cin>>choice;
	
}
return 0;
}
