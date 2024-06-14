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
	// Фио
	char* getFio();
	void setFio(char* fio);

	// Дата рождения
	char* getBDate();
	void setBDate(char* date);

	// Телефон
	int* getPhone();
	void setPhone(int phone);

	// Город	 
	char* getCity();
	void setCity(char* city);

	// Название учебного заведения
	char* getNameInstitution();
	void setNameInstitution(char* name);

	// Страна учебного заведения
	char* getCountryInstitution();
	void setCountryInstitution(char* contry);

	// Город учебного заведения	 
	char* getCityInstitution();
	void setCityInstitution(char * city);

	// Номер группы	
	int getGroupNumber();
	void setGroupNumber(int number);
};


