#include <fstream>
#include <iostream>
using namespace std;

class CHIP8 {
	public:	
		unsigned uint8 registers[16];
		unsigned uint8 memory[4096];
		unsigned uint16 index; // I
		unsigned uint16 pc; // program counter
		unsigned uint16 stack[16];
		unsigned uint8 sp; // stack pointer
		unsigned uint8 delay_timer;
		unsigned uint8 sound_timer;
		unsigned uint8 keypad[16];
		unsigned uint32 display[64 * 32];
};


int main() {
	cout << "hi";
//	return 0;
	string romText;
	ifstream MyReadFile("test_opcode.ch8");

	while (getline (MyReadFile, romText)) {
		cout << romText;
	}
	MyReadFile.close();
}

