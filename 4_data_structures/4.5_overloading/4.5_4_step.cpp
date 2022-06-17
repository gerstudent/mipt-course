/*
    Created by gerstudent

    Мы все еще используем структуру my_time. Теперь вам необходимо реализовать оператор -,
    который для двух данных моментов времени будет находить, сколько времени прошло между первым и вторым.

*/

struct my_time {
    int day, hour, minute, second;

    my_time(int d, int h, int m, int s) : day(d), hour(h), minute(m), second(s) {};

    my_time() : day(0), hour(0), minute(0), second(0) {};

    my_time(int t) {
        day = int((t < 0 ? t - 86400 + 1 : t) / 86400);
        t = int((t % 86400 + 864000) % 86400);
        hour = t / 3600 % 24;
        minute = t / 60 % 60;
        second = t % 60;
    }

    int inSeconds() {
        return day * 86400 + hour * 3600 + minute * 60 + second;
    }
};

my_time operator - (my_time t1, my_time t2) {
    int ans = t1.inSeconds() - t2.inSeconds();
    return ans;
}


