#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
#include "bank.h"

void write_account()
{
	account ac;
	std::ofstream outFile;
	outFile.open("account.dat",std::ios::binary|std::ios::app);
	ac.create_account();
	outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
	outFile.close();
}