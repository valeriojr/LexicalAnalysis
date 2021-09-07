/*
    Auto generated on 06/09/2021
*/

#pragma once

#include <unordered_map>

#define TOKEN_CATEGORY_NAME_MAX_LEN 20
#define TOKEN_CATEGORY_COUNT 48
#define STATE_COUNT 44


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
	OpDiv = 20,
	OpEq = 21,
	OpGt = 22,
	OpGte = 23,
	OpLt = 24,
	OpLte = 25,
	OpMod = 26,
	OpMul = 27,
	OpNeq = 28,
	OpNot = 29,
	OpOr = 30,
	OpSub = 31,
	OpenBraces = 32,
	OpenBrackets = 33,
	OpenParenthesis = 34,
	Print = 35,
	Return = 36,
	Scan = 37,
	SemiColon = 38,
	Skip = 39,
	String = 40,
	TypeBool = 41,
	TypeChar = 42,
	TypeFloat = 43,
	TypeInt = 44,
	TypeString = 45,
	Void = 46,
	While = 47
};


extern const char TokenCategoryNames[TOKEN_CATEGORY_COUNT][TOKEN_CATEGORY_NAME_MAX_LEN];
extern std::unordered_map<char, int> transitions[STATE_COUNT];
extern const TokenCategory stateToken[STATE_COUNT];
extern std::unordered_map<std::string, int> keywords;


std::ostream& operator<<(std::ostream& stream, const TokenCategory& category);
