#pragma once

#ifndef PLAYERTEXT_H
#define PLAYERTEXT_H

#include "../Packet.h"

class PlayerText : public Packet
{
public:
	std::string text;

	// Constructor
	PlayerText();
	PlayerText(byte*, int);
	PlayerText(Packet&);

	// Output
	Packet *write();
	// Input
	void read();
};

#endif