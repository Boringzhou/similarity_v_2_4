// similarity_v_2_4Dlg.h : ͷ�ļ�
//
#include "cv.h"
#include "highgui.h"
#include "ColorCompare.h"
#include "HoriVert.h"
#include "ContoursCompare.h"
#pragma once


// Csimilarity_v_2_4Dlg �Ի���
class Csimilarity_v_2_4Dlg : public CDialog
{
// ����
public:
	Csimilarity_v_2_4Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_SIMILARITY_V_2_4_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	void Csimilarity_v_2_4Dlg::DrawPicToHDC(IplImage *img, UINT ID);

	afx_msg void OnBnClickedButtonOpenImage1();
	afx_msg void OnBnClickedButtonOpenImage2();
	afx_msg void OnBnClickedButtonColorCompare();
	afx_msg void OnBnClickedButtonContoursCompare();
	afx_msg void OnBnClickedButtonMeanshiftSeg();
	afx_msg void OnBnClickedButtonHVPro();
	afx_msg void OnBnClickedButtonSubRectCompare();
	IplImage* Image1;
	IplImage* Image2;
	CString m_edit2;
	CString m_edit1;
};
