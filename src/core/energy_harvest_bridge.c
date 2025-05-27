#include <stdint.h>
#include <stdbool.h>
#include "hardware_io.h"
#include "energy_harvest_bridge.h"

#define PIEZO_INPUT_PIN   A0
#define TEG_INPUT_PIN     A1
#define CAP_VOLTAGE_PIN   A2
#define RELAY_PIEZO       D3
#define RELAY_TEG         D4
#define RELAY_CAP_ENABLE  D5

#define MAX_CAP_VOLTAGE   4.8  // Maximum voltage in volts
#define MIN_CAP_VOLTAGE   3.2  // Safe operational floor

static float read_voltage(uint8_t analog_pin);

void init_energy_bridge() {
    pinMode(RELAY_PIEZO, OUTPUT);
    pinMode(RELAY_TEG, OUTPUT);
    pinMode(RELAY_CAP_ENABLE, OUTPUT);

    digitalWrite(RELAY_PIEZO, LOW);
    digitalWrite(RELAY_TEG, LOW);
    digitalWrite(RELAY_CAP_ENABLE, LOW);
}

void manage_power_inputs() {
    float piezoV = read_voltage(PIEZO_INPUT_PIN);
    float tegV = read_voltage(TEG_INPUT_PIN);
    float capV = read_voltage(CAP_VOLTAGE_PIN);

    // Disable charging if capacitor is full
    if (capV >= MAX_CAP_VOLTAGE) {
        digitalWrite(RELAY_PIEZO, LOW);
        digitalWrite(RELAY_TEG, LOW);
        digitalWrite(RELAY_CAP_ENABLE, LOW);
        return;
    }

    // Select higher voltage source
    if (piezoV > tegV && piezoV > 0.5) {
        digitalWrite(RELAY_PIEZO, HIGH);
        digitalWrite(RELAY_TEG, LOW);
    } else if (tegV > 0.5) {
        digitalWrite(RELAY_TEG, HIGH);
        digitalWrite(RELAY_PIEZO, LOW);
    }

    digitalWrite(RELAY_CAP_ENABLE, HIGH);
}

static float read_voltage(uint8_t analog_pin) {
    int raw = analogRead(analog_pin);
    return (raw / 1023.0) * 5.0;
}
