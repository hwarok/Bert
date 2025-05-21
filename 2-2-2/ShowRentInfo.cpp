#include "ShowRentInfo.h"
#include "ShowRentInfoUI.h"
#include <vector>
using namespace std;

//현재 접속 중인 유저가 빌린 자전거들의 id, 제품명을 출력한다
ShowRentInfo::ShowRentInfo(CurrentLoginUser* pCurrentLoginUser, ofstream& out_fp) {
	//레퍼런스를 넘겨받음
	this->pCurrentLoginUser = pCurrentLoginUser;

	//boundary class를 생성하고 out_fp의 레퍼런스를 전달
	pShowRentInfoUI = new ShowRentInfoUI(out_fp);

	//현재 접속 중인 유저의 Account의 레퍼런스를 받아옴
	Account* currentLoginUser = pCurrentLoginUser->getCurrentLoginUser();

	//현재 접속 중인 유저가 빌린 자전거들의 레퍼런스들을 받아옴
	vector<Bike*> rentBikes = currentLoginUser->listRentedBike();

	//현재 접속 중인 유저가 빌린 자전거들의 id, 제품명 들을 파라미터로 넘기며, startInterface로 화면에 출력한다.
	vector<pair<string, string>> rentInfo;
	for (int i = 0; i < rentBikes.size(); i++)
		rentInfo.push_back({ rentBikes[i]->getID(), rentBikes[i]->getProductName()});
	pShowRentInfoUI->startInterface(rentInfo);
}