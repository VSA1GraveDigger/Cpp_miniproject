#include "bank.h"

void display_sp(int n)
{
	account ac;
	bool flag=false;
	std::ifstream inFile;
	inFile.open("account.dat",std::ios::binary);
	if(!inFile)
	{
		std::cout<<"File could not be open !! Press any Key...";
		return;
	}
	std::cout<<"\n\t\t\tBALANCE DETAILS\n";
    	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
	{
		if(ac.retacno()==n)
		{
			ac.show_account();
			flag=true;
		}
	}
    inFile.close();
	if(flag==false)
		std::cout<<"\n\n\t\t\tAccount number does not exist";
}