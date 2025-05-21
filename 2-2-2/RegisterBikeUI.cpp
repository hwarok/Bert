#include <fstream>
#include <string>
#include "RegisterBikeUI.h"
using namespace std;

//화면 출력
void RegisterBikeUI::startInterface() {
    out_fp << "3.1. 자전거 등록" << endl;    //화면 출력
}

//관리자에게 자전거의 id, 제품명을 입력받아 해당되는 자전거를 추가
void RegisterBikeUI::registerBike(string id, string productName) {
    pRegisterBike->registerBike(id, productName);   //control class에게 자전거의 id, 제품명을 넘겨 해당되는 자전거 추가 요청
    out_fp << "> " << id << " " << productName << endl << endl;  //결과 출력
}