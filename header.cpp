/*
    Auto generated on 13/09/2021
*/

#include <iostream>
#include <string>

#include "header.h"

const char TokenCategoryNames[TOKEN_CATEGORY_COUNT][TOKEN_CATEGORY_NAME_MAX_LEN] = {
	"Assignment",
	"Bool",
	"Break",
	"Character",
	"CloseBraces",
	"CloseBrackets",
	"CloseParenthesis",
	"Comma",
	"Dot",
	"Ellipsis",
	"Else",
	"EndOfLine",
	"Float",
	"For",
	"Identifier",
	"If",
	"In",
	"Integer",
	"OpAdd",
	"OpAnd",
	"OpConcatenate",
	"OpDiv",
	"OpEq",
	"OpGt",
	"OpGte",
	"OpLt",
	"OpLte",
	"OpMod",
	"OpMul",
	"OpNeq",
	"OpNot",
	"OpOr",
	"OpSub",
	"OpenBraces",
	"OpenBrackets",
	"OpenParenthesis",
	"Print",
	"Return",
	"Scan",
	"SemiColon",
	"Skip",
	"String",
	"TypeBool",
	"TypeChar",
	"TypeFloat",
	"TypeInt",
	"TypeString",
	"Void",
	"While"
};


std::unordered_map<char, int> transitions[STATE_COUNT] = {
	std::unordered_map<char, int>({ {40, 1}, {41, 2}, {91, 3}, {93, 4}, {123, 5}, {125, 6}, {43, 7}, {42, 9}, {45, 8}, {37, 11}, {47, 10}, {95, 12}, {97, 12}, {98, 12}, {99, 12}, {100, 12}, {101, 12}, {102, 12}, {103, 12}, {104, 12}, {105, 12}, {106, 12}, {107, 12}, {108, 12}, {109, 12}, {110, 12}, {111, 12}, {112, 12}, {113, 12}, {114, 12}, {115, 12}, {116, 12}, {117, 12}, {118, 12}, {119, 12}, {120, 12}, {121, 12}, {122, 12}, {65, 12}, {66, 12}, {67, 12}, {68, 12}, {69, 12}, {70, 12}, {71, 12}, {72, 12}, {73, 12}, {74, 12}, {75, 12}, {76, 12}, {77, 12}, {78, 12}, {79, 12}, {80, 12}, {81, 12}, {82, 12}, {83, 12}, {84, 12}, {85, 12}, {86, 12}, {87, 12}, {88, 12}, {89, 12}, {90, 12}, {62, 13}, {60, 14}, {61, 17}, {33, 20}, {48, 21}, {49, 22}, {50, 22}, {51, 22}, {52, 22}, {53, 22}, {54, 22}, {55, 22}, {56, 22}, {57, 22}, {39, 25}, {34, 28}, {38, 31}, {124, 32}, {59, 35}, {44, 36}, {46, 37} }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({ {49, 22}, {50, 22}, {51, 22}, {52, 22}, {53, 22}, {54, 22}, {55, 22}, {56, 22}, {57, 22}, {48, 42}, {43, 44} }),
	std::unordered_map<char, int>({ {49, 22}, {50, 22}, {51, 22}, {52, 22}, {53, 22}, {54, 22}, {55, 22}, {56, 22}, {57, 22}, {48, 42} }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({ {47, 43} }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({ {95, 12}, {97, 12}, {98, 12}, {99, 12}, {100, 12}, {101, 12}, {102, 12}, {103, 12}, {104, 12}, {105, 12}, {106, 12}, {107, 12}, {108, 12}, {109, 12}, {110, 12}, {111, 12}, {112, 12}, {113, 12}, {114, 12}, {115, 12}, {116, 12}, {117, 12}, {118, 12}, {119, 12}, {120, 12}, {121, 12}, {122, 12}, {65, 12}, {66, 12}, {67, 12}, {68, 12}, {69, 12}, {70, 12}, {71, 12}, {72, 12}, {73, 12}, {74, 12}, {75, 12}, {76, 12}, {77, 12}, {78, 12}, {79, 12}, {80, 12}, {81, 12}, {82, 12}, {83, 12}, {84, 12}, {85, 12}, {86, 12}, {87, 12}, {88, 12}, {89, 12}, {90, 12}, {48, 12}, {49, 12}, {50, 12}, {51, 12}, {52, 12}, {53, 12}, {54, 12}, {55, 12}, {56, 12}, {57, 12} }),
	std::unordered_map<char, int>({ {61, 15} }),
	std::unordered_map<char, int>({ {61, 16} }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({ {61, 18} }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({ {61, 19} }),
	std::unordered_map<char, int>({ {46, 23} }),
	std::unordered_map<char, int>({ {48, 22}, {49, 22}, {50, 22}, {51, 22}, {52, 22}, {53, 22}, {54, 22}, {55, 22}, {56, 22}, {57, 22}, {46, 23} }),
	std::unordered_map<char, int>({ {48, 24}, {49, 24}, {50, 24}, {51, 24}, {52, 24}, {53, 24}, {54, 24}, {55, 24}, {56, 24}, {57, 24} }),
	std::unordered_map<char, int>({ {48, 24}, {49, 24}, {50, 24}, {51, 24}, {52, 24}, {53, 24}, {54, 24}, {55, 24}, {56, 24}, {57, 24} }),
	std::unordered_map<char, int>({ {48, 26}, {49, 26}, {50, 26}, {51, 26}, {52, 26}, {53, 26}, {54, 26}, {55, 26}, {56, 26}, {57, 26}, {97, 26}, {98, 26}, {99, 26}, {100, 26}, {101, 26}, {102, 26}, {103, 26}, {104, 26}, {105, 26}, {106, 26}, {107, 26}, {108, 26}, {109, 26}, {110, 26}, {111, 26}, {112, 26}, {113, 26}, {114, 26}, {115, 26}, {116, 26}, {117, 26}, {118, 26}, {119, 26}, {120, 26}, {121, 26}, {122, 26}, {65, 26}, {66, 26}, {67, 26}, {68, 26}, {69, 26}, {70, 26}, {71, 26}, {72, 26}, {73, 26}, {74, 26}, {75, 26}, {76, 26}, {77, 26}, {78, 26}, {79, 26}, {80, 26}, {81, 26}, {82, 26}, {83, 26}, {84, 26}, {85, 26}, {86, 26}, {87, 26}, {88, 26}, {89, 26}, {90, 26}, {33, 26}, {34, 26}, {35, 26}, {36, 26}, {37, 26}, {38, 26}, {39, 26}, {40, 26}, {41, 26}, {42, 26}, {43, 26}, {44, 26}, {45, 26}, {46, 26}, {47, 26}, {58, 26}, {59, 26}, {60, 26}, {61, 26}, {62, 26}, {63, 26}, {64, 26}, {91, 26}, {92, 41}, {93, 26}, {94, 26}, {95, 26}, {96, 26}, {123, 26}, {124, 26}, {125, 26}, {126, 26}, {32, 26}, {9, 26}, {10, 26}, {13, 26}, {11, 26}, {12, 26} }),
	std::unordered_map<char, int>({ {39, 27} }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({ {48, 33}, {49, 33}, {50, 33}, {51, 33}, {52, 33}, {53, 33}, {54, 33}, {55, 33}, {56, 33}, {57, 33}, {97, 33}, {98, 33}, {99, 33}, {100, 33}, {101, 33}, {102, 33}, {103, 33}, {104, 33}, {105, 33}, {106, 33}, {107, 33}, {108, 33}, {109, 33}, {110, 33}, {111, 33}, {112, 33}, {113, 33}, {114, 33}, {115, 33}, {116, 33}, {117, 33}, {118, 33}, {119, 33}, {120, 33}, {121, 33}, {122, 33}, {65, 33}, {66, 33}, {67, 33}, {68, 33}, {69, 33}, {70, 33}, {71, 33}, {72, 33}, {73, 33}, {74, 33}, {75, 33}, {76, 33}, {77, 33}, {78, 33}, {79, 33}, {80, 33}, {81, 33}, {82, 33}, {83, 33}, {84, 33}, {85, 33}, {86, 33}, {87, 33}, {88, 33}, {89, 33}, {90, 33}, {33, 33}, {34, 34}, {35, 33}, {36, 33}, {37, 33}, {38, 33}, {39, 33}, {40, 33}, {41, 33}, {42, 33}, {43, 33}, {44, 33}, {45, 33}, {46, 33}, {47, 33}, {58, 33}, {59, 33}, {60, 33}, {61, 33}, {62, 33}, {63, 33}, {64, 33}, {91, 33}, {92, 33}, {93, 33}, {94, 33}, {95, 33}, {96, 33}, {123, 33}, {124, 33}, {125, 33}, {126, 33}, {32, 33}, {9, 33}, {10, 33}, {13, 33}, {11, 33}, {12, 33} }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({ {38, 29} }),
	std::unordered_map<char, int>({ {124, 30} }),
	std::unordered_map<char, int>({ {48, 33}, {49, 33}, {50, 33}, {51, 33}, {52, 33}, {53, 33}, {54, 33}, {55, 33}, {56, 33}, {57, 33}, {97, 33}, {98, 33}, {99, 33}, {100, 33}, {101, 33}, {102, 33}, {103, 33}, {104, 33}, {105, 33}, {106, 33}, {107, 33}, {108, 33}, {109, 33}, {110, 33}, {111, 33}, {112, 33}, {113, 33}, {114, 33}, {115, 33}, {116, 33}, {117, 33}, {118, 33}, {119, 33}, {120, 33}, {121, 33}, {122, 33}, {65, 33}, {66, 33}, {67, 33}, {68, 33}, {69, 33}, {70, 33}, {71, 33}, {72, 33}, {73, 33}, {74, 33}, {75, 33}, {76, 33}, {77, 33}, {78, 33}, {79, 33}, {80, 33}, {81, 33}, {82, 33}, {83, 33}, {84, 33}, {85, 33}, {86, 33}, {87, 33}, {88, 33}, {89, 33}, {90, 33}, {33, 33}, {34, 34}, {35, 33}, {36, 33}, {37, 33}, {38, 33}, {39, 33}, {40, 33}, {41, 33}, {42, 33}, {43, 33}, {44, 33}, {45, 33}, {46, 33}, {47, 33}, {58, 33}, {59, 33}, {60, 33}, {61, 33}, {62, 33}, {63, 33}, {64, 33}, {91, 33}, {92, 40}, {93, 33}, {94, 33}, {95, 33}, {96, 33}, {123, 33}, {124, 33}, {125, 33}, {126, 33}, {32, 33}, {9, 33}, {10, 33}, {13, 33}, {11, 33}, {12, 33} }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({ {46, 38} }),
	std::unordered_map<char, int>({ {46, 39} }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({ {48, 33}, {49, 33}, {50, 33}, {51, 33}, {52, 33}, {53, 33}, {54, 33}, {55, 33}, {56, 33}, {57, 33}, {97, 33}, {98, 33}, {99, 33}, {100, 33}, {101, 33}, {102, 33}, {103, 33}, {104, 33}, {105, 33}, {106, 33}, {107, 33}, {108, 33}, {109, 33}, {110, 33}, {111, 33}, {112, 33}, {113, 33}, {114, 33}, {115, 33}, {116, 33}, {117, 33}, {118, 33}, {119, 33}, {120, 33}, {121, 33}, {122, 33}, {65, 33}, {66, 33}, {67, 33}, {68, 33}, {69, 33}, {70, 33}, {71, 33}, {72, 33}, {73, 33}, {74, 33}, {75, 33}, {76, 33}, {77, 33}, {78, 33}, {79, 33}, {80, 33}, {81, 33}, {82, 33}, {83, 33}, {84, 33}, {85, 33}, {86, 33}, {87, 33}, {88, 33}, {89, 33}, {90, 33}, {33, 33}, {34, 33}, {35, 33}, {36, 33}, {37, 33}, {38, 33}, {39, 33}, {40, 33}, {41, 33}, {42, 33}, {43, 33}, {44, 33}, {45, 33}, {46, 33}, {47, 33}, {58, 33}, {59, 33}, {60, 33}, {61, 33}, {62, 33}, {63, 33}, {64, 33}, {91, 33}, {92, 33}, {93, 33}, {94, 33}, {95, 33}, {96, 33}, {123, 33}, {124, 33}, {125, 33}, {126, 33}, {32, 33}, {9, 33}, {10, 33}, {13, 33}, {11, 33}, {12, 33} }),
	std::unordered_map<char, int>({ {48, 26}, {49, 26}, {50, 26}, {51, 26}, {52, 26}, {53, 26}, {54, 26}, {55, 26}, {56, 26}, {57, 26}, {97, 26}, {98, 26}, {99, 26}, {100, 26}, {101, 26}, {102, 26}, {103, 26}, {104, 26}, {105, 26}, {106, 26}, {107, 26}, {108, 26}, {109, 26}, {110, 26}, {111, 26}, {112, 26}, {113, 26}, {114, 26}, {115, 26}, {116, 26}, {117, 26}, {118, 26}, {119, 26}, {120, 26}, {121, 26}, {122, 26}, {65, 26}, {66, 26}, {67, 26}, {68, 26}, {69, 26}, {70, 26}, {71, 26}, {72, 26}, {73, 26}, {74, 26}, {75, 26}, {76, 26}, {77, 26}, {78, 26}, {79, 26}, {80, 26}, {81, 26}, {82, 26}, {83, 26}, {84, 26}, {85, 26}, {86, 26}, {87, 26}, {88, 26}, {89, 26}, {90, 26}, {33, 26}, {34, 26}, {35, 26}, {36, 26}, {37, 26}, {38, 26}, {39, 26}, {40, 26}, {41, 26}, {42, 26}, {43, 26}, {44, 26}, {45, 26}, {46, 26}, {47, 26}, {58, 26}, {59, 26}, {60, 26}, {61, 26}, {62, 26}, {63, 26}, {64, 26}, {91, 26}, {92, 26}, {93, 26}, {94, 26}, {95, 26}, {96, 26}, {123, 26}, {124, 26}, {125, 26}, {126, 26}, {32, 26}, {9, 26}, {10, 26}, {13, 26}, {11, 26}, {12, 26} }),
	std::unordered_map<char, int>({ {46, 23} }),
	std::unordered_map<char, int>({  }),
	std::unordered_map<char, int>({  })
};

const TokenCategory stateToken[STATE_COUNT] = {
	Invalid,
	OpenParenthesis,
	CloseParenthesis,
	OpenBrackets,
	CloseBrackets,
	OpenBraces,
	CloseBraces,
	OpAdd,
	OpSub,
	OpMul,
	OpDiv,
	OpMod,
	Identifier,
	OpGt,
	OpLt,
	OpGte,
	OpLte,
	Assignment,
	OpEq,
	OpNeq,
	OpNot,
	Integer,
	Integer,
	Invalid,
	Float,
	Invalid,
	Invalid,
	Character,
	Invalid,
	OpAnd,
	OpOr,
	Invalid,
	Invalid,
	Invalid,
	String,
	SemiColon,
	Comma,
	Dot,
	Invalid,
	Ellipsis,
	Invalid,
	Invalid,
	Invalid,
	EndOfLine,
	OpConcatenate
};

std::unordered_map<std::string, int> keywords = std::unordered_map<std::string, int>({
	{"bool", TypeBool},
	{"break", Break},
	{"char", TypeChar},
	{"if", If},
	{"else", Else},
	{"false", Bool},
	{"float", TypeFloat},
	{"for", For},
	{"int", TypeInt},
	{"in", In},
	{"print", Print},
	{"return", Return},
	{"scan", Scan},
	{"skip", Skip},
	{"string", TypeString},
	{"true", Bool},
	{"void", Void},
	{"while", While}
});


std::ostream& operator<<(std::ostream& stream, const TokenCategory& category) {
    stream << TokenCategoryNames[category];
    return stream;
}
