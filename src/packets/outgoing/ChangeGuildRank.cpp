#include "ChangeGuildRank.h"
#include "../PacketType.h"


// Constructor
ChangeGuildRank::ChangeGuildRank()
{
	this->id = PacketType::CHANGEGUILDRANK;
}
ChangeGuildRank::ChangeGuildRank(byte *b, int i) : Packet(b, i)
{
	this->id = PacketType::CHANGEGUILDRANK;
	read();
}
ChangeGuildRank::ChangeGuildRank(Packet &p) : Packet(p)
{
	this->id = PacketType::CHANGEGUILDRANK;
	read();
}

Packet *ChangeGuildRank::write()
{
	// Clear the packet data just to be safe
	this->clearData();
	// Write data
	this->writeString<short>(name);
	this->writeBytes<int>(guildRank);
	// Send the packet
	return this;
}

void ChangeGuildRank::read()
{
	// Make sure the index is set to 0
	this->setIndex(0);
	// Read in the data
	name = this->readString<short>();
	guildRank = this->readBytes<int>();
	// done!
}