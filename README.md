# Vezzeta

## Overview

**Vezzeta** is a C++ console application designed to streamline the management of medical appointments and doctor-patient interactions. The system offers functionalities such as doctor search, appointment scheduling, and administrative management, all while ensuring data persistence through text files.

## Features

- **Sound Notifications**:
  - Plays a sound upon launching and exiting the application to enhance user experience.

- **Password Encryption**:
  - Ensures secure storage of user credentials through encryption mechanisms.

- **Doctor Search**:
  - Allows users to search for doctors by:
    - Name
    - Specialization
    - Available time slots

- **Appointment Management**:
  - Enables patients to:
    - Book appointments with doctors.
    - Cancel appointments, making the slot available for others.

- **Doctor Schedule Management**:
  - Provides administrators the ability to:
    - Add new time slots for doctors.
    - Edit existing time slots.
    - Delete time slots as needed.

- **Data Persistence**:
  - Utilizes three text files to store:
    - Doctor details
    - Patient information
    - Appointment records

## File Structure

The project is organized into three main files:

1. **main.cpp**:
   - Contains the `main` function and handles the primary flow of the application.

2. **source.cpp**:
   - Implements the core functionalities and logic of the system.

3. **interface.h**:
   - Declares the functions and classes used across `main.cpp` and `source.cpp`, facilitating modularity and code organization.

### Project team contributors
- Abanoub Saweris.
- Yousef Osama.
- Ibram Adel.
- Kenzy Adel.
- Maria Kiser.
- Losia Awny.
