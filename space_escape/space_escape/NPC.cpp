#include"NPC.h"

NPC::NPC(){}
NPC::~NPC(){}
void NPC::NPCdialogue() {
	
	bool isPlayer1 = true;
	//to tell if its still prisoner1

	if (isPlayer1 == true) {
		//if its prisoner 1 - this is the dialogue
		cout << "Player:\nHey, Do you know where we are the last thing i remesber was a thing trying to experiment on me!" << endl;
		cout << "Pisoner 1:\nSo far all I know is where at a ship in space.\n That thing you refered to we prisoner called jajd." << endl;
		cout << "I heard rumours from the cell beside me that there might be a way to escape." << endl;
		cout << "Player:\nThanks for the help!\nI'll see you around." << endl;
		isPlayer1 = false;
	}
	else {
		//if its not prisoner 1 this is the dialogue
		cout << "Player:\nHey, I heard that you might know of a way out of here." << endl;
		cout << "Prisoner 2:\nI heard that a ship that leaves there's ship that leaves from earth in the other side of the ship." << endl;
		cout << "Sadly, the way to the end of the ship is guarded by the jajd and im too ssscared to go. " << endl;
		cout << "Player:\nIt's ok I'll go and get help. I'll be back don't worry!" << endl;
	}


}