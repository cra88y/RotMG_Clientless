#pragma once

#ifndef ACCOUNTLIST_H
#define ACCOUNTLIST_H

#include "../Packet.h"

class AccountList : public Packet
{
public:
	int accountListId;
	std::vector<std::string> accountIds;
	int lockAction;

	// Constructor
	AccountList();
	AccountList(byte*, int);
	AccountList(const Packet&);

	// Output
	void Send();
	// Input
	void Parse();
	void Fill(byte*, int);
};

#endif