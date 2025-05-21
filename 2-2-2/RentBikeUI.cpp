#include <fstream>
#include <string>
#include "RentBikeUI.h"
using namespace std;

//화면 출력
void RentBikeUI::startInterface() {
	out_fp << "4.1. 자전거 대여" << endl;    //화면 출력
}

//유저에게 자전거의 id를 입력받아 해당 자전거를 빌린다
void RentBikeUI::rentBike(string id) {
	string productName = pRentBike->rentBike(id);	//control class에게 자전거의 id를 넘겨 해당 자전거를 빌릴 것을 요청. 해당 자전거의 제품명을 받아옴
	out_fp << "> " << id << " " << productName << endl << endl;  //결과 출력
}