#include "Windows.h"
#include <iostream>
using namespace std;

class Matrix
{
    void message() // ������� (����� ������) ��������� ��������� �� �����
    {
        cout << "\nNastroyka dati:\n";
    }
 
}; // ����� ���������� ������ CppStudio
class Date // ��� ������
{
private: // ������������ ������� private
    int day, // ����
        month, // �����
        year; // ���
public: // ������������ ������� public
    Date(int date_day, int date_month, int date_year) // ����������� ������
    {
        setDate(date_day, date_month, date_year); // ����� ������� ��������� ����
    }
    void message() // ������� (����� ������) ��������� ��������� �� �����
    {
        cout << "\n\n";
    }
    void setDate(int date_day, int date_month, int date_year) // ��������� ���� � ������� ��.��.��
    {
        day = date_day; // ������������� ����
        month = date_month; // ������������� �����
        year = date_year; // ������������� ���
    }
    void getDate() // ���������� ������� ����
    {
        cout << "date: " << day << "." << month << "." << year << endl;
    }
}; // ����� ���������� ������ CppStudio

int main(int argc, char* argv[])
{
    Matrix;
    Date objCppstudio(11, 11, 2011); // ���������� ������� � ������������� ��������� ������
    objCppstudio.message(); // ����� ������� message
    objCppstudio.getDate(); // ���������� ����
    system("pause");
    return 0;
}