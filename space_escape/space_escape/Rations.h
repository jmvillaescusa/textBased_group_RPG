#ifndef RATIONS
#define RATIONS

#include "Items.h"

class Rations : public Items {

public:
	
	

private:

	int Health;

public:
	int GetHealth() { return Health; }

	void SetHealth(int l) { Health = l; }

};



#endif // !RATIONS
