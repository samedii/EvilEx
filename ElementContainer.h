#ifndef ELEMENTCONTAINER_H
#define ELEMENTCONTAINER_H

#include <vector>

namespace Exes {
	class ElementContainer {
	public:
		std::vector<Element*> elements;
		void addElement(Element *e) {
			e->retain();
			elements.push_back(e);
		}

		void removeElement(Element *e) {
			elements.remove(e);
			e->release();
		}
	}
}

#endif
