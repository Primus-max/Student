#pragma once

class Student {

private:
	char Fio[30];
	char BDate[11];
	int Phone;
	char City[30];
	char NameInstitution[10];
	char CountryInstitution[20];
	char CityInstitution[20];
	int GroupNumber;

public:
	// ���
	char* getFio();
	void setFio(char* fio);

	// ���� ��������
	char* getBDate();
	void setBDate(char* date);

	// �������
	int* getPhone();
	void setPhone(int phone);

	// �����	 
	char* getCity();
	void setCity(char* city);

	// �������� �������� ���������
	char* getNameInstitution();
	void setNameInstitution(char* name);

	// ������ �������� ���������
	char* getCountryInstitution();
	void setCountryInstitution(char* contry);

	// ����� �������� ���������	 
	char* getCityInstitution();
	void setCityInstitution(char * city);

	// ����� ������	
	int getGroupNumber();
	void setGroupNumber(int number);
};


