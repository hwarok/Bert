#pragma once
#include <string>
#include "RentedBike.h"
#include <vector>
using namespace std;

//���� ������(ȸ��, ������)�� ���� ������ �����ϴ� entity class
class Account {
    string id;  //������ id
    string password;    //������ ��й�ȣ
    string phonenumber; //���� �������� ��ȭ��ȣ
    RentedBike rentedBike;  //�������� ���� �����ŵ�
public:
    //id, ��й�ȣ, ��ȭ��ȣ�� ������ ����
    //�������� ������ ��ȭ��ȣ�� �ʿ�ġ ����
    Account(string id, string password, string phonenumber = "")
        :id(id), password(password), phonenumber(phonenumber) {}

    //�������� ���� ������ ������ �߰�. �Ű������� ���� �������� ���۷���
    void addRentedBike(Bike* rentBike);
    
    //�������� ���� �����ŵ��� ���۷������� ����
    vector<Bike*> listRentedBike();

    string getID() { return id; }   //������ id�� ����
    string getPassword() { return password; }   //������ ��й�ȣ�� ����
    string getPhonenumber() { return phonenumber; } //���� �������� ��ȭ��ȣ�� ����
};