namespace Exes {
MemObject() {
	retainCount = 1;
}

void MemObject::seppuku() {
	delete *this;
}

	release();
}
}
