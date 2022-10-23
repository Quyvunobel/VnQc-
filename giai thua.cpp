#include <iostream>
using namespace std;
main()
{
	int n;
	do
	{
		cout<<"Nhap so nguyen duong n: ";cin>>n;
	}
	while(n<=0);
	int gt=1;
	for(int i=1;i<=n;i++)
	{
		gt*=i;
	}
	cout<<"Ket qua n!= "<<gt;
}
