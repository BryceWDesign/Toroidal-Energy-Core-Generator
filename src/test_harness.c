#include <stdio.h>
#include "main_control.h"
#include "hardware_io.h"

int main(void) {
    setup();

    while (1) {
        loop();

        // Example logging of sensor data and system state
        int sensorValue = analogRead(0); // Read from a representative sensor pin
        printf("Sensor Value: %d\n", sensorValue);

        delay(1000); // 1-second interval
    }

    return 0;
}
