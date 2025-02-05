﻿#pragma once

#include "CMapTool.h"
#include "CMapObjTool.h"
#include "CPlayerTool.h"
#include "CAnimalTool.h"

class CMyForm : public CFormView
{
	DECLARE_DYNCREATE(CMyForm)

protected:
	CMyForm();           // 동적 만들기에 사용되는 protected 생성자입니다.
	virtual ~CMyForm();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CMyForm };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

private:
	CFont		m_Font;
public:
	//CUnitTool	m_UnitTool;
	CMapTool	m_MapTool;
	CPlayerTool m_PlayerTool;
	CMapObjTool m_MapObjTool;
	CAnimalTool m_AnimalTool;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	virtual void OnInitialUpdate();
	afx_msg void OnPlayerClick();
	afx_msg void OnMapTool();
	afx_msg void OnGrid();
	afx_msg void OnMapObjectTool();
	afx_msg void OnAnimalTool();
};


