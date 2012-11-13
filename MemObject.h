#ifndef MEMOBJECT_H
#define MEMOBJECT_H

#include <string>

namespace Exes {
class MemObject {
private:
	size_t retainCount;

protected:

public:
	MemObject() : retainCount(1) { };
	void retain() {++retainCount;};
	void release()  {if(--retainCount == 0) delete this;};

};
}

#endif
