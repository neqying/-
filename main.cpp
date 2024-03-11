#include<iostream>
#include<unistd.h>
#include"Addressbooks.h"
using namespace std;
int main()
{
	Addressbooks abs;
	abs.num=0;
	int choice;
	while(1)
   {
       showMenu();
       cin>>choice;       
	switch(choice)
	{
		case 1:
		addperson(&abs);
			break;
		case 2:
		readperson(&abs);
			break;
		case 3:
		delperson(&abs);
			break;
		case 4:
		findperson(&abs);
			break;
		case 5:
		changeperson(&abs);
			break;
		case 6:
		cleanperson(&abs);
			break;
		case 0:
		    cout<<"欢迎下次使用"<<endl;
			
			return 0;
		default:
		    break;
	}
   }
   
	return 0;
}
