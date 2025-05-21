#pragma once
#include "BikeCollection.h"
#include "RentBikeUI.h"
#include "CurrentLoginUser.h"
class RentBikeUI;

//������ �뿩 ��� ������ ���� control class
class RentBike {
	RentBikeUI* pRentBikeUI = nullptr;	//boundary class�� ���۷���
	CurrentLoginUser* pCurrentLoginUser = nullptr;	//CurrentLoginUser�� ���۷���
	BikeCollection* pBikeCollection = nullptr;	//BikeCollection�� ���۷���
public:
	//control class�� ������ �� CurrentLoginUser�� ���۷���, BikeCollection�� ���۷���, ��� ����� ���� out_fp�� ���۷����� �Ѱܹ���
	RentBike(CurrentLoginUser* pCurrentLoginUser, BikeCollection* pBikeCollection, ofstream& out_fp);

	//���� �������� id�� �Ķ���ͷ� �޾Ƽ� ���� ���� ���� ������ �ش�Ǵ� �����Ÿ� ������. ���� �������� ��ǰ���� ����
	string rentBike(string id);

	RentBikeUI* getpRentBikeUI() { return pRentBikeUI; }	//contorl class�� ������ boundary class�� ���۷����� ����
};