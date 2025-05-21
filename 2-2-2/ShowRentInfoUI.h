#pragma once
#include "ShowRentInfo.h"
#include <vector>
class ShowRentInfo;

//������ �뿩 ���� ��ȸ ��� ������ ���� boundary class
class ShowRentInfoUI {
	ofstream& out_fp;	//��� ����� ���� out_fp�� ���۷���
public:
	//boundary class�� ������ �� ��� ����� ���� out_fp�� ���۷����� �Ѱܹ���
	ShowRentInfoUI(ofstream& out_fp)
		:out_fp(out_fp) {}

	//���� ���� ���� ������ ���� �����ŵ��� id, ��ǰ�� ����Ʈ�� ȭ�鿡 ���
	void startInterface(vector<pair<string, string>> rentInfo);
};