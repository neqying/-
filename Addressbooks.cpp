#include<iostream>
using namespace std;
#include"Addressbooks.h"
void showMenu()
{
    cout<<"**************"<<endl;
    cout<<"*** 1.添加 ***"<<endl;
    cout<<"*** 2.查看 ***"<<endl;
    cout<<"*** 3.删除 ***"<<endl;
    cout<<"*** 4.查找 ***"<<endl;
    cout<<"*** 5.修改 ***"<<endl;
    cout<<"*** 6.清空 ***"<<endl;
    cout<<"*** 0.退出 ***"<<endl;
    cout<<"**************"<<endl;
}
void addperson(Addressbooks*abs)
{
    if(abs->num==Max) 
    {
       cout<<"通讯录已满，添加失败。"<<endl;
       return; 
    }
    string name;
    cout<<"请输入对方名字："<<endl;
    cin>>name;
    abs->person[abs->num].Name=name;

    int sex=0;
    cout<<"请输入对方性别"<<endl;
    cout<<"1 -- male"<<endl;
    cout<<"2 --female"<<endl;
    while(1)
    {
	    cin>>sex;
	    if(sex==1||sex==2)
		{   break;
                }
	    else
		{ 
                        cout<<"请重新输入"<<endl;
                }
    }
    abs->person[abs->num].Sex=sex;

    int age;
    cout<<"请输入对方年龄"<<endl;
    cin>>age;
    abs->person[abs->num].Age=age;

    string phone;
    cout<<"请输入对方手机号码："<<endl;
    cin>>phone;
    abs->person[abs->num].Phone=phone;
    
    abs->num++;
    cout<<"输入成功"<<endl;
    
       
}
void readperson(Addressbooks*abs)
{
	if(abs->num==0)
	{
		cout<<"当前通讯录为空"<<endl;
	}
	else
	{
	for(int i=0;i<abs->num;i++)
	{
		cout<<abs->person[i].Name<<"\t";
		cout<<abs->person[i].Sex<<"\t";
		cout<<abs->person[i].Age<<"\t";
		cout<<abs->person[i].Phone<<endl;
	}
	}
	
	
}
int Find(Addressbooks*abs,string name)
{
	for(int i=0;i<abs->num;i++)
	{
		if(abs->person[i].Name==name)
			return i;
	}
	return 0;
	
}
void delperson(Addressbooks*abs)
{
        cout<<"请输入你要删除的对象："<<endl;
	string name;
	cin>>name;
	int a=Find(abs,name);
	if(a)
	{
		for(int i=a;i<abs->num;i++)
		{
			abs->person[i]=abs->person[i+1];
		}
		abs->num--;
	        cout<<"删除成功"<<endl;
	}
	else 
		cout<<"查无此人"<<endl;
	
	
}
void findperson(Addressbooks*abs)
{
	cout<<"请输入你要查找的对象："<<endl;
        string name;
        cin>>name;
        int a=Find(abs,name);
        if(a)
        {
		cout<<abs->person[a].Name;
                cout<<abs->person[a].Sex;
                cout<<abs->person[a].Age;
                cout<<abs->person[a].Phone;
                
        }
        else
                cout<<"查无此人"<<endl;
        
        
}
void changeperson(Addressbooks*abs)
{
    string name;
    cout<<"请输入修改对象的名字"<<endl;
    cin>>name;
    int a=Find(abs,name);
    if(a=0)
    {
	    cout<<"查无此人"<<endl;
	    return;
    }
    string name1;
    cout<<"请输入新名字："<<endl;
    cin>>name1;
    abs->person[a].Name=name1;

    int sex=0;
    cout<<"请输入对方性别"<<endl;
    cout<<"1 -- male"<<endl;
    cout<<"2 --female"<<endl;
    while(1)
    {
            cin>>sex;
            if(sex==1||sex==2)
                    break;
            else
                    cout<<"请重新输入"<<endl;
    }
    abs->person[abs->num].Sex=sex;

    int age;
    cout<<"请输入对方年龄"<<endl;
    cin>>age;
    abs->person[abs->num].Age=age;
    string phone;
    cout<<"请输入对方新的手机号码："<<endl;
    cin>>phone;
    abs->person[abs->num].Phone=phone;

    cout<<"修改成功！"<<endl;
    
    
}
void cleanperson(Addressbooks*abs)
{
	abs->num=0;
	cout<<"通讯录已清空"<<endl;
	
        
}
