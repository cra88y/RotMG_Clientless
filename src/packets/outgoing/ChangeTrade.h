#pragma once

#ifndef CHANGETRADE_H
#define CHANGETRADE_H

#include "../Packet.h"

class ChangeTrade : public Packet
{
public:
	std::vector<bool> offer;

	// Constructor
	ChangeTrade();
	ChangeTrade(byte*, int);
	ChangeTrade(Packet&);

	// Output
	Packet *write();
	// Input
	void read();
};

#endif