#pragma once
#include <string>
using namespace std;

//�������� ������ �����ϴ� entity class
class Bike {
    string id;  //�������� id
    string productName; //�������� ��ǰ��
public:
    //id,��ǰ������ Bike�� ����
    Bike(string id, string productName)
        :id(id), productName(productName) {}

    string getID() { return id; }   //�������� id�� ����
    string getProductName() { return productName; } //�������� ��ǰ���� ����
};