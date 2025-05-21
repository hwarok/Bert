// ��� ����
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

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// ���� ����
ofstream out_fp;
ifstream in_fp;

// �Լ� ����
void doTask();
void program_exit();

int main()
{
    // ���� ������� ���� �ʱ�ȭ
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    doTask();

    out_fp.close();
    in_fp.close();

    return 0;
}

void doTask()
{   
    //AccountCollection�� �����Ͽ� �������� Account(id = admin, password = admin)�� �߰�
    AccountCollection* pAccountCollection = new AccountCollection;  
    pAccountCollection->addNewAccount("admin", "admin");

    CurrentLoginUser* pCurrentLoginUser = new CurrentLoginUser; //CurrentLoginUser ����
    BikeCollection* pBikeCollection = new BikeCollection;   //BikeCollection ����

    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        in_fp >> menu_level_1 >> menu_level_2;


        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. ȸ������" �޴� �κ�
            {
                SignUp* pSignUp = new SignUp(pAccountCollection, out_fp);   //control class ����, AccountCollection, out_fp�� ���۷��� ����
                SignUpUI* pSignUpUI = pSignUp->getpSignUpUI();  //control class�� ������ boundary class �޾ƿ���

                //�Է¹ޱ�
                string id, password, phonenumber;
                in_fp >> id >> password >> phonenumber;
                pSignUpUI->signUp(id, password, phonenumber);   //boundary class�� signUp ȣ��, �Ű������� ������ id, password, ��ȭ��ȣ

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
            case 1: // "2.1. �α���" �޴� �κ�
            {
                Login* pLogin = new Login(pAccountCollection, pCurrentLoginUser, out_fp);   //control class ����, AccountCollection, CurrentLoginUser, out_fp�� ���۷��� ����
                LoginUI* pLoginUI = pLogin->getpLoginUI();  //control class�� ������ boundary class �޾ƿ���

                //�Է¹ޱ�
                string id, password;
                in_fp >> id >> password;
                pLoginUI->login(id, password);  //boundary class�� login ȣ��, �Ű������� ������ id, password

                delete pLogin;
                delete pLoginUI;
                break;
            }
            case 2: // "2.2. �α׾ƿ�" �޴� �κ�
            {
                Logout* pLogout = new Logout(pCurrentLoginUser, out_fp);    //control class ����, CurrentLoginUser, out_fp�� ���۷��� ����
                LogoutUI* pLogoutUI = pLogout->getpLogoutUI();  //control class�� ������ boundary class �޾ƿ���

                pLogoutUI->logout();    //boundary class�� logout ȣ��

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
            case 1: // "3.1. ������ ���" �޴� �κ�
            {
                RegisterBike* pRegisterBike = new RegisterBike(pBikeCollection, out_fp);    //control class ����, BikeCollection, out_fp�� ���۷��� ����
                RegisterBikeUI* pRegisterBikeUI = pRegisterBike->getpRegisterBikeUI();  //control class�� ������ boundary class �޾ƿ���

                //�Է¹ޱ�
                string id, productName;
                in_fp >> id >> productName;
                pRegisterBikeUI->registerBike(id, productName); //boundary class�� registerBike ȣ��, �Ű������� �������� id, ��ǰ��

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
            case 1: // "4.1. ������ �뿩" �޴� �κ�
            {
                RentBike* pRentBike = new RentBike(pCurrentLoginUser, pBikeCollection, out_fp); //control class ����, CurrentLoginUser, BikeCollection, out_fp�� ���۷��� ����
                RentBikeUI* pRentBikeUI = pRentBike->getpRentBikeUI();  //control class�� ������ boundary class �޾ƿ���
                    
                //�Է¹ޱ�
                string id;
                in_fp >> id;
                pRentBikeUI->rentBike(id);  //boundary class�� rentBike ȣ��, �Ű������� �������� id

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
            case 1: // "5.1. ������ �뿩 ����Ʈ" �޴� �κ�
            {
                ShowRentInfo* pShowRentInfo = new ShowRentInfo(pCurrentLoginUser, out_fp);  //control class ����, CurrentLoginUser, out_fp�� ���۷��� ����
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
            case 1:   // "6.1. ����" �޴� �κ�
            {
                is_program_exit = 1;
                break;;
            }
            }
            break;
        }
        }
    }
    program_exit();  //���α׷� ����
    delete pAccountCollection;
    delete pCurrentLoginUser;
    delete pBikeCollection;
}

void program_exit() {
    out_fp << "6.1. ����"; //���� �޼��� ���
}