#ifndef AREA_H
#define AREA_H

#include "Element.h"
#include "ElementContainer.h"
#include <map>

namespace Exes {
class Area : Element, ElementContainer {
private:

protected:
	std::map<char*,Area*> directions;

public:
	//virtual std::string type() = 0;

}
}

#endif
