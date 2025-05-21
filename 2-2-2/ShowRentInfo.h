#pragma once
#include "CurrentLoginUser.h"
class ShowRentInfoUI;

//자전거 대여 정보 조회 기능 수행을 위한 control class
class ShowRentInfo {
	ShowRentInfoUI* pShowRentInfoUI = nullptr;	//boundary class의 레퍼런스
	CurrentLoginUser* pCurrentLoginUser = nullptr;	//CurrentLoginUser의 레퍼런스
public:
	//현재 접속 중인 유저가 빌린 자전거들의 id, 제품명을 출력한다
	ShowRentInfo(CurrentLoginUser* pCurrentLoginUser, ofstream& out_fp);
};