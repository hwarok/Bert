#pragma once
#include "CurrentLoginUser.h"
class ShowRentInfoUI;

//������ �뿩 ���� ��ȸ ��� ������ ���� control class
class ShowRentInfo {
	ShowRentInfoUI* pShowRentInfoUI = nullptr;	//boundary class�� ���۷���
	CurrentLoginUser* pCurrentLoginUser = nullptr;	//CurrentLoginUser�� ���۷���
public:
	//���� ���� ���� ������ ���� �����ŵ��� id, ��ǰ���� ����Ѵ�
	ShowRentInfo(CurrentLoginUser* pCurrentLoginUser, ofstream& out_fp);
};