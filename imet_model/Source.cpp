#include <iostream>
#include <vector>
#include <ctime>
#include <time.h>
#include <random>
int main() {
    setlocale(LC_ALL, "Russian");
    int drones, visitors;
    char change_param = 0;
    std::vector<int> time_visitors_entry = { 0 };
    int time_visitors_entry_min = 20;
    int time_visitors_entry_max = 30;
    std::vector<int> time_flight_drone = {};
    int time_flight_drone_min = 5;
    int time_flight_drone_max = 6;
    std::vector<int> time_working_app = {};
    int time_working_app_min = 1;
    int time_working_app_max = 2;
    std::vector<int> time_dinner = {};
    int time_dinner_min = 10;
    int time_dinner_max = 15;
    std::vector<int> time_ball = {};
    int time_ball_min = 0;
    int time_ball_max = 2;
    std::vector<int> time_drink = {};
    int time_drink_min = 0;
    int time_drink_max = 5;
    //TODO сделать зарядку дрона
    //int time_battery = 20;
    std::cout << "Практическое задание 3" << std::endl;
    //Ввод параметров системы
    std::cout << "Введите число посетителей гольф поля: ";
    std::cin >> visitors;
    std::cout << "Введите число квадрокоптеров: \n" <<
        "Имеется 1 квадрокоптер" << std::endl;
    //std::cin >> drones;
    drones = 1;
    //Поток посетителей
    std::cout << "Время прихода людей на гольф поле: ";
    std::cout << "Время потока: " << "[" << time_visitors_entry_min << "; "
        << time_visitors_entry_max << "]";
    std::cout << "\n Введите Y если хотите поменять значение" << std::endl;
    std::cin >> change_param;
    if (change_param == 89 || change_param == 121) {
        std::cout << "Введите новые значения: " << std::endl;
        std::cin >> time_visitors_entry_min >> time_visitors_entry_max;
        std::cout << "Новые значения потока посетителей: " << std::endl;
        std::cout << "[" << time_visitors_entry_min << "; " << time_visitors_entry_max << "]";
    }
    else {
        std::cout << "Параметры не изменены. \n" << std::endl;
    }
    //Значения для дрона
    std::cout << "Значение для времени полета у дрона: " << "[" << time_flight_drone_min << "; "
        << time_flight_drone_max << "]";
    std::cout << "\n Введите Y если хотите поменять значение" << std::endl;
    std::cin >> change_param;
    if (change_param == 89 || change_param == 121) {
        std::cout << "Введите свои значения, за которые "
            "квадрокоптер преодолевает поле: " << std::endl;
        std::cin >> time_flight_drone_min >> time_flight_drone_max;
        std::cout << "Новые значения времени полета квадрокоптера: " << std::endl;
        std::cout << "[" << time_flight_drone_min << "; " << time_flight_drone_max << "]";
    }
    else {
        std::cout << "Параметры не изменены. \n" << std::endl;
    }
    //Значения приложения
    std::cout << "Время подготовки приложения: \n";
    std::cout << "Значение работы приложения: " << "[" << time_working_app_min << "; "
        << time_working_app_max << "]";
    std::cout << "\n Введите Y если хотите поменять значение" << std::endl;
    std::cin >> change_param;
    if (change_param == 89 || change_param == 121) {
        std::cout << "Введите новые значения: " << std::endl;
        std::cin >> time_working_app_min >> time_working_app_max;
        std::cout << "Новые значения работы приложения: " << std::endl;
        std::cout << "[" << time_working_app_min << "; " << time_working_app_max << "]";
    }
    else {
        std::cout << "Параметры не изменены. \n" << std::endl;
    }
    //Значения готовности обеда
    std::cout << "Время подготовки обеда: \n";
    std::cout << "Значение готовности обеда: " << "[" << time_dinner_min << "; "
        << time_dinner_max << "]";
    std::cout << "\n Введите Y если хотите поменять значение" << std::endl;
    std::cin >> change_param;
    if (change_param == 89 || change_param == 121) {
        std::cout << "Введите новые значения: " << std::endl;
        std::cin >> time_dinner_min >> time_dinner_max;
        std::cout << "Новые значения готовности обеда: " << std::endl;
        std::cout << "[" << time_dinner_min << "; " << time_dinner_max << "]";
    }
    else {
        std::cout << "Параметры не изменены. \n" << std::endl;
    }
    //Время подготовки мячика для гольфа
    std::cout << "Время подготовки мяча:";
    std::cout << "Значение подготовки мяча: " << "[" << time_ball_min << "; "
        << time_ball_max << "]";
    std::cout << "\n Введите Y если хотите поменять значение" << std::endl;
    std::cin >> change_param;
    if (change_param == 89 || change_param == 121) {
        std::cout << "Введите новые значения: " << std::endl;
        std::cin >> time_ball_min >> time_ball_max;
        std::cout << "Новые значения подготовик мяча: " << std::endl;
        std::cout << "[" << time_ball_min << "; " << time_ball_max << "]";
    }
    else {
        std::cout << "Параметры не изменены. \n" << std::endl;
    }
    //Время подготовки напитка
    std::cout << "Время подготовки напитка: ";
    std::cout << "Значение готовности напитка: " << "[" << time_drink_min << "; "
        << time_drink_max << "]";
    std::cout << "\n Введите Y если хотите поменять значение" << std::endl;
    std::cin >> change_param;
    if (change_param == 89 || change_param == 121) {
        std::cout << "Введите новые значения: " << std::endl;
        std::cin >> time_drink_min >> time_drink_max;
        std::cout << "Новые значения готовности напитка: " << std::endl;
        std::cout << "[" << time_drink_min << "; " << time_drink_max << "]";
    }
    else {
        std::cout << "Параметры не изменены. \n" << std::endl;
    }
    //Создание рандомных значений под выбранные параметры
    //Вектор значений посетителе гольф поля
    std::cout << "Посетители:   ";
    int random_value_visitors{};
    //time_deley();
    for (int b = 0; b < visitors - 1; ++b) {
        //random_value_visitors = random() % (time_visitors_entry_max-time_visitors_entry_min) + time_visitors_entry_min;
        //std::cout << random_value << std::endl;
        // time_visitors_entry.push_back(random_value_visitors);
        std::random_device rd;     // only used once to initialise (seed) engine
        std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
        std::uniform_int_distribution<int> uni(time_visitors_entry_min, time_visitors_entry_max); // guaranteed unbiased
        auto random_integer = uni(rng);
        time_visitors_entry.push_back(random_integer);
    }
    for (int out_time_visitors_entry : time_visitors_entry) {
        std::cout << out_time_visitors_entry << " ";
    }
    std::cout << std::endl;
    //Вектор значений приложения
    std::cout << "Приложение:   ";
    int random_value_app{};
    //time_deley();
    for (int b = 0; b < visitors; ++b) {
        std::random_device rd;     // only used once to initialise (seed) engine
        std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
        std::uniform_int_distribution<int> uni(time_working_app_min, time_working_app_max); // guaranteed unbiased
        auto random_integer = uni(rng);
        time_working_app.push_back(random_integer);
    }
    for (int out_time_working_app : time_working_app) {
        std::cout << out_time_working_app << "  ";
    }
    std::cout << std::endl;
    std::cout << "Квадрокоптер1: ";
    //Вектор значений квадрокоптера
    int random_value_drone{};
    //time_deley();
    for (int b = 0; b < visitors; ++b) {
        std::random_device rd;     // only used once to initialise (seed) engine
        std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
        std::uniform_int_distribution<int> uni(time_flight_drone_min, time_flight_drone_max); // guaranteed unbiased
        auto random_integer = uni(rng);
        time_flight_drone.push_back(random_integer);
    }
    for (int out_time_flight_drone : time_flight_drone) {
        std::cout << out_time_flight_drone << "  ";
    }
    //TODO Добавить второй квадрокоптер
    std::cout << std::endl;
    std::cout << "Обед:         ";
    //Вектор значений обеда
    int random_value_dinner{};
    //time_deley();
    for (int b = 0; b < visitors; ++b) {
        std::random_device rd;     // only used once to initialise (seed) engine
        std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
        std::uniform_int_distribution<int> uni(time_dinner_min, time_dinner_max); // guaranteed unbiased
        auto random_integer = uni(rng);
        time_dinner.push_back(random_integer);
    }
    for (int out_time_dinner : time_dinner) {
        std::cout << out_time_dinner << " ";
    }
    std::cout << std::endl;
    std::cout << "Мячик:        ";
    //Вектор значений мячика
    int random_value_ball{};
    //time_deley();
    for (int b = 0; b < visitors; ++b) {
        std::random_device rd;     // only used once to initialise (seed) engine
        std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
        std::uniform_int_distribution<int> uni(time_ball_min, time_ball_max); // guaranteed unbiased
        auto random_integer = uni(rng);
        time_ball.push_back(random_integer);
    }
    for (int out_time_ball : time_ball) {
        std::cout << out_time_ball << "  ";
    }
    std::cout << std::endl;

    std::cout << "Напиток:      ";
    //Вектор значений напитков
    int random_value_drink{};
    for (int b = 0; b < visitors; ++b) {
        std::random_device rd;     // only used once to initialise (seed) engine
        std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
        std::uniform_int_distribution<int> uni(time_drink_min, time_drink_max); // guaranteed unbiased
        auto random_integer = uni(rng);
        time_drink.push_back(random_integer);
    }
    for (int out_time_drink : time_drink) {
        std::cout << out_time_drink << "  ";
    }
    std::cout << std::endl;
    //Расчет
    //Расчет пользователей и приложения
    std::cout << std::endl;
    std::vector<int> sum_visitor_and_app{};
    for (int i = 0; i < visitors; ++i) {
        sum_visitor_and_app.push_back(time_visitors_entry[i] + time_working_app[i]);
    }
    for (int out_sum_visitor_and_app : sum_visitor_and_app)
        std::cout << out_sum_visitor_and_app << " ";
    //Расчет обеда, мячика, напитка
    std::cout << std::endl;
    std::vector<int> sum_all_param{};
    for (int i = 0; i < visitors; ++i) {
        sum_all_param.push_back(time_flight_drone[i] + time_dinner[i] + time_ball[i] + time_drink[i]);
    }
    for (int out_sum_all_param : sum_all_param)
        std::cout << out_sum_all_param << " ";
    //Вывод
    std::cout << std::endl;
    std::vector<int> conclusion_all_param{};
    for (int i = 0; i < visitors; ++i) {
        conclusion_all_param.push_back(sum_all_param[i - 1] - sum_visitor_and_app[i]);
    }
    for (int out_conclusion_all_param : conclusion_all_param)
        std::cout << out_conclusion_all_param << " ";
    return 0;
}

