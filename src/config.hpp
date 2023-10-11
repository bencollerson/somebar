// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include "common.hpp"

constexpr bool topbar = false;

constexpr int paddingX = 8;
constexpr int paddingY = 2;

// See https://docs.gtk.org/Pango/type_func.FontDescription.from_string.html
constexpr const char* font = "mono 10";

#define RGB(col) Color( \
	(col >> 16) & 0xff, \
	(col >> 8) & 0xff, \
	col & 0xff \
)

#define DWLKEYS "/usr/local/bin/dwl-keys"

constexpr Color textgrey     = RGB(0xbbbbbb);
constexpr Color backgrey     = RGB(0x222222);
constexpr Color activeblue   = RGB(0x223344);
constexpr Color urgentred = RGB(0xf92672);

constexpr ColorScheme colorInactive = {
	textgrey,
	backgrey
};
constexpr ColorScheme colorActive = {
	textgrey,
	activeblue
};
constexpr ColorScheme colorUrgentInactive = {
	urgentred,
	backgrey
};
constexpr ColorScheme colorUrgentActive = {
	urgentred,
	activeblue
};

constexpr const char* termcmd[] = {"x-terminal-emulator", nullptr};

constexpr int tagCount = 26;
constexpr Button buttons[] = {
	{ ClkTagBar,     BTN_LEFT, view,  {0} },
	{ ClkStatusText, BTN_LEFT, spawn, {.v = termcmd} },
};
