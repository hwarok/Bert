#include <string>
#include <fstream>
#include "RegisterBike.h"
#include "Account.h"
using namespace std;

//control class�� ������ �� BikeCollection�� ���۷���, ��� ����� ���� out_fp�� ���۷����� �Ѱܹ���
RegisterBike::RegisterBike(BikeCollection* pBikeCollection, ofstream& out_fp) {
	//���۷������� �Ѱܹ���
	this->pBikeCollection = pBikeCollection;

	//boundary class�� �����ϰ� control class, out_fp�� ���۷����� ����. startInterface()�� ȣ���Ͽ� ȭ���� ���
	pRegisterBikeUI = new RegisterBikeUI(this, out_fp);
	pRegisterBikeUI->startInterface();
}

//�������� id, ��ǰ���� �Ķ���ͷ� �޾Ƽ� �ش� �����Ÿ� ���
void RegisterBike::registerBike(string id, string productName) {
	pBikeCollection->addNewBike(id, productName);	//BikeCollection���� �ش�Ǵ� Bike ��ü �߰� ��û
}