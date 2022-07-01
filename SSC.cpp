#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	system("color 0C");
	//;// Left windows ;key is pressed
	// followed by the print scr key
	// they are all pressed simultanously 
	
	
		keybd_event(VK_LWIN, 0x5B, 0, 0);
		keybd_event(VK_SNAPSHOT, 0x2C, 0, 0);
		
	/* The virtual key function presses and releases the key immediately after being pressed
	*/		
	
	keybd_event(VK_LWIN, 0x58, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_SNAPSHOT, 0x2C, KEYEVENTF_KEYUP, 0);
	
	
	cout<<"Screenshot Taken done......... \n \n "
	<<"Check the screenshots in the following directory \n \n " 
	<< "File Explorers/PC/Pictures/Screenshots" << endl;
	
return 0;

}
