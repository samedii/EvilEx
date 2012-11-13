#ifndef OBJECT_H
#define OBJECT_H

#include "Element.h"
#include "Area.h"
#include "Actor.h"

namespace Exes {
class Object : Element {
private:
	Area *area;

protected:

public:
	
	void pickUp(Actor*);
	void eat(Actor*);

}
}

#endif
