#include <fstream>
#include <string>
#include "RegisterBikeUI.h"
using namespace std;

//ȭ�� ���
void RegisterBikeUI::startInterface() {
    out_fp << "3.1. ������ ���" << endl;    //ȭ�� ���
}

//�����ڿ��� �������� id, ��ǰ���� �Է¹޾� �ش�Ǵ� �����Ÿ� �߰�
void RegisterBikeUI::registerBike(string id, string productName) {
    pRegisterBike->registerBike(id, productName);   //control class���� �������� id, ��ǰ���� �Ѱ� �ش�Ǵ� ������ �߰� ��û
    out_fp << "> " << id << " " << productName << endl << endl;  //��� ���
}