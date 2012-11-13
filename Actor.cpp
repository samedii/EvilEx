#include "Actor.h"

namespace Exes {
	//bool action();
	//bool go(Direction&);
	//void fight(const Character&);
	
void lookAt(const char *cmd) const {
	for(int i = 0; i<area->elements.length(); ++i) {
		if(std::string::compare(area->elements[i]->name, cmd) == 0) {
			std::cout << area->elements[i]->name << std::endl;
			return;
		}
	}		
}

void move(const char *cmd) {
	Area *a = area->directions[cmd];
	if(a == NULL) {
		std::cout << "Unknown direction " << cmd << std::endl;
		return;
	}

	a->addElement(this);
	area->removeElement(this);
	area = a;
}

	void drop(char *cmd) {
		Element *obj = std::find(elements.begin(), elements.end(), cmd);
		if(obj == NULL) {
			std::cout << "Couldn't find " << cmd << std::endl;
			return;
		}

		area->addElement(obj);
		removeElement(obj);
	}
}
