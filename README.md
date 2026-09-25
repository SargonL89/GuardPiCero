# GuardPiCero

GuardPi is a C++ local security monitoring simulator.

The project simulates devices that generate security-related events, processes those events through a configurable detection engine, and produces alerts when suspicious activity is detected.

## Project Goals

GuardPiCero is being developed as a practical exercise in:

* Data structures and algorithms
* Object-oriented programming
* Event processing
* File handling
* Software design and testing

The project also provides a foundation for a future IoT and network security application running on Raspberry Pi hardware.

## Current Status

🚧 **Early development**

The current version focuses on implementing the core simulation and event-processing pipeline.

The initial scope deliberately excludes real hardware, network communication, and advanced anomaly detection.

## Architecture
```
Device Simulator
       ↓
  Event Manager
       ↓
Detection Engine
       ↓
 Normal / Alert
       ↓
     Logger
```

### Components

* **Device Simulator** — generates simulated devices and security events.
* **Event Manager** — receives, organizes, and dispatches events.
* **Detection Engine** — evaluates events against configurable detection rules.
* **Alert System** — identifies suspicious activity and generates alerts.
* **Logger** — records relevant events and alerts.

## Future Direction

Future versions may incorporate:

* Raspberry Pi hardware
* Real IoT devices
* MQTT communication
* Network monitoring
* Persistent logs
* A local monitoring interface
* Edge-based anomaly detection

These features are intentionally outside the scope of the current version.

## Technology

* **C++**
* **CMake**
* **Git**
* **GoogleTest** *(planned)*

## Author

**Leandro Magnotti**
