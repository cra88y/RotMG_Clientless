#include "GuildInvite.h"
#include "../PacketType.h"

// Constructors
GuildInvite::GuildInvite()
{
	// Set packet id
	this->id = PacketType::GUILDINVITE;
}
GuildInvite::GuildInvite(byte *b, int i) : Packet(b, i)
{
	// Set id and pass data to Parse
	this->id = PacketType::GUILDINVITE;
	read();
}
GuildInvite::GuildInvite(Packet &p) : Packet(p)
{
	this->id = PacketType::GUILDINVITE;
	read();
}

Packet *GuildInvite::write()
{
	// Clear the packet data just to be safe
	this->clearData();
	// Write data
	this->writeString<short>(name);
	// Send the packet
	return this;
}

void GuildInvite::read()
{
	// Make sure the index is set to 0
	this->setIndex(0);
	// Read in the data
	name = this->readString<short>();
	// done!
}