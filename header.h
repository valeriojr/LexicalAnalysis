/*
    Auto generated on 31/08/2021
*/

#pragma once

#include <unordered_map>

#define TOKEN_CATEGORY_NAME_MAX_LEN 20
#define TOKEN_CATEGORY_COUNT 42
#define STATE_COUNT 44


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
	Comment = 7,
	Dot = 8,
	Ellipsis = 9,
	Else = 10,
	Float = 11,
	For = 12,
	Identifier = 13,
	If = 14,
	Integer = 15,
	OpAdd = 16,
	OpAnd = 17,
	OpDiv = 18,
	OpEq = 19,
	OpGt = 20,
	OpGte = 21,
	OpLt = 22,
	OpLte = 23,
	OpMod = 24,
	OpMul = 25,
	OpNeq = 26,
	OpNot = 27,
	OpOr = 28,
	OpSub = 29,
	OpenBraces = 30,
	OpenBrackets = 31,
	OpenParenthesis = 32,
	Return = 33,
	SemiColon = 34,
	String = 35,
	TypeBool = 36,
	TypeChar = 37,
	TypeFloat = 38,
	TypeInt = 39,
	TypeString = 40,
	While = 41
};


extern const char TokenCategoryNames[TOKEN_CATEGORY_COUNT][TOKEN_CATEGORY_NAME_MAX_LEN];
extern std::unordered_map<char, int> transitions[STATE_COUNT];
extern const TokenCategory stateToken[STATE_COUNT];
extern std::unordered_map<std::string, int> keywords;


std::ostream& operator<<(std::ostream& stream, const TokenCategory& category);
