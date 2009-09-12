// afx.h
//
// This is part of FFC (Free Foundation Classes).
//
// Anthor: Linlin Yan (yanlinlin82[at]gmail.com).
//
// Any sugguestion is welcome.

#ifndef __AFX_H__
#define __AFX_H__
///////////////////////////////////////////////////////////////////////////

#include <windows.h>
#include <tchar.h>

#include <cstdio>
#include <cassert>

#include "cstringt.h"

///////////////////////////////////////////////////////////////////////////

#ifndef NDEBUG
#define ASSERT(x) assert(x)
#else
#define ASSERT(x)
#endif

#ifndef NDEBUG
#define TRACE(...) printf(__VA_ARGS__)
#else
#define TRACE(...)
#endif

///////////////////////////////////////////////////////////////////////////

class CObject
{
public:
	virtual ~CObject() { }
};

///////////////////////////////////////////////////////////////////////////

class CException : public CObject
{
};

///////////////////////////////////////////////////////////////////////////

class CFile : public CObject
{
};

///////////////////////////////////////////////////////////////////////////

#define AFXAPI

///////////////////////////////////////////////////////////////////////////

BOOL AFXAPI AfxWinInit(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPTSTR lpCmdLine,
	int nCmdShow);

///////////////////////////////////////////////////////////////////////////
#endif//__AFX_H__

