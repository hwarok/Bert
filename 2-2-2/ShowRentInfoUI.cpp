#include <fstream>
#include "ShowRentInfoUI.h"
using namespace std;

//현재 접속 중인 유저가 빌린 자전거들의 id, 제품명 리스트를 화면에 출력
void ShowRentInfoUI::startInterface(vector<pair<string, string>> rentInfo) {
	//화면 출력
	out_fp << "5.1. 자전거 대여 리스트" << endl;

	//유저가 빌린 자전거들의 id, 제품명 리스트를 화면에 출력
	for (int i = 0; i < rentInfo.size(); i++)
		out_fp << "> " << rentInfo[i].first << " " << rentInfo[i].second << endl;
	out_fp << endl;
}