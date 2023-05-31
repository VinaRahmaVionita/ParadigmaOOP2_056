#include <iostream>
using namespace std;

class seseorang {
public:
	virtual void pesan() = 0;
	//virtual void pesan() {
	   //cout<<"pesan dari seseorang"<<endl;
	//}
	//virtual void cetak() = 0;
	virtual void cetak() {

	}
};

class joko : public seseorang {
public:
	void pesan() {
		cout << "pesan dari joko" << endl;
	}
	void cetak() {
		cout << "tulisan joko" << endl;
	}
};

class lia : public seseorang {
public:
	void pesan() {
		cout << "pesan dari lia" << endl;
	}
};

int main() {
	seseorang* orang;
	joko a;
	lia b;

	
}