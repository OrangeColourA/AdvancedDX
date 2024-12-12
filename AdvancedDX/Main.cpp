
#include <Windows.h>
//#include <windef.h>

LRESULT CALLBACK FUCKtoFUCKProc(HWND, UINT, WPARAM, LPARAM);


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow)
{

    //MessageBox(NULL, L"Hi SHIT FUCK YOU I HATE YOU MOTHERFUCKONG WOTLD!", L"Hello from message FUCKION G BOX", MB_OK);


    HWND hMainWnd;
    const wchar_t* szClassName = L"MyFUCKINGwindowClassMOTHERFUCKER";

    MSG msg;
    WNDCLASSEX wc;

    // FILLING SHIT of MOTHERFUCKING WINDOW BITCH

    wc.cbSize         = sizeof(wc);
    wc.style          = CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc    = FUCKtoFUCKProc;
    wc.cbClsExtra     = 0;
    wc.cbWndExtra     = 0;
    wc.hInstance      = hInstance;
    wc.hIcon          = LoadIcon(NULL, IDI_QUESTION);
    wc.hCursor        = LoadCursor(NULL, IDC_HAND);
    wc.hbrBackground  = (HBRUSH)(GetStockObject(GRAY_BRUSH));
    wc.lpszMenuName   = NULL;
    wc.lpszClassName  = szClassName;
    wc.hIconSm        = LoadIcon(NULL, IDI_QUESTION);

    // Registrating motherfuckiong wnd class

    if (!RegisterClassEx(&wc))
    {
        MessageBox(NULL, L"Can't fucking register your shitty window class... sorry", L"Shit your pants", MB_OK);
        return 0;
    }


    hMainWnd = CreateWindow(szClassName, L"CREATED A WINDOW!!!",
        WS_OVERLAPPEDWINDOW,100,100,300,200,NULL,NULL,hInstance, NULL);

    if (!hMainWnd)
    {
        MessageBox(NULL, L"You can't create a fucking window", L"Shit", MB_OK);
        return 0;
    }

    
    ShowWindow(hMainWnd, nCmdShow);
    // UpdateWindow(hMainWnd); // См примечание в разделе Отображение окна


    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }


    return msg.wParam;
}


LRESULT CALLBACK FUCKtoFUCKProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    HDC hDC;
    PAINTSTRUCT ps;
    RECT rect;

    switch (uMsg)
    {
    case WM_PAINT:
        hDC = BeginPaint(hWnd, &ps);

        GetClientRect(hWnd, &rect);

        SetBkColor(hDC, 0x0000FFFF);
        //SetBkMode(hDC, TRANSPARENT);

        DrawText(hDC, L"Congratulation! You have a window!", -1, &rect,
            DT_SINGLELINE | DT_CENTER | DT_VCENTER);
        EndPaint(hWnd, &ps);
        break;

    case WM_CLOSE:
        DestroyWindow(hWnd);
        break;

    case WM_DESTROY:
        PostQuitMessage(0);
        break;

    default:
        return DefWindowProc(hWnd, uMsg, wParam, lParam);
    }


    return 0;

}