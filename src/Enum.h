﻿#pragma once

// ENUM OF INPUT FROM SDL2
enum
{
	QS2D_KEY_UNKNOWN = 0,
	QS2D_KEY_A = 4,
	QS2D_KEY_B = 5,
	QS2D_KEY_C = 6,
	QS2D_KEY_D = 7,
	QS2D_KEY_E = 8,
	QS2D_KEY_F = 9,
	QS2D_KEY_G = 10,
	QS2D_KEY_H = 11,
	QS2D_KEY_I = 12,
	QS2D_KEY_J = 13,
	QS2D_KEY_K = 14,
	QS2D_KEY_L = 15,
	QS2D_KEY_M = 16,
	QS2D_KEY_N = 17,
	QS2D_KEY_O = 18,
	QS2D_KEY_P = 19,
	QS2D_KEY_Q = 20,
	QS2D_KEY_R = 21,
	QS2D_KEY_S = 22,
	QS2D_KEY_T = 23,
	QS2D_KEY_U = 24,
	QS2D_KEY_V = 25,
	QS2D_KEY_W = 26,
	QS2D_KEY_X = 27,
	QS2D_KEY_Y = 28,
	QS2D_KEY_Z = 29,
	QS2D_KEY_1 = 30,
	QS2D_KEY_2 = 31,
	QS2D_KEY_3 = 32,
	QS2D_KEY_4 = 33,
	QS2D_KEY_5 = 34,
	QS2D_KEY_6 = 35,
	QS2D_KEY_7 = 36,
	QS2D_KEY_8 = 37,
	QS2D_KEY_9 = 38,
	QS2D_KEY_0 = 39,
	QS2D_KEY_RETURN = 40,
	QS2D_KEY_ESCAPE = 41,
	QS2D_KEY_BACKSPACE = 42,
	QS2D_KEY_TAB = 43,
	QS2D_KEY_SPACE = 44,
	QS2D_KEY_MINUS = 45,
	QS2D_KEY_EQUALS = 46,
	QS2D_KEY_LEFTBRACKET = 47,
	QS2D_KEY_RIGHTBRACKET = 48,
	QS2D_KEY_BACKSLASH = 49,
	QS2D_KEY_NONUSHASH = 50,
	QS2D_KEY_SEMICOLON = 51,
	QS2D_KEY_APOSTROPHE = 52,
	QS2D_KEY_GRAVE = 53,
	QS2D_KEY_COMMA = 54,
	QS2D_KEY_PERIOD = 55,
	QS2D_KEY_SLASH = 56,
	QS2D_KEY_CAPSLOCK = 57,
	QS2D_KEY_F1 = 58,
	QS2D_KEY_F2 = 59,
	QS2D_KEY_F3 = 60,
	QS2D_KEY_F4 = 61,
	QS2D_KEY_F5 = 62,
	QS2D_KEY_F6 = 63,
	QS2D_KEY_F7 = 64,
	QS2D_KEY_F8 = 65,
	QS2D_KEY_F9 = 66,
	QS2D_KEY_F10 = 67,
	QS2D_KEY_F11 = 68,
	QS2D_KEY_F12 = 69,
	QS2D_KEY_PRINTSCREEN = 70,
	QS2D_KEY_SCROLLLOCK = 71,
	QS2D_KEY_PAUSE = 72,
	QS2D_KEY_INSERT = 73,
	QS2D_KEY_HOME = 74,
	QS2D_KEY_PAGEUP = 75,
	QS2D_KEY_DELETE = 76,
	QS2D_KEY_END = 77,
	QS2D_KEY_PAGEDOWN = 78,
	QS2D_KEY_RIGHT = 79,
	QS2D_KEY_LEFT = 80,
	QS2D_KEY_DOWN = 81,
	QS2D_KEY_UP = 82,
	QS2D_KEY_NUMLOCKCLEAR = 83,
	QS2D_KEY_KP_DIVIDE = 84,
	QS2D_KEY_KP_MULTIPLY = 85,
	QS2D_KEY_KP_MINUS = 86,
	QS2D_KEY_KP_PLUS = 87,
	QS2D_KEY_KP_ENTER = 88,
	QS2D_KEY_KP_1 = 89,
	QS2D_KEY_KP_2 = 90,
	QS2D_KEY_KP_3 = 91,
	QS2D_KEY_KP_4 = 92,
	QS2D_KEY_KP_5 = 93,
	QS2D_KEY_KP_6 = 94,
	QS2D_KEY_KP_7 = 95,
	QS2D_KEY_KP_8 = 96,
	QS2D_KEY_KP_9 = 97,
	QS2D_KEY_KP_0 = 98,
	QS2D_KEY_KP_PERIOD = 99,
	QS2D_KEY_NONUSBACKSLASH = 100,
	QS2D_KEY_APPLICATION = 101,
	QS2D_KEY_POWER = 102,
	QS2D_KEY_KP_EQUALS = 103,
	QS2D_KEY_F13 = 104,
	QS2D_KEY_F14 = 105,
	QS2D_KEY_F15 = 106,
	QS2D_KEY_F16 = 107,
	QS2D_KEY_F17 = 108,
	QS2D_KEY_F18 = 109,
	QS2D_KEY_F19 = 110,
	QS2D_KEY_F20 = 111,
	QS2D_KEY_F21 = 112,
	QS2D_KEY_F22 = 113,
	QS2D_KEY_F23 = 114,
	QS2D_KEY_F24 = 115,
	QS2D_KEY_EXECUTE = 116,
	QS2D_KEY_HELP = 117,
	QS2D_KEY_MENU = 118,
	QS2D_KEY_SELECT = 119,
	QS2D_KEY_STOP = 120,
	QS2D_KEY_AGAIN = 121,
	QS2D_KEY_UNDO = 122,
	QS2D_KEY_CUT = 123,
	QS2D_KEY_COPY = 124,
	QS2D_KEY_PASTE = 125,
	QS2D_KEY_FIND = 126,
	QS2D_KEY_MUTE = 127,
	QS2D_KEY_VOLUMEUP = 128,
	QS2D_KEY_VOLUMEDOWN = 129,
	QS2D_KEY_KP_COMMA = 133,
	QS2D_KEY_KP_EQUALSAS400 = 134,
	QS2D_KEY_INTERNATIONAL1 = 135,
	QS2D_KEY_INTERNATIONAL2 = 136,
	QS2D_KEY_INTERNATIONAL3 = 137,
	QS2D_KEY_INTERNATIONAL4 = 138,
	QS2D_KEY_INTERNATIONAL5 = 139,
	QS2D_KEY_INTERNATIONAL6 = 140,
	QS2D_KEY_INTERNATIONAL7 = 141,
	QS2D_KEY_INTERNATIONAL8 = 142,
	QS2D_KEY_INTERNATIONAL9 = 143,
	QS2D_KEY_LANG1 = 144,
	QS2D_KEY_LANG2 = 145,
	QS2D_KEY_LANG3 = 146,
	QS2D_KEY_LANG4 = 147,
	QS2D_KEY_LANG5 = 148,
	QS2D_KEY_LANG6 = 149,
	QS2D_KEY_LANG7 = 150,
	QS2D_KEY_LANG8 = 151,
	QS2D_KEY_LANG9 = 152,
	QS2D_KEY_ALTERASE = 153,
	QS2D_KEY_SYSREQ = 154,
	QS2D_KEY_CANCEL = 155,
	QS2D_KEY_CLEAR = 156,
	QS2D_KEY_PRIOR = 157,
	QS2D_KEY_RETURN2 = 158,
	QS2D_KEY_SEPARATOR = 159,
	QS2D_KEY_OUT = 160,
	QS2D_KEY_OPER = 161,
	QS2D_KEY_CLEARAGAIN = 162,
	QS2D_KEY_CRSEL = 163,
	QS2D_KEY_EXSEL = 164,
	QS2D_KEY_KP_00 = 176,
	QS2D_KEY_KP_000 = 177,
	QS2D_KEY_THOUSANDSSEPARATOR = 178,
	QS2D_KEY_DECIMALSEPARATOR = 179,
	QS2D_KEY_CURRENCYUNIT = 180,
	QS2D_KEY_CURRENCYSUBUNIT = 181,
	QS2D_KEY_KP_LEFTPAREN = 182,
	QS2D_KEY_KP_RIGHTPAREN = 183,
	QS2D_KEY_KP_LEFTBRACE = 184,
	QS2D_KEY_KP_RIGHTBRACE = 185,
	QS2D_KEY_KP_TAB = 186,
	QS2D_KEY_KP_BACKSPACE = 187,
	QS2D_KEY_KP_A = 188,
	QS2D_KEY_KP_B = 189,
	QS2D_KEY_KP_C = 190,
	QS2D_KEY_KP_D = 191,
	QS2D_KEY_KP_E = 192,
	QS2D_KEY_KP_F = 193,
	QS2D_KEY_KP_XOR = 194,
	QS2D_KEY_KP_POWER = 195,
	QS2D_KEY_KP_PERCENT = 196,
	QS2D_KEY_KP_LESS = 197,
	QS2D_KEY_KP_GREATER = 198,
	QS2D_KEY_KP_AMPERSAND = 199,
	QS2D_KEY_KP_DBLAMPERSAND = 200,
	QS2D_KEY_KP_VERTICALBAR = 201,
	QS2D_KEY_KP_DBLVERTICALBAR = 202,
	QS2D_KEY_KP_COLON = 203,
	QS2D_KEY_KP_HASH = 204,
	QS2D_KEY_KP_SPACE = 205,
	QS2D_KEY_KP_AT = 206,
	QS2D_KEY_KP_EXCLAM = 207,
	QS2D_KEY_KP_MEMSTORE = 208,
	QS2D_KEY_KP_MEMRECALL = 209,
	QS2D_KEY_KP_MEMCLEAR = 210,
	QS2D_KEY_KP_MEMADD = 211,
	QS2D_KEY_KP_MEMSUBTRACT = 212,
	QS2D_KEY_KP_MEMMULTIPLY = 213,
	QS2D_KEY_KP_MEMDIVIDE = 214,
	QS2D_KEY_KP_PLUSMINUS = 215,
	QS2D_KEY_KP_CLEAR = 216,
	QS2D_KEY_KP_CLEARENTRY = 217,
	QS2D_KEY_KP_BINARY = 218,
	QS2D_KEY_KP_OCTAL = 219,
	QS2D_KEY_KP_DECIMAL = 220,
	QS2D_KEY_KP_HEXADECIMAL = 221,
	QS2D_KEY_LCTRL = 224,
	QS2D_KEY_LSHIFT = 225,
	QS2D_KEY_LALT = 226,
	QS2D_KEY_LGUI = 227,
	QS2D_KEY_RCTRL = 228,
	QS2D_KEY_RSHIFT = 229,
	QS2D_KEY_RALT = 230,
	QS2D_KEY_RGUI = 231,
	QS2D_KEY_MODE = 257,
	QS2D_KEY_AUDIONEXT = 258,
	QS2D_KEY_AUDIOPREV = 259,
	QS2D_KEY_AUDIOSTOP = 260,
	QS2D_KEY_AUDIOPLAY = 261,
	QS2D_KEY_AUDIOMUTE = 262,
	QS2D_KEY_MEDIASELECT = 263,
	QS2D_KEY_WWW = 264,
	QS2D_KEY_MAIL = 265,
	QS2D_KEY_CALCULATOR = 266,
	QS2D_KEY_COMPUTER = 267,
	QS2D_KEY_AC_SEARCH = 268,
	QS2D_KEY_AC_HOME = 269,
	QS2D_KEY_AC_BACK = 270,
	QS2D_KEY_AC_FORWARD = 271,
	QS2D_KEY_AC_STOP = 272,
	QS2D_KEY_AC_REFRESH = 273,
	QS2D_KEY_AC_BOOKMARKS = 274,
	QS2D_KEY_BRIGHTNESSDOWN = 275,
	QS2D_KEY_BRIGHTNESSUP = 276,
	QS2D_KEY_DISPLAYSWITCH = 277,
	QS2D_KEY_KBDILLUMTOGGLE = 278,
	QS2D_KEY_KBDILLUMDOWN = 279,
	QS2D_KEY_KBDILLUMUP = 280,
	QS2D_KEY_EJECT = 281,
	QS2D_KEY_SLEEP = 282,
	QS2D_KEY_APP1 = 283,
	QS2D_KEY_APP2 = 284,
	QS2D_KEY_AUDIOREWIND = 285,
	QS2D_KEY_AUDIOFASTFORWARD = 286,
	QS2D_KEY_SCANCODES = 512,
};
