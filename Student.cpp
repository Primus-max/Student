#include <iostream>
#include <windows.h>
#include "Student.h"
using namespace std;



int main()
{
    setlocale(LC_ALL, "ru-Ru");
    Student student;
    char date[20] = "10.32.2345";
    char fio[30] = "Иван Иванов";
    char city[30] = "Москва";
    char nameInstitution[10] = "ВУЗ";
    char countryInstitution[30] = "Россия";
    char cityInstitution[30] = "Москва";
    int phone = 1234567890;
    int groupNumber = 101;

    student.setBDate(date);
    student.setFio(fio);
    student.setCity(city);
    student.setNameInstitution(nameInstitution);
    student.setCountryInstitution(countryInstitution);
    student.setCityInstitution(cityInstitution);
    student.setPhone(phone);
    student.setGroupNumber(groupNumber);

    std::cout << "ФИО: " << student.getFio() << std::endl;
    std::cout << "Дата рождения: " << student.getBDate() << std::endl;
    std::cout << "Город: " << student.getCity() << std::endl;
    std::cout << "Телефон: " << *student.getPhone() << std::endl;
    std::cout << "Учебное заведение: " << student.getNameInstitution() << std::endl;
    std::cout << "Страна учебного заведения: " << student.getCountryInstitution() << std::endl;
    std::cout << "Город учебного заведения: " << student.getCityInstitution() << std::endl;
    std::cout << "Номер группы: " << student.getGroupNumber() << std::endl;

}