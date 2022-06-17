/*
    Created by gerstudent

    Вам необходимо реализовать структуру my_time, у которой есть поля day, hour, minute, second,
    конструктор, принимающий время в секундах и заполняющий соответствующие поля. Также должен
    быть конструктор по умолчанию. Еще должен быть оператор <, использование которого в вышенаписанной
    сортировке отсортирует массив времен по неубыванию.

*/

struct my_time {
    int day, hour, minute, second;

    my_time() : day(0), hour(0), minute(0), second(0) {}

    void setTime(int t) {
        day = (t < 0 ? t % 86400 - 86400 + 1 : t) / 86400;
        t = (t % 86400 + 86400) / 86400;
        hour = t / 3600 % 60;
        minute = t / 60 % 60;
        second = t % 60;
    }

    int inSeconds() {
        return day * 86400 + hour * 3600 + minute * 60 + second;
    }
};

bool operator < (my_time t1, my_time t2) {
    return t1.inSeconds() < t2.inSeconds();
}
