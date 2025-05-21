#include "ShowRentInfo.h"
#include "ShowRentInfoUI.h"
#include <vector>
using namespace std;

//���� ���� ���� ������ ���� �����ŵ��� id, ��ǰ���� ����Ѵ�
ShowRentInfo::ShowRentInfo(CurrentLoginUser* pCurrentLoginUser, ofstream& out_fp) {
	//���۷����� �Ѱܹ���
	this->pCurrentLoginUser = pCurrentLoginUser;

	//boundary class�� �����ϰ� out_fp�� ���۷����� ����
	pShowRentInfoUI = new ShowRentInfoUI(out_fp);

	//���� ���� ���� ������ Account�� ���۷����� �޾ƿ�
	Account* currentLoginUser = pCurrentLoginUser->getCurrentLoginUser();

	//���� ���� ���� ������ ���� �����ŵ��� ���۷������� �޾ƿ�
	vector<Bike*> rentBikes = currentLoginUser->listRentedBike();

	//���� ���� ���� ������ ���� �����ŵ��� id, ��ǰ�� ���� �Ķ���ͷ� �ѱ��, startInterface�� ȭ�鿡 ����Ѵ�.
	vector<pair<string, string>> rentInfo;
	for (int i = 0; i < rentBikes.size(); i++)
		rentInfo.push_back({ rentBikes[i]->getID(), rentBikes[i]->getProductName()});
	pShowRentInfoUI->startInterface(rentInfo);
}