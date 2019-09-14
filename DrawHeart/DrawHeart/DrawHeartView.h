
// DrawHeartView.h : CDrawHeartView ��Ľӿ�
//

#pragma once


class CDrawHeartView : public CView
{
protected: // �������л�����
	CDrawHeartView();
	DECLARE_DYNCREATE(CDrawHeartView)

// ����
public:
	CDrawHeartDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

	void Define_OriginalPoint(CDC *pDC);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CDrawHeartView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSize(UINT nType, int cx, int cy);
};

#ifndef _DEBUG  // DrawHeartView.cpp �еĵ��԰汾
inline CDrawHeartDoc* CDrawHeartView::GetDocument() const
   { return reinterpret_cast<CDrawHeartDoc*>(m_pDocument); }
#endif
