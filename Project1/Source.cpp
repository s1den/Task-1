// ������� �1

#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double distance, time;

    cout << "������� ���������� �� ��������� � ����������: ";
    cin >> distance;

    cout << "������� �����, �� ������� ����� ������� � �����: ";
    cin >> time;

    double speed = distance / time;

    cout << "��� ����� ����� �� ��������� " << speed << " ��/�" << endl;

    return 0;
}

// ������� �2

#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int start_hours, start_minutes, start_seconds;
    cout << "������� ����� ������ ������� � ������� ����, ������ � �������: ";
    cin >> start_hours >> start_minutes >> start_seconds;

    int end_hours, end_minutes, end_seconds;
    cout << "������� ����� ���������� � ������� ����, ������ � �������: ";
    cin >> end_hours >> end_minutes >> end_seconds;

    int total_start_seconds = start_hours * 3600 + start_minutes * 60 + start_seconds;
    int total_end_seconds = end_hours * 3600 + end_minutes * 60 + end_seconds;

    int session_duration_seconds = total_end_seconds - total_start_seconds;
    int session_duration_minutes = session_duration_seconds / 60;

    int cost = session_duration_minutes * 2;

    cout << "��������� �������: " << cost << " ������";

    return 0;
}

// ������� �3

#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double distance, fuel_for_100km, fuel1, fuel2, fuel3;
    cout << "������� ���������� � ����������: ";
    cin >> distance;
    cout << "������� ������ ������� �� 100��: ";
    cin >> fuel_for_100km;
    cout << "������� ��������� ������� ������� (���/����): ";
    cin >> fuel1;
    cout << "������� ��������� ������� ������� (���/����): ";
    cin >> fuel2;
    cout << "������� ��������� �������� ������� (���/����): ";
    cin >> fuel3;

    double total_distance_fuel = distance / 100 * fuel_for_100km;

    double total_cost_fuel1 = total_distance_fuel * fuel1;
    double total_cost_fuel2 = total_distance_fuel * fuel2;
    double total_cost_fuel3 = total_distance_fuel * fuel3;

    cout << "������� � �������������� ������� ������� ��������� � " << total_cost_fuel1 << " ������" << endl;
    cout << "������� � �������������� ������� ������� ��������� � " << total_cost_fuel2 << " ������" << endl;
    cout << "������� � �������������� �������� ������� ��������� � " << total_cost_fuel3 << " ������" << endl;

    return 0;
}