/*
    Auto generated on 29/08/2021
*/

#pragma once

#include <unordered_map>

#define TOKEN_CATEGORY_NAME_MAX_LEN 20
#define TOKEN_CATEGORY_COUNT 41
#define STATE_COUNT 43


enum TokenCategory {
    EndOfFile = -3,
    EndOfLine = -2,
    Invalid = -1,
	Assignment = 0,
	Bool = 1,
	Character = 2,
	CloseBraces = 3,
	CloseBrackets = 4,
	CloseParenthesis = 5,
	Comma = 6,
	Dot = 7,
	Ellipsis = 8,
	Else = 9,
	Float = 10,
	For = 11,
	Identifier = 12,
	If = 13,
	Integer = 14,
	OpAdd = 15,
	OpAnd = 16,
	OpDiv = 17,
	OpEq = 18,
	OpGt = 19,
	OpGte = 20,
	OpLt = 21,
	OpLte = 22,
	OpMod = 23,
	OpMul = 24,
	OpNeq = 25,
	OpNot = 26,
	OpOr = 27,
	OpSub = 28,
	OpenBraces = 29,
	OpenBrackets = 30,
	OpenParenthesis = 31,
	Return = 32,
	SemiColon = 33,
	String = 34,
	TypeBool = 35,
	TypeChar = 36,
	TypeFloat = 37,
	TypeInt = 38,
	TypeString = 39,
	While = 40
};


extern const char TokenCategoryNames[TOKEN_CATEGORY_COUNT][TOKEN_CATEGORY_NAME_MAX_LEN];
extern std::unordered_map<char, int> transitions[STATE_COUNT];
extern const TokenCategory stateToken[STATE_COUNT];
extern std::unordered_map<std::string, int> keywords;


std::ostream& operator<<(std::ostream& stream, const TokenCategory& category);
