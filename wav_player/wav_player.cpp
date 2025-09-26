#include <Windows.h>
#include <mmsystem.h>
#include <iostream>

#pragma comment(lib, "winmm.lib")

int main()
{
    std::cout << "Playing music \n";
    PlaySound(TEXT("BohemianRhapsody.wav"), NULL, SND_FILENAME | SND_SYNC);
    std::cout << "Music over \n";

    return 0;
}
