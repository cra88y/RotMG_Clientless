#pragma once

#ifndef GUILDRESULT_H
#define GUILDRESULT_H

#include "../Packet.h"

class GuildResult : public Packet
{
public:
	bool success;
	std::string lineBuilderJson;

	// Constructor
	GuildResult();
	GuildResult(byte*, int);
	GuildResult(const Packet&);

	// Output
	Packet *write();
	// Input
	void read();
};

#endif