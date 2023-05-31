#include <iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenalan() final {
		cout << "hallo saya function dari base class";
	}
};
class derivedClass:public baseClass {
public:
	virtual void perkenalan() {
		cout << "hallo saya function dari derived klass";
	}
};
int main() {
	derivedClass a;
	a.perkenalan() ;
	return 0;
}