#include"bank.h"

void account::show_account() const
{
	std::cout<<"\n\t\t\tAccount No. : "<<acno;
	std::cout<<"\n\t\t\tAccount Holder Name : ";
	std::cout<<name;
	std::cout<<"\n\t\t\tType of Account : "<<type;
	std::cout<<"\n\t\t\tBalance amount : "<<deposit;
}
