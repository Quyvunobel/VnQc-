#include <iostream>
using namespace std;
main()
{
	int a;
	float b,c;
	cout<<"Chon bai toan: ";
	cin>>a;
	cout<<"Nhap a: ";
	cin>>b;
	cout<<"Nhap b: ";
	cin>>c;
	switch(a)
	{
		case 0:
			cout<<"a+b= "<<b+c<<endl;
			break;
		case 1:
			cout<<"a-b= "<<b-c<<endl;
			break;
		case 2:
			cout<<"a/b= "<<int(b/c)<<endl;
			break;
		case 3:
			cout<<"Switch-case"<<endl;
			break;
		default:
			cout<<"None";
	}
}
