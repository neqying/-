#pragma once
#include<string>
#define Max 1000
typedef struct{std::string Name;int Sex;int Age;std::string Phone;} Person;
typedef struct{Person person[Max];int num;} Addressbooks;
void showMenu();
void addperson(Addressbooks*abs);
void readperson(Addressbooks*abs);
int Find(Addressbooks*abs,std::string name);
void delperson(Addressbooks*abs);
void findperson(Addressbooks*abs);
void changeperson(Addressbooks*abs);
void cleanperson(Addressbooks*abs);