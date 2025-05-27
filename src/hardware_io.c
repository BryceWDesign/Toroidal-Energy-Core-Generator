#include "hardware_io.h"

// Platform-specific includes and defines go here
// For example, Arduino, STM32 HAL, or POSIX mock for testing

void pinMode(uint8_t pin, uint8_t mode) {
    // Platform-dependent implementation
}

void digitalWrite(uint8_t pin, uint8_t value) {
    // Platform-dependent implementation
}

int analogRead(uint8_t pin) {
    // Platform-dependent implementation, return ADC value 0-1023
    return 512; // Placeholder value for compilation
}

void delay(uint32_t ms) {
    // Platform-dependent delay function
}
