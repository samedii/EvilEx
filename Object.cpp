#include "Object.h"

namespace Exes {
	void pickUp(Actor *actor) {
		actor->addElement(this);
		area->removeElement(this);
	}

	void eat(Actor *actor) {

		//actor->getALife();
		release();
	}
}
