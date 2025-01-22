// Task #1

#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double distance, time;

    cout << "Ââåäèòå ðàññòîÿíèå äî àýðîïîðòà â êèëîìåòðàõ: ";
    cin >> distance;

    cout << "Ââåäèòå âðåìÿ, çà êîòîðîå íóæíî äîåõàòü â ÷àñàõ: ";
    cin >> time;

    double speed = distance / time;

    cout << "Âàì íóæíî åõàòü ñî ñêîðîñòüþ " << speed << " êì/÷" << endl;

    return 0;
}

// Task #2

#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int start_hours, start_minutes, start_seconds;
    cout << "Ââåäèòå âðåìÿ íà÷àëà ïîåçäêè â ôîðìàòå ÷àñû, ìèíóòû è ñåêóíäû: ";
    cin >> start_hours >> start_minutes >> start_seconds;

    int end_hours, end_minutes, end_seconds;
    cout << "Ââåäèòå âðåìÿ çàâåðøåíèÿ â ôîðìàòå ÷àñû, ìèíóòû è ñåêóíäû: ";
    cin >> end_hours >> end_minutes >> end_seconds;

    int total_start_seconds = start_hours * 3600 + start_minutes * 60 + start_seconds;
    int total_end_seconds = end_hours * 3600 + end_minutes * 60 + end_seconds;

    int session_duration_seconds = total_end_seconds - total_start_seconds;
    int session_duration_minutes = session_duration_seconds / 60;

    int cost = session_duration_minutes * 2;

    cout << "Ñòîèìîñòü ïîåçäêè: " << cost << " ãðèâåí";

    return 0;
}

// Task #3

#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double distance, fuel_for_100km, fuel1, fuel2, fuel3;
    cout << "Ââåäèòå ðàññòîÿíèå â êèëîìåòðàõ: ";
    cin >> distance;
    cout << "Ââåäèòå ðàñõîä áåíçèíà íà 100êì: ";
    cin >> fuel_for_100km;
    cout << "Ââåäèòå ñòîèìîñòü ïåðâîãî áåíçèíà (ðóá/ëèòð): ";
    cin >> fuel1;
    cout << "Ââåäèòå ñòîèìîñòü âòîðîãî áåíçèíà (ðóá/ëèòð): ";
    cin >> fuel2;
    cout << "Ââåäèòå ñòîèìîñòü òðåòüåãî áåíçèíà (ðóá/ëèòð): ";
    cin >> fuel3;

    double total_distance_fuel = distance / 100 * fuel_for_100km;

    double total_cost_fuel1 = total_distance_fuel * fuel1;
    double total_cost_fuel2 = total_distance_fuel * fuel2;
    double total_cost_fuel3 = total_distance_fuel * fuel3;

    cout << "Ïîåçäêà ñ èñïîëüçîâàíèåì ïåðâîãî áåíçèíà îáîéäåòñÿ â " << total_cost_fuel1 << " ðóáëåé" << endl;
    cout << "Ïîåçäêà ñ èñïîëüçîâàíèåì âòîðîãî áåíçèíà îáîéäåòñÿ â " << total_cost_fuel2 << " ðóáëåé" << endl;
    cout << "Ïîåçäêà ñ èñïîëüçîâàíèåì òðåòüåãî áåíçèíà îáîéäåòñÿ â " << total_cost_fuel3 << " ðóáëåé" << endl;

    return 0;
}
