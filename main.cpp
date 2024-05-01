#include "Door.h"

int main() {
    Door door;

    // Sensör tetiklendiğinde kapıyı aç
    door.openDoor();

    // Kimse yokken kapıyı kapat
    door.closeDoor();

    return 0;
}
