#include<iostream>
#include<string.h>
#include"bank.h"
void account::create_account()
{
   system("CLS");
	std::cout<<"\n\t\t\tEnter the Account No. : ";
	std::cin>>acno;
	std::cout<<"\n\n\t\t\tEnter the Name of the Account holder : ";
	std::cin.ignore();
	std::cin.getline(name,50);
	std::cout<<"\n\t\t\tEnter Type of the Account (C/S) : ";
	std::cin>>type;
	type=toupper(type);
	std::cout<<"\n\t\t\tEnter The Initial amount : ";
	std::cin>>deposit;
	std::cout<<"\n\n\t\t\tAccount Created..";
}