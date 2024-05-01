#ifndef DOOR_H
#define DOOR_H

#include <iostream>

// Kapı durumunu temsil eden enum
enum class DoorStatus {
    CLOSED,
    OPEN
};

// Kapı yapısı (structure)
struct Door {
    DoorStatus status; // Kapı durumu
    bool sensorTriggered; // Sensörün tetiklenip tetiklenmediği

    // Constructor
    Door();

    // Sensör tetiklendiğinde kapıyı aç
    void openDoor();

    // Kimse yokken kapıyı kapat
    void closeDoor();
};

#endif // DOOR_H
