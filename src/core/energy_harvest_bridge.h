#ifndef ENERGY_HARVEST_BRIDGE_H
#define ENERGY_HARVEST_BRIDGE_H

#ifdef __cplusplus
extern "C" {
#endif

// Initialize I/O and state for the bridge controller
void init_energy_bridge(void);

// Evaluate input voltages and manage capacitor charging
void manage_power_inputs(void);

#ifdef __cplusplus
}
#endif

#endif // ENERGY_HARVEST_BRIDGE_H
