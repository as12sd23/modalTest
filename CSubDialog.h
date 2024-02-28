#pragma once
#include "afxdialogex.h"


// CSubDialog 대화 상자

class CSubDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CSubDialog)

public:
	CSubDialog(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CSubDialog();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SUB };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CString m_EditSub;
	afx_msg void OnEnChangeEditSub();
};
