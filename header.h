/*
    Auto generated on 08/09/2021
*/

#pragma once

#include <unordered_map>

#define TOKEN_CATEGORY_NAME_MAX_LEN 20
#define TOKEN_CATEGORY_COUNT 49
#define STATE_COUNT 45


enum TokenCategory {
    Invalid = -1,
	Assignment = 0,
	Bool = 1,
	Break = 2,
	Character = 3,
	CloseBraces = 4,
	CloseBrackets = 5,
	CloseParenthesis = 6,
	Comma = 7,
	Dot = 8,
	Ellipsis = 9,
	Else = 10,
	EndOfLine = 11,
	Float = 12,
	For = 13,
	Identifier = 14,
	If = 15,
	In = 16,
	Integer = 17,
	OpAdd = 18,
	OpAnd = 19,
	OpConcatenate = 20,
	OpDiv = 21,
	OpEq = 22,
	OpGt = 23,
	OpGte = 24,
	OpLt = 25,
	OpLte = 26,
	OpMod = 27,
	OpMul = 28,
	OpNeq = 29,
	OpNot = 30,
	OpOr = 31,
	OpSub = 32,
	OpenBraces = 33,
	OpenBrackets = 34,
	OpenParenthesis = 35,
	Print = 36,
	Return = 37,
	Scan = 38,
	SemiColon = 39,
	Skip = 40,
	String = 41,
	TypeBool = 42,
	TypeChar = 43,
	TypeFloat = 44,
	TypeInt = 45,
	TypeString = 46,
	Void = 47,
	While = 48
};


extern const char TokenCategoryNames[TOKEN_CATEGORY_COUNT][TOKEN_CATEGORY_NAME_MAX_LEN];
extern std::unordered_map<char, int> transitions[STATE_COUNT];
extern const TokenCategory stateToken[STATE_COUNT];
extern std::unordered_map<std::string, int> keywords;


std::ostream& operator<<(std::ostream& stream, const TokenCategory& category);
