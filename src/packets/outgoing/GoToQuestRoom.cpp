#include "GoToQuestRoom.h"
#include "../PacketType.h"


// Constructor
GoToQuestRoom::GoToQuestRoom()
{
	this->id = PacketType::QUEST_ROOM_MSG;
}
GoToQuestRoom::GoToQuestRoom(byte *b, int i) : Packet(b, i)
{
	this->id = PacketType::QUEST_ROOM_MSG;
	read();
}
GoToQuestRoom::GoToQuestRoom(Packet &p) : Packet(p)
{
	this->id = PacketType::QUEST_ROOM_MSG;
	read();
}

Packet *GoToQuestRoom::write()
{
	// Clear the packet data just to be safe
	this->clearData();
	// Write data

	// Send the packet
	return this;
}

void GoToQuestRoom::read()
{
	// Make sure the index is set to 0
	this->setIndex(0);
	// Read in the data

	// done!
}