#include "AcceptArenaDeath.h"
#include "../PacketType.h"


// Constructor
AcceptArenaDeath::AcceptArenaDeath()
{
	this->id = PacketType::ACCEPT_ARENA_DEATH;
}
AcceptArenaDeath::AcceptArenaDeath(byte *b, int i) : Packet(b, i)
{
	this->id = PacketType::ACCEPT_ARENA_DEATH;
	read();
}
AcceptArenaDeath::AcceptArenaDeath(Packet &p) : Packet(p)
{
	this->id = PacketType::ACCEPT_ARENA_DEATH;
	read();
}

Packet *AcceptArenaDeath::write()
{
	// Clear the packet data just to be safe
	this->clearData();
	// Write data

	// Send the packet
	return this;
}

void AcceptArenaDeath::read()
{
	// Make sure the index is set to 0
	this->setIndex(0);
	// Read in the data

	// done!
}