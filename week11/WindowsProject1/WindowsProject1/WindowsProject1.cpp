// WindowsProject1.cpp : Defines the entry point for the application.
//

#include "framework.h"
#include "WindowsProject1.h"

#define MAX_LOADSTRING 100
bool bDrawLine = false;
bool bDrawEllipse = false;
bool bDrawBox = false;
// Global Variables:
HINSTANCE hInst;                                // current instance
WCHAR szTitle[MAX_LOADSTRING];                  // The title bar text
WCHAR szWindowClass[MAX_LOADSTRING];            // the main window class name

// Forward declarations of functions included in this code module:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: Place code here.

    // Initialize global strings
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_WINDOWSPROJECT1, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Perform application initialization:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_WINDOWSPROJECT1));

    MSG msg;

    // Main message loop:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  FUNCTION: MyRegisterClass()
//
//  PURPOSE: Registers the window class.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_WINDOWSPROJECT1));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_WINDOWSPROJECT1);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   FUNCTION: InitInstance(HINSTANCE, int)
//
//   PURPOSE: Saves instance handle and creates main window
//
//   COMMENTS:
//
//        In this function, we save the instance handle in a global variable and
//        create and display the main program window.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // Store instance handle in our global variable

   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}

//
//  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  PURPOSE: Processes messages for the main window.
//
//  WM_COMMAND  - process the application menu
//  WM_PAINT    - Paint the main window
//  WM_DESTROY  - post a quit message and return
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // Parse the menu selections:
            switch (wmId)
            {
            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
			case IDM_LINE:
				bDrawLine = !bDrawLine;
				InvalidateRect(hWnd, 0, true);
				break;
			case IDM_ELLIPSE:
				bDrawEllipse = !bDrawEllipse;
				InvalidateRect(hWnd, 0, true);
				break;
			case IDM_BOX:
				bDrawBox = !bDrawBox;
				InvalidateRect(hWnd, 0, true);
				break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: Add any drawing code that uses hdc here...
			HPEN hPenOld;
			if (bDrawLine)
			{
				HPEN hLinePen;
				COLORREF qLineColor;
				qLineColor = RGB(255, 0, 0);
				hLinePen = CreatePen(PS_SOLID, 7, qLineColor);
				hPenOld = (HPEN)SelectObject(hdc, hLinePen);
				MoveToEx(hdc, 100, 100, NULL);
				LineTo(hdc, 500, 250);
				SelectObject(hdc, hPenOld);
				DeleteObject(hLinePen);

			}
			if (bDrawEllipse)
			{
				HPEN hEllipsePen;
				COLORREF qEllipseColor;
				qEllipseColor = RGB(0, 0, 255);
				hEllipsePen = CreatePen(PS_SOLID, 7, qEllipseColor);
				hPenOld = (HPEN)SelectObject(hdc, hEllipsePen);
				Arc(hdc, 100, 100, 500, 250, 0, 0, 0, 0);
				SelectObject(hdc, hPenOld);
				DeleteObject(hEllipsePen);

			}
			if (bDrawBox)
			{
				HPEN hLinePen;
				COLORREF qLineColor;
				qLineColor = RGB(255, 0, 0);
				hLinePen = CreatePen(PS_SOLID, 7, qLineColor);
				hPenOld = (HPEN)SelectObject(hdc, hLinePen);
				Rectangle(hdc, 50, 100, 100, 100);
				/*MoveToEx(hdc, 50, 110, NULL);
				LineTo(hdc, 200, 250);
				MoveToEx(hdc, 400, 110, NULL);
				LineTo(hdc, 440, 250);
				MoveToEx(hdc, 200, 110, NULL);
				LineTo(hdc, 200, 400);
				MoveToEx(hdc, 100, 110, NULL);
				LineTo(hdc, 200, 300);*/
				SelectObject(hdc, hPenOld);
				DeleteObject(hLinePen);
				

			}
            EndPaint(hWnd, &ps);
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// Message handler for about box.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
