#include <fstream>
#include <string>
#include "RentBikeUI.h"
using namespace std;

//ȭ�� ���
void RentBikeUI::startInterface() {
	out_fp << "4.1. ������ �뿩" << endl;    //ȭ�� ���
}

//�������� �������� id�� �Է¹޾� �ش� �����Ÿ� ������
void RentBikeUI::rentBike(string id) {
	string productName = pRentBike->rentBike(id);	//control class���� �������� id�� �Ѱ� �ش� �����Ÿ� ���� ���� ��û. �ش� �������� ��ǰ���� �޾ƿ�
	out_fp << "> " << id << " " << productName << endl << endl;  //��� ���
}