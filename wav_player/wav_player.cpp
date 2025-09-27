#include <Windows.h>
#include <mmsystem.h>
#include <iostream>
using namespace std;

#pragma comment(lib, "winmm.lib")

int main()
{
	cout << "Playing music \n";
	// Using the path that jumps up one folder (out of Debug) 
	// to find the Assets folder next to the project file.
	PlaySound(TEXT("..\\Assets\\BohemianRhapsody.wav"), NULL, SND_FILENAME | SND_SYNC);
	cout << "Music over \n";

	return 0;
}
