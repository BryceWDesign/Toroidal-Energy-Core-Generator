# Bill of Materials (BOM) – Toroidal Energy Core Generator v1

> 📌 This list reflects validated parts and materials required to build a working proof-of-concept for the Toroidal Energy Core Generator. All values are real-world compatible, based on reliable sourcing and power expectations.

---

### 🧠 Core Energy Capture Components

| Item | Description | Qty | Notes |
|------|-------------|-----|-------|
| Piezoelectric Disks | 27mm PZT Disks (3.3V+ Output @ impact) | 12 | Mounted evenly along inner ring |
| Thermoelectric Modules | TEC1-12706 (Bi₂Te₃ based) | 6 | Mounted on outer metallic shell to harvest gradient |
| Heatsinks | Aluminum finned passive type | 6 | One per thermoelectric module |
| Thermal Paste | Arctic MX-4 or similar | 1 | High conduction for hot/cold side optimization |

---

### 🔁 Conversion & Storage Circuitry

| Item | Description | Qty | Notes |
|------|-------------|-----|-------|
| Full-Bridge Rectifier | KBPC5010 (50A, 1000V) | 2 | Handles both PZT and thermoelectric flows |
| Diodes | Schottky 1N5822 | 6 | Fast-recovery; essential for reverse-blocking |
| Supercapacitors | 100F 2.7V (Maxwell or clone) | 3 | Wired in series w/ balance protection |
| Balancing Circuit | 2.7V supercap balancer PCB | 1 | Ensures even wear over time |
| DC-DC Converter | LM2596 Buck Regulator (Adjustable) | 1 | Output stepped to 5V (USB-safe) |
| XT60 Connector | Male-to-Board | 1 | Alternate output option for devices requiring current draw >2A |

---

### 🧰 Structural and Housing Materials

| Item | Description | Qty | Notes |
|------|-------------|-----|-------|
| Toroidal Frame | ABS or PLA (3D printed or CNC) | 1 | Inner diameter ~18" (460mm) |
| Reflective Inner Coating | Chrome/Mylar Film | 1 | Encourages internal bounce and kinetic transfer |
| Mounting Plate | Acrylic or Polycarbonate, 5mm | 1 | For fixing piezo and TEC modules |
| Screws and Fasteners | Stainless M3 / M4 kit | 1 set | For non-corrosive durable assembly |
| Vibration Isolation Pads | Foam rubber or Sorbothane | 4 | Minimize external vibration leakage |

---

### ⚠️ Optional Upgrades

| Item | Description | Notes |
|------|-------------|-------|
| MPPT Charge Controller | Solar-style low-voltage optimizer | Could be added for lithium battery bank use |
| Microcontroller | ESP32 / STM32 | For advanced telemetry, logging, or wireless output |
| OLED Display | I²C 128x64px | Optional readout of charge state, voltages |

---

### ⛓️ Estimated Total Cost (Prototype Scale)

- 🧩 **Without upgrades**: ~$60–$90 USD
- 🧠 **With telemetry/MCU**: ~$120 USD
- 🧰 **3D-printed frame included in total**

---

📦 All components can be sourced via:
- **Digi-Key**
- **Mouser**
- **AliExpress** *(longer delivery, lower cost)*
- **Amazon/Ebay** *(for generic parts)*

