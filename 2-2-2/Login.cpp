#include <string>
#include <fstream>
#include "Login.h"
#include "Account.h"
using namespace std;

//control class가 생성될 때 AccountCollection의 레퍼런스, CurrentLoginUser의 레퍼런스, 결과 출력을 위해 out_fp의 레퍼런스를 넘겨받음
Login::Login(AccountCollection* pAccountCollection, CurrentLoginUser* pCurrentLoginUser, ofstream& out_fp) {
	//레퍼런스들을 넘겨받음
	this->pAccountCollection = pAccountCollection;
	this->pCurrentLoginUser = pCurrentLoginUser;

	//boundary class를 생성하고 control class, out_fp의 레퍼런스를 전달. startInterface()를 호출하여 화면을 출력
	pLoginUI = new LoginUI(this, out_fp);
	pLoginUI->startInterface();
}

//계정의 id, password를 파라미터로 받아서 해당되는 계정의 유저를 로그인
void Login::loginUser(string id, string password) {
	Account* pAccount = pAccountCollection->getAccount(id, password);	//AccountCollection에서 입력받은 id와 password가 같은 Account의 레퍼런스를 받아옴
	pCurrentLoginUser->setLogin(pAccount);	//CurrentLoginUser에게 해당 Account의 로그인 수행 요청
}