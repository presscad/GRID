#pragma once
class CMyPoint
{
public:
	CMyPoint();
	CMyPoint(CString initPNumb, float initX, float initY, float initZ);
	~CMyPoint();

	CString PNumb;
	float  x, y, z;
	float angle;//�����ļнǴ�С
	int nw;//���߽������
	double TU;//�������

	//��GRIDDlg���л�������һ���������Ȩ������̵߳ĺ���
};

