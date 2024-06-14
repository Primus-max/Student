#include "Student.h"
#include <string.h>

char* Student::getFio() {
	return Fio;
}

void Student::setFio(char* fio) {
	strcpy_s(Fio, 20, fio);
}

char* Student::getBDate()
{
	return BDate;
}

void Student::setBDate(char* date){
	strcpy_s(BDate, 20, date);
}

int* Student::getPhone(){
	return &Phone;
}

void Student::setPhone(int phone){
	Phone = phone;
}

char* Student::getCity(){
	return City;
}

void Student::setCity(char* city){
	strcpy_s(City, 30, city);
}

char* Student::getNameInstitution()
{
	return NameInstitution;
}

void Student::setNameInstitution(char* name){
	strcpy_s(NameInstitution, 10, name);
}

char* Student::getCountryInstitution()
{
	return CountryInstitution;
}

void Student::setCountryInstitution(char* country){
	strcpy_s(CountryInstitution, 10, country);
}

char* Student::getCityInstitution()
{
	return CityInstitution;
}

void Student::setCityInstitution(char* city){
	strcpy_s(CityInstitution, 10, city);
}

int Student::getGroupNumber()
{
	return GroupNumber;
}

void Student::setGroupNumber(int number){
	GroupNumber = number;
}





