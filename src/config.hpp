// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include "common.hpp"

constexpr bool topbar = false;

constexpr int paddingX = 8;
constexpr int paddingY = 2;

// See https://docs.gtk.org/Pango/type_func.FontDescription.from_string.html
constexpr const char* font = "mono 10";

constexpr ColorScheme colorInactive = {Color(0xbb, 0xbb, 0xbb), Color(0x22, 0x22, 0x22)};
constexpr ColorScheme colorActive = {Color(0xbb, 0xbb, 0xbb), Color(0x22, 0x33, 0x44)};
constexpr ColorScheme colorUrgentInactive = {Color(0xfd, 0x97, 0x1f), Color(0x22, 0x22, 0x22)};
constexpr ColorScheme colorUrgentActive = {Color(0xfd, 0x97, 0x1f), Color(0x22, 0x33, 0x44)};
constexpr const char* termcmd[] = {"x-terminal-emulator", nullptr};

constexpr int tagCount = 26;
constexpr Button buttons[] = {
	{ ClkStatusText,   BTN_RIGHT,  spawn,      {.v = termcmd} },
};
