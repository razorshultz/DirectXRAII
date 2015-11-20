#include <Windows.h>
#include "dxwindow.h"



int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{	dxwindow window(hInstance);


	// display the window on the screen
	ShowWindow(window.GethWnd(), nCmdShow);

    // enter the main loop:

    // this struct holds Windows event messages
    MSG msg;

    // wait for the next message in the queue, store the result in 'msg'
    while(GetMessage(&msg, NULL, 0, 0))
    {
        // translate keystroke messages into the right format
        TranslateMessage(&msg);

        // send the message to the WindowProc function
        DispatchMessage(&msg);
    }

    // return this part of the WM_QUIT message to Windows
    return msg.wParam;
}