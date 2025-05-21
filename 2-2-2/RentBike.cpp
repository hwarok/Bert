#include <string>
#include <fstream>
#include "RentBike.h"
#include "CurrentLoginUser.h"
#include "BikeCollection.h"
#include "Account.h"
using namespace std;

//control class�� ������ �� CurrentLoginUser�� ���۷���, BikeCollection�� ���۷���, ��� ����� ���� out_fp�� ���۷����� �Ѱܹ���
RentBike::RentBike(CurrentLoginUser* pCurrentLoginUser, BikeCollection* pBikeCollection, ofstream& out_fp) {
	//���۷������� �Ѱܹ���
	this->pCurrentLoginUser = pCurrentLoginUser;
	this->pBikeCollection = pBikeCollection;

	//boundary class�� �����ϰ� control class, out_fp�� ���۷����� ����. startInterface()�� ȣ���Ͽ� ȭ���� ���
	pRentBikeUI = new RentBikeUI(this, out_fp);
	pRentBikeUI->startInterface();
}

//���� �������� id�� �Ķ���ͷ� �޾Ƽ� ���� ���� ���� ������ �ش�Ǵ� �����Ÿ� ������. ���� �������� ��ǰ���� ����
string RentBike::rentBike(string id) {
	//���� ���� ���� ������ ������ ���۷����� �޾ƿ�
	Account* currentLoginUser = pCurrentLoginUser->getCurrentLoginUser();

	//���� �������� ���۷����� ��ǰ���� �޾ƿ�
	Bike* rentBike = pBikeCollection->getBike(id);
	string productName = rentBike->getProductName();
	
	//���� ���� ���� ������ �ش�Ǵ� �����Ÿ� ������
	currentLoginUser->addRentedBike(rentBike);
	return productName;
}