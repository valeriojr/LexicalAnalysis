/*
    Auto generated on 01/09/2021
*/

#pragma once

#include <unordered_map>

#define TOKEN_CATEGORY_NAME_MAX_LEN 20
#define TOKEN_CATEGORY_COUNT 51
#define STATE_COUNT 45


enum TokenCategory {
    Invalid = -1,
	Arrow = 0,
	Assignment = 1,
	Bool = 2,
	Break = 3,
	By = 4,
	Character = 5,
	CloseBraces = 6,
	CloseBrackets = 7,
	CloseParenthesis = 8,
	Comma = 9,
	Dot = 10,
	Ellipsis = 11,
	Else = 12,
	EndOfLine = 13,
	Float = 14,
	For = 15,
	Func = 16,
	Identifier = 17,
	If = 18,
	In = 19,
	Integer = 20,
	OpAdd = 21,
	OpAnd = 22,
	OpDiv = 23,
	OpEq = 24,
	OpGt = 25,
	OpGte = 26,
	OpLt = 27,
	OpLte = 28,
	OpMod = 29,
	OpMul = 30,
	OpNeq = 31,
	OpNot = 32,
	OpOr = 33,
	OpSub = 34,
	OpenBraces = 35,
	OpenBrackets = 36,
	OpenParenthesis = 37,
	Print = 38,
	Proc = 39,
	Return = 40,
	Scan = 41,
	SemiColon = 42,
	Skip = 43,
	String = 44,
	TypeBool = 45,
	TypeChar = 46,
	TypeFloat = 47,
	TypeInt = 48,
	TypeString = 49,
	While = 50
};


extern const char TokenCategoryNames[TOKEN_CATEGORY_COUNT][TOKEN_CATEGORY_NAME_MAX_LEN];
extern std::unordered_map<char, int> transitions[STATE_COUNT];
extern const TokenCategory stateToken[STATE_COUNT];
extern std::unordered_map<std::string, int> keywords;


std::ostream& operator<<(std::ostream& stream, const TokenCategory& category);
