#include "Account.h"
#include "Bike.h"
#include "RentedBike.h"

//�������� ���� ������ ������ �߰�. �Ű������� ���� �������� ���۷���
void Account::addRentedBike(Bike* rentBike) {
	rentedBike.addRentedBike(rentBike);	//account�� rentedBike�� addRentedBike�� ȣ���Ͽ� ���� ������ ���� �߰�. �Ű������� ���� �������� ���۷���
}

//�������� ���� �����ŵ��� ���۷������� ����
vector<Bike*> Account::listRentedBike() {
	vector<Bike*> rentBikes = rentedBike.listRentedBike();	//account�� rentedBike�� listRentedBike�� ȣ���Ͽ� ���� �����ŵ��� ���۷������� ���Ϲ޴´�
	return rentBikes;
}