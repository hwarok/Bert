#include <string>
#include <fstream>
#include "SignUp.h"
#include "SignUpUI.h"
using namespace std;

//control class가 생성될 때 AccountCollection의 레퍼런스, 결과 출력을 위해 out_fp의 레퍼런스를 넘겨받음
SignUp::SignUp(AccountCollection* pAccountCollection, ofstream& out_fp) {
    //레퍼런스를 넘겨받음
    this->pAccountCollection = pAccountCollection;
    
    //boundary class를 생성하고 control class, out_fp의 레퍼런스를 전달. startInterface()를 호출하여 화면을 출력
    pSignUpUI = new SignUpUI(this, out_fp);
    pSignUpUI->startInterface();
}

//계정의 id, password, 전화번호를 파라미터로 받아서 해당되는 계정을 새로 생성
void SignUp::signUpNewUser(string id, string password, string phonenumber) {
    pAccountCollection->addNewAccount(id, password, phonenumber);   //AccountCollection에게 id, password, 전화번호를 파라미터로 넘겨서 해당되는 계정 추가 요청
}