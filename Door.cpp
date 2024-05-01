#include "Door.h"

// Constructor
Door::Door() {
    status = DoorStatus::CLOSED; // Kapı başlangıçta kapalı
    sensorTriggered = false; // Sensör başlangıçta tetiklenmemiş
}

// Sensör tetiklendiğinde kapıyı aç
void Door::openDoor() {
    if (!sensorTriggered) {
        std::cout << "Sensöre uyarı geldi, kapı açılıyor." << std::endl;
        status = DoorStatus::OPEN;
    } else {
        std::cout << "Kapı zaten açık." << std::endl;
    }
}

// Kimse yokken kapıyı kapat
void Door::closeDoor() {
    if (sensorTriggered) {
        std::cout << "Kimse yok, kapı kapanıyor." << std::endl;
        status = DoorStatus::CLOSED;
    } else {
        std::cout << "Kapı zaten kapalı." << std::endl;
    }
}
