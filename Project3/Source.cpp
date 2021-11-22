#include "Windows.h"
#include <iostream>
using namespace std;

class Matrix
{
    void message() // функци€ (метод класса) вывод€ща€ сообщение на экран
    {
        cout << "\nNastroyka dati:\n";
    }
 
}; // конец объ€влени€ класса CppStudio
class Date // им€ класса
{
private: // спецификатор доступа private
    int day, // день
        month, // мес€ц
        year; // год
public: // спецификатор доступа public
    Date(int date_day, int date_month, int date_year) // конструктор класса
    {
        setDate(date_day, date_month, date_year); // вызов функции установки даты
    }
    void message() // функци€ (метод класса) вывод€ща€ сообщение на экран
    {
        cout << "\n\n";
    }
    void setDate(int date_day, int date_month, int date_year) // установка даты в формате дд.мм.гг
    {
        day = date_day; // инициализаци€ день
        month = date_month; // инициализаци€ мес€ц
        year = date_year; // инициализаци€ год
    }
    void getDate() // отобразить текущую дату
    {
        cout << "date: " << day << "." << month << "." << year << endl;
    }
}; // конец объ€влени€ класса CppStudio

int main(int argc, char* argv[])
{
    Matrix;
    Date objCppstudio(11, 11, 2011); // объ€вление объекта и инициализаци€ элементов данных
    objCppstudio.message(); // вызов функции message
    objCppstudio.getDate(); // отобразить дату
    system("pause");
    return 0;
}