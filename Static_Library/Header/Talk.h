#ifndef _TALK_H_
#define _TALK_H_

#include <iostream>

using namespace std;

class Talk {
	private:
		char *lpcMessage;
	public:
		Talk(char* message);
		void vSayHello();
		void vSay();
		void vSetMessage(char* message);
};

#endif