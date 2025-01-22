// Задание №1

#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double distance, time;

    cout << "Введите расстояние до аэропорта в километрах: ";
    cin >> distance;

    cout << "Введите время, за которое нужно доехать в часах: ";
    cin >> time;

    double speed = distance / time;

    cout << "Вам нужно ехать со скоростью " << speed << " км/ч" << endl;

    return 0;
}

// Задание №2

#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int start_hours, start_minutes, start_seconds;
    cout << "Введите время начала поездки в формате часы, минуты и секунды: ";
    cin >> start_hours >> start_minutes >> start_seconds;

    int end_hours, end_minutes, end_seconds;
    cout << "Введите время завершения в формате часы, минуты и секунды: ";
    cin >> end_hours >> end_minutes >> end_seconds;

    int total_start_seconds = start_hours * 3600 + start_minutes * 60 + start_seconds;
    int total_end_seconds = end_hours * 3600 + end_minutes * 60 + end_seconds;

    int session_duration_seconds = total_end_seconds - total_start_seconds;
    int session_duration_minutes = session_duration_seconds / 60;

    int cost = session_duration_minutes * 2;

    cout << "Стоимость поездки: " << cost << " гривен";

    return 0;
}

// Задание №3

#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double distance, fuel_for_100km, fuel1, fuel2, fuel3;
    cout << "Введите расстояние в километрах: ";
    cin >> distance;
    cout << "Введите расход бензина на 100км: ";
    cin >> fuel_for_100km;
    cout << "Введите стоимость первого бензина (руб/литр): ";
    cin >> fuel1;
    cout << "Введите стоимость второго бензина (руб/литр): ";
    cin >> fuel2;
    cout << "Введите стоимость третьего бензина (руб/литр): ";
    cin >> fuel3;

    double total_distance_fuel = distance / 100 * fuel_for_100km;

    double total_cost_fuel1 = total_distance_fuel * fuel1;
    double total_cost_fuel2 = total_distance_fuel * fuel2;
    double total_cost_fuel3 = total_distance_fuel * fuel3;

    cout << "Поездка с использованием первого бензина обойдется в " << total_cost_fuel1 << " рублей" << endl;
    cout << "Поездка с использованием второго бензина обойдется в " << total_cost_fuel2 << " рублей" << endl;
    cout << "Поездка с использованием третьего бензина обойдется в " << total_cost_fuel3 << " рублей" << endl;

    return 0;
}