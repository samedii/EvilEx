#ifndef ELEMENT_H
#define ELEMENT_H

#include "MemObject.h"
#include <map>
#include <string>

namespace Exes {
class Element : MemObject {
private:

protected:

public:
	std::map<char*,void*> actions; // actions on this

	//virtual char* description = 0;
	std::string name;
	
	bool &operator==(char *c) const { return name.compare(c); };
}
}

#endif
