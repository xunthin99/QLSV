#include "menu.h"

int main()
{
	DSLopTC t;
	DSSV dsSV;
	LoadSV(dsSV);
	DSMonHoc dsMH;
	dsMH.n = 0;
	KhoiTaoCay(t);
	LoadTC(t);
	DocFileMonHoc(dsMH);
	Menu();
	resizeConsole(1000, 600);
	GiaoDienMain();
	while (true)
	{
		RunMenu(t, dsMH, dsSV);

	}
	//
	// tree s
//	DSLopTC t;ss
//	KhoiTaoCay(t);
//	LoadTC(t);
//	SaveLopTinChi(t) ;
	//MenuTREE(t);
//	RunMenu ();
//	nodeSinhVien *pHead = NULL; 
//	Menu(pHead);

//	GiaiPhong(pHead);


	// test them sinh vien theo thu tu 
	//////

	system("pause");
	return 0;
}