#include <fstream>
#include "ShowRentInfoUI.h"
using namespace std;

//���� ���� ���� ������ ���� �����ŵ��� id, ��ǰ�� ����Ʈ�� ȭ�鿡 ���
void ShowRentInfoUI::startInterface(vector<pair<string, string>> rentInfo) {
	//ȭ�� ���
	out_fp << "5.1. ������ �뿩 ����Ʈ" << endl;

	//������ ���� �����ŵ��� id, ��ǰ�� ����Ʈ�� ȭ�鿡 ���
	for (int i = 0; i < rentInfo.size(); i++)
		out_fp << "> " << rentInfo[i].first << " " << rentInfo[i].second << endl;
	out_fp << endl;
}