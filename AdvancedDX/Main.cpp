
#include <Windows.h>
//#include <windef.h>

LRESULT CALLBACK FUCKtoFUCKProc(HWND, UINT, WPARAM, LPARAM);


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow)
{

    MessageBox(NULL, L"Hi SHIT FUCK YOU I HATE YOU MOTHERFUCKONG WOTLD!", L"Hello from message FUCKION G BOX", MB_OK);


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
    wc.hbrBackground  = (HBRUSH)(GetStockObject(BLACK_BRUSH));
    wc.lpszMenuName   = NULL;
    wc.lpszClassName  = szClassName;
    wc.hIconSm        = LoadIcon(NULL, IDI_APPLICATION);

    // Registrating motherfuckiong wnd class

    if (!RegisterClassEx(&wc))
    {
        MessageBox(NULL, L"Can't fucking register your shitty window class... sorry", L"Shit your pants", MB_OK);
        return 0;
    }


    hMainWnd = CreateWindow();



    return 0;
}
