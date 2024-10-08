#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Foreground
#define WHITE_TEXT FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY
#define RED_TEXT FOREGROUND_RED | FOREGROUND_INTENSITY
#define BLUE_TEXT FOREGROUND_BLUE | FOREGROUND_INTENSITY
#define GREEN_TEXT FOREGROUND_GREEN | FOREGROUND_INTENSITY
#define BLACK_TEXT FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE 

// Background
#define WHITE_BG BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY 

class Console {
	public:
	// CONSOLE INFO
	HANDLE hConsole = nullptr;
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	Console();
	void CursPos();
	void Colour(int fgcolour, int bgcolour);
	void ResetColour();
};
