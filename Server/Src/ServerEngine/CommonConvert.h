﻿#ifndef __COMMON_CONVERT__
#define __COMMON_CONVERT__

namespace CommonConvert
{
INT32 StringToInt(char* pStr);
INT32 StringToInt(const char* pStr);

FLOAT StringToFloat(char* pStr);
FLOAT StringToFloat(const char* pStr);
std::string IntToString(INT32 nValue);

BOOL  StringToPos(char* pStr, FLOAT& x, FLOAT& y, FLOAT& z);

//浮点到字符串， nPrecision 保留的最大小数的位数， bRound 是否四舍五入
std::string FloatToString(FLOAT fValue, INT32 nPrecision = -1, BOOL bRound = FALSE);

std::wstring Utf8ToUnicode(std::string strValue);

std::string  UnicodeToUft8(std::wstring wstrValue);

BOOL SpliteString(std::string strSrc,  std::string strDelim, std::vector<std::string>& vtStr);
}


#endif /* __COMMON_CONVERT__ */
