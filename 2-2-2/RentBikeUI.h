#pragma once
#include "RentBike.h"
class RentBike;

//������ �뿩 ��� ������ ���� boudnary class
class RentBikeUI {
	RentBike* pRentBike;	//control class�� ���۷���
	ofstream& out_fp;	//��� ����� ���� out_fp�� ���۷���
public:
	//boundary class�� ������ �� control class�� ���۷���, ��� ����� ���� out_fp�� ���۷����� �Ѱܹ���
	RentBikeUI(RentBike* pRentBike, ofstream& out_fp)
		:pRentBike(pRentBike), out_fp(out_fp) {}

	//ȭ�� ���
	void startInterface();

	//�������� �������� id�� �Է¹޾� �ش� �����Ÿ� ������
	void rentBike(string id);
};