#pragma once
#include "BikeCollection.h"
#include "RegisterBikeUI.h"
class RegisterBikeUI;

//������ ��� ��� ������ ���� control class
class RegisterBike {
	RegisterBikeUI* pRegisterBikeUI = nullptr;	//boundary class�� ���۷���
	BikeCollection* pBikeCollection = nullptr;	//BikeCollection�� ���۷���
public:
	//control class�� ������ �� BikeCollection�� ���۷���, ��� ����� ���� out_fp�� ���۷����� �Ѱܹ���
	RegisterBike(BikeCollection* pBikeCollection, ofstream& out_fp);

	//�������� id, ��ǰ���� �Ķ���ͷ� �޾Ƽ� �ش� �����Ÿ� ���
	void registerBike(string id, string productName);

	RegisterBikeUI* getpRegisterBikeUI() { return pRegisterBikeUI; }	//contorl class�� ������ boundary class�� ���۷����� ����
};