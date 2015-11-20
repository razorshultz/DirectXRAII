#ifndef DXWINDOW_H
#define DXWINDOW_H

#include <Windows.h>

class dxwindow
{

public:
	
	dxwindow(HINSTANCE hInstance);
	~dxwindow();
	HWND GethWnd();
	


private:
	dxwindow(); //make the default constructor private, since you actually need to pass in the hInstance from the main program
	WNDCLASSEX wc;
	HWND hWnd;
	
};



#endif
