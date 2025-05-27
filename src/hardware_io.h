#ifndef HARDWARE_IO_H
#define HARDWARE_IO_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Pin modes
#define INPUT 0
#define OUTPUT 1

// Digital values
#define LOW 0
#define HIGH 1

void pinMode(uint8_t pin, uint8_t mode);
void digitalWrite(uint8_t pin, uint8_t value);
int analogRead(uint8_t pin);
void delay(uint32_t ms);

#ifdef __cplusplus
}
#endif

#endif // HARDWARE_IO_H
