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
	((col & 0xff0000) >> 16), \
	((col & 0xff00) >> 8), \
	((col & 0xff)) \
)

constexpr Color textgrey     = RGB(0xbbbbbb);
constexpr Color backgrey     = RGB(0x222222);
constexpr Color activeblue   = RGB(0x223344);
constexpr Color urgentyellow = RGB(0xfd971f);

constexpr ColorScheme colorInactive = {
	textgrey,
	backgrey
};
constexpr ColorScheme colorActive = {
	textgrey,
	activeblue
};
constexpr ColorScheme colorUrgentInactive = {
	urgentyellow,
	backgrey
};
constexpr ColorScheme colorUrgentActive = {
	urgentyellow,
	activeblue
};

constexpr const char* termcmd[] = {"x-terminal-emulator", nullptr};

constexpr int tagCount = 26;
constexpr Button buttons[] = {
	{ ClkStatusText, BTN_RIGHT, spawn, {.v = termcmd} },
};
