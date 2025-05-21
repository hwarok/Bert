// 헤더 선언
#include <fstream>
#include <iostream>
#include <string>

#include "Account.h"
#include "AccountCollection.h"
#include "Bike.h"
#include "BikeCollection.h"
#include "CurrentLoginUser.h"
#include "RentedBike.h"
#include "SignUp.h"
#include "SignUpUI.h"
#include "Login.h"
#include "LoginUI.h"
#include "Logout.h"
#include "LogoutUI.h"
#include "RegisterBike.h"
#include "RegisterBikeUI.h"
#include "RentBike.h"
#include "RentBikeUI.h"
#include "ShowRentInfo.h"
#include "ShowRentInfoUI.h"

using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 변수 선언
ofstream out_fp;
ifstream in_fp;

// 함수 선언
void doTask();
void program_exit();

int main()
{
    // 파일 입출력을 위한 초기화
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    doTask();

    out_fp.close();
    in_fp.close();

    return 0;
}

void doTask()
{   
    //AccountCollection을 생성하여 관리자의 Account(id = admin, password = admin)을 추가
    AccountCollection* pAccountCollection = new AccountCollection;  
    pAccountCollection->addNewAccount("admin", "admin");

    CurrentLoginUser* pCurrentLoginUser = new CurrentLoginUser; //CurrentLoginUser 생성
    BikeCollection* pBikeCollection = new BikeCollection;   //BikeCollection 생성

    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu_level_1 >> menu_level_2;


        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. 회원가입" 메뉴 부분
            {
                SignUp* pSignUp = new SignUp(pAccountCollection, out_fp);   //control class 생성, AccountCollection, out_fp의 레퍼런스 전달
                SignUpUI* pSignUpUI = pSignUp->getpSignUpUI();  //control class가 생성한 boundary class 받아오기

                //입력받기
                string id, password, phonenumber;
                in_fp >> id >> password >> phonenumber;
                pSignUpUI->signUp(id, password, phonenumber);   //boundary class의 signUp 호출, 매개변수는 계정의 id, password, 전화번호

                delete pSignUp;
                delete pSignUpUI;
                break;
            }
            }
            break;
        }
        case 2:
        {
            switch (menu_level_2)
            {
            case 1: // "2.1. 로그인" 메뉴 부분
            {
                Login* pLogin = new Login(pAccountCollection, pCurrentLoginUser, out_fp);   //control class 생성, AccountCollection, CurrentLoginUser, out_fp의 레퍼런스 전달
                LoginUI* pLoginUI = pLogin->getpLoginUI();  //control class가 생성한 boundary class 받아오기

                //입력받기
                string id, password;
                in_fp >> id >> password;
                pLoginUI->login(id, password);  //boundary class의 login 호출, 매개변수는 계정의 id, password

                delete pLogin;
                delete pLoginUI;
                break;
            }
            case 2: // "2.2. 로그아웃" 메뉴 부분
            {
                Logout* pLogout = new Logout(pCurrentLoginUser, out_fp);    //control class 생성, CurrentLoginUser, out_fp의 레퍼런스 전달
                LogoutUI* pLogoutUI = pLogout->getpLogoutUI();  //control class가 생성한 boundary class 받아오기

                pLogoutUI->logout();    //boundary class의 logout 호출

                delete pLogout;
                delete pLogoutUI;
                break;
            }
            }
            break;
        }
        case 3:
        {
            switch (menu_level_2)
            {
            case 1: // "3.1. 자전거 등록" 메뉴 부분
            {
                RegisterBike* pRegisterBike = new RegisterBike(pBikeCollection, out_fp);    //control class 생성, BikeCollection, out_fp의 레퍼런스 전달
                RegisterBikeUI* pRegisterBikeUI = pRegisterBike->getpRegisterBikeUI();  //control class가 생성한 boundary class 받아오기

                //입력받기
                string id, productName;
                in_fp >> id >> productName;
                pRegisterBikeUI->registerBike(id, productName); //boundary class의 registerBike 호출, 매개변수는 자전거의 id, 제품명

                delete pRegisterBike;
                delete pRegisterBikeUI;
                break;
            }
            }
            break;
        }
        case 4:
        {
            switch (menu_level_2)
            {
            case 1: // "4.1. 자전거 대여" 메뉴 부분
            {
                RentBike* pRentBike = new RentBike(pCurrentLoginUser, pBikeCollection, out_fp); //control class 생성, CurrentLoginUser, BikeCollection, out_fp의 레퍼런스 전달
                RentBikeUI* pRentBikeUI = pRentBike->getpRentBikeUI();  //control class가 생성한 boundary class 받아오기
                    
                //입력받기
                string id;
                in_fp >> id;
                pRentBikeUI->rentBike(id);  //boundary class의 rentBike 호출, 매개변수는 자전거의 id

                delete pRentBike;
                delete pRentBikeUI;
                break;
            }
            }
            break;
        }
        case 5:
        {
            switch (menu_level_2)
            {
            case 1: // "5.1. 자전거 대여 리스트" 메뉴 부분
            {
                ShowRentInfo* pShowRentInfo = new ShowRentInfo(pCurrentLoginUser, out_fp);  //control class 생성, CurrentLoginUser, out_fp의 레퍼런스 전달
                delete pShowRentInfo;
                break;
            }
            }
            break;
        }
        case 6:
        {
            switch (menu_level_2)
            {
            case 1:   // "6.1. 종료" 메뉴 부분
            {
                is_program_exit = 1;
                break;;
            }
            }
            break;
        }
        }
    }
    program_exit();  //프로그램 종료
    delete pAccountCollection;
    delete pCurrentLoginUser;
    delete pBikeCollection;
}

void program_exit() {
    out_fp << "6.1. 종료"; //종료 메세지 출력
}