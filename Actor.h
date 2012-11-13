#ifndef ACTOR_H
#define ACTOR_H

#include "Element.h"
#include "ElementContainer.h"
#include "Area.h"

#include <map>

namespace Exes {
class Actor : Element, ElementContainer {
private:
	Area *area;

protected:
	int HP;
	unsigned int maxHP;

public:
	std::map independentActions; // actions on others

	//virtual std::string type() = 0;
	//virtual std::string name() = 0;
	//bool action();
	//bool go(Direction&);
	//void fight(const Character&);
	
	void move(const char*);
	void drop(char*);
	void lookAt(const char*) const;

}
}

#endif
