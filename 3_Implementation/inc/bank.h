/**
 * @bank.h
 * @author Sourav Sudarshan(https://github.com/LoneWalker619/Miniproject)
 * @brief This program is for including function prototypes.
 * @version 0.1
 * @date 2021-06-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __BANK_H__
#define __BANK_H__
#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
/**
  *@brief Structure containing details for creting account
  */

/**
  *@brief structure containing details required to perform online banking functions
  */
class account
{
	int acno;
	char name[50];
	int deposit;
	char type;
public:
	void create_account();
	void show_account() const;
	void modify();
	void dep(int);
	void draw(int);
	void report() const;
	int retacno() const;
	int retdeposit() const;
	char rettype() const;
};

void write_account();
void display_sp(int);
void modify_account(int);
void delete_account(int);
void display_all();
void deposit_withdraw(int, int);

#endif

