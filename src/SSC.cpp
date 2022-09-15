#include <iostream>
#include <iomanip>
#include<ctime>
#include <vector>
#include <windows.h>
#ifdef _WIN32
#else

 #endif

using namespace std;

char want_to(){
	int main();
	void closing_remarks();
	
	char repeat;
	cout<<"Do you want to continue? y/n: " ; 
	cin>>repeat;
			cout<<"--------------------------------------------------------------------------------"<<endl;
			if(repeat == 'y'){
				main();
			}
			else 
			closing_remarks();
	return repeat;
}

void closing_remarks(){
	cout<<"Thank you for using Screen shot converter";
}

void help_screen(){
	cout<< "  The virtual key function presses and releases the key immediately after being pressed " <<'\n';
	cout<< " The Left windows key is pressed followed by the print scr key they are all pressed simultanously "<<'\n';
}

char menu(){
	std::cout << "S)creenshot  H)elp  Q)uit \n";
	char option;
	
	cin>> option;
	
	return option;
}



int main(){
	
	system("color 0F");
	
																					
	switch (menu()){
		case 'S':
		case 's':
			for (int sec = 5; sec < 6; sec--){
				cout << setw(2) << sec;
				cout.flush();
				
				Sleep(1000);
				cout << '\r';
				
				if (sec == 1){
				
      ShowWindow(GetConsoleWindow(), SW_MINIMIZE);
      }
				
				if ( sec == 0){
				
					keybd_event(VK_LWIN, 0x5B, 0, 0);
					keybd_event(VK_SNAPSHOT, 0x2C, 0, 0);
		cout<<"Screenshot Taken done......... \n \n \n " <<'\n'
		
	<< "File Explorers/PC/Pictures/Screenshots \n \n"<< endl;	
				}
				if (sec <1)
				break;
			}
	 want_to();
		break;
	
		case 'H':
		case 'h':
		help_screen();
		want_to();
		break;
		
		case 'Q':
		case 'q':
		closing_remarks();
		
		default:
			cout<<" enter the correct character " << '\n';
			menu();
		
	}	
	
	
	/*clock_t end_time = clock();
	cout <<" Time taken to do the screen shot = " <<static_cast<double>(end_time - seconds)/CLOCKS_PER_SEC << " seconds\n";
	*/
return 0;

}
