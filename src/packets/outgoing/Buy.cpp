#include "Buy.h"



// Constructor
Buy::Buy()
{
	this->_type = PacketType::BUY;
}
Buy::Buy(byte *b, int i) : Packet(b, i)
{
	this->_type = PacketType::BUY;
	read();
}
Buy::Buy(Packet &p) : Packet(p)
{
	this->_type = PacketType::BUY;
	read();
}

Packet *Buy::write()
{
	// Clear the packet data just to be safe
	this->clearData();
	// Write data
	this->writeBytes<int>(objectId);
	this->writeBytes<int>(quantity);
	// Send the packet
	return this;
}

void Buy::read()
{
	// Make sure the index is set to 0
	this->setIndex(0);
	// Read in the data
	objectId = this->readBytes<int>();
	quantity = this->readBytes<int>();
	// done!
}