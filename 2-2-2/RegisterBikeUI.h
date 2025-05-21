#pragma once
#include "RegisterBike.h"
class RegisterBike;

//자전거 등록 기능 수행을 위한 boudnary class
class RegisterBikeUI {
    RegisterBike* pRegisterBike;    //control class의 레퍼런스
    ofstream& out_fp;   //결과 출력을 위한 out_fp의 레퍼런스
public:
    //boundary class가 생성될 때 control class의 레퍼런스, 결과 출력을 위해 out_fp의 레퍼런스를 넘겨받음
    RegisterBikeUI(RegisterBike* pRegisterBike, ofstream& out_fp)
        :pRegisterBike(pRegisterBike), out_fp(out_fp) {}

    //화면 출력
    void startInterface();

    //관리자에게 자전거의 id, 제품명을 입력받아 해당되는 자전거를 추가
    void registerBike(string id, string productName);
};