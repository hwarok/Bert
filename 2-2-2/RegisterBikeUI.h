#pragma once
#include "RegisterBike.h"
class RegisterBike;

//������ ��� ��� ������ ���� boudnary class
class RegisterBikeUI {
    RegisterBike* pRegisterBike;    //control class�� ���۷���
    ofstream& out_fp;   //��� ����� ���� out_fp�� ���۷���
public:
    //boundary class�� ������ �� control class�� ���۷���, ��� ����� ���� out_fp�� ���۷����� �Ѱܹ���
    RegisterBikeUI(RegisterBike* pRegisterBike, ofstream& out_fp)
        :pRegisterBike(pRegisterBike), out_fp(out_fp) {}

    //ȭ�� ���
    void startInterface();

    //�����ڿ��� �������� id, ��ǰ���� �Է¹޾� �ش�Ǵ� �����Ÿ� �߰�
    void registerBike(string id, string productName);
};