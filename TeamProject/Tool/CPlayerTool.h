﻿#pragma once
#include "afxdialogex.h"


// CPlayerTool 대화 상자
#include "Include.h"

class CPlayerTool : public CDialog
{
	DECLARE_DYNAMIC(CPlayerTool)

public:
	CPlayerTool(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CPlayerTool();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CPlayerTool };
#endif

private:
	enum PLAYERTYPE{SKIN, HAIR, EYE, SHIRT, PANT};
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	void OnInitialUpdate();
private:
	void Ui_Silder_Set(CSliderCtrl* silder);
	void OnLoadData();
	void ChangeImageColorInitRender();
	void ChangeColor(CImage* image, CEdit* R, CEdit* G, CEdit* B);
	void RenderPlayer();
	void InitDeco();
private:
	CEdit m_skinR;
	CEdit m_skinG;
	CEdit m_skinB;
	CEdit m_hairR;
	CEdit m_hairG;
	CEdit m_hairB;
	CEdit m_eyeR;
	CEdit m_eyeG;
	CEdit m_eyeB;
	CEdit m_shirtR;
	CEdit m_shirtG;
	CEdit m_shirtB;
	CEdit m_pantR;
	CEdit m_pantG;
	CEdit m_pantB;
	CSliderCtrl m_silderSkinR;
	CSliderCtrl m_silderSkinG;
	CSliderCtrl m_silderSkinB;
	CSliderCtrl m_silderHairR;
	CSliderCtrl m_silderHairG;
	CSliderCtrl m_silderHairB;
	CSliderCtrl m_silderEyeR;
	CSliderCtrl m_silderEyeG;
	CSliderCtrl m_silderEyeB;
	CSliderCtrl m_silderShirtR;
	CSliderCtrl m_silderShirtG;
	CSliderCtrl m_silderShirtB;
	CSliderCtrl m_silderPantR;
	CSliderCtrl m_silderPantG;
	CSliderCtrl m_silderPantB;
	CStatic PlayerPreviewImg;

	// 플레이어 원본 이미지
	TCHAR* m_Skin;
	vector<TCHAR*> m_vecHair;
	TCHAR* m_eye;
	TCHAR* m_shirt;
	TCHAR* m_pant;

	//플레이어 커스텀 이미지
	CImage* m_DecoSkin;
	CImage* m_DecoHair;
	CImage* m_Decoeye;
	CImage* m_Decoshirt;
	CImage* m_Decopant;

	int m_hairIndex;
public:
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnFinishColor();
	afx_msg void OnDestroy();
	afx_msg void OnLoadPlayerBasic();
	afx_msg void OnChangeHairType(NMHDR* pNMHDR, LRESULT* pResult);
};
