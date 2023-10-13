#include <iostream>

// Fungsi untuk menambahkan waktu
void addTime(int &hours, int &minutes, int &seconds, int addHours, int addMinutes, int addSeconds) {
    seconds += addSeconds;
    minutes += addMinutes;
    hours += addHours;

    if (seconds >= 60) {
        seconds -= 60;
        minutes++;
    }

    if (minutes >= 60) {
        minutes -= 60;
        hours++;
    }

    hours %= 24; // Pastikan waktu tidak melebihi 24 jam
}

int main() {
    int hours, minutes, seconds, addHours, addMinutes, addSeconds;

    std::cout << "Masukkan jam: ";
    std::cin >> hours;
    std::cout << "Masukkan menit: ";
    std::cin >> minutes;
    std::cout << "Masukkan detik: ";
    std::cin >> seconds;

    std::cout << "Masukkan jumlah jam yang ingin ditambahkan: ";
    std::cin >> addHours;
    std::cout << "Masukkan jumlah menit yang ingin ditambahkan: ";
    std::cin >> addMinutes;
    std::cout << "Masukkan jumlah detik yang ingin ditambahkan: ";
    std::cin >> addSeconds;

    addTime(hours, minutes, seconds, addHours, addMinutes, addSeconds);

    std::cout << "Waktu setelah ditambahkan: " << hours << ":" << minutes << ":" << seconds << std::endl;

    return 0;
}
