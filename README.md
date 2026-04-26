# Project README

## Overview
This project is a C application designed to control and manage various input devices such as keyboards and mice. The main focus is on creating an intuitive user interface that allows users to interact with these devices efficiently.

## Features
- Supports keyboard and mouse controls.
- Provides real-time feedback on device inputs.
- Offers customizable settings for device sensitivity and response.
- Cross-platform support including Linux, Windows, Wine, and WebAssembly.

## Project Structure
The project structure is organized as follows:

### Prerequisites
- C/C++ Compiler and Debugger (GCC)
- Make utility
- Standard development tools
- Libraries needed:
  - X11 for Linux UI
  - WINAPI for Windows UI
  - ALSA for audio on Linux
  - SDL for WebAssembly

## Build & Run
To build and run the project, follow these steps:

### Build Steps
Navigate to the root directory of the project and select the appropriate Makefile for your platform.

#### For Linux:
```bash
cd <Project>
make -f Makefile.linux all
```

#### For Windows:
```bash
cd <Project>
make -f Makefile.windows all
```

#### For Wine (Linux cross-compile to Windows):
```bash
cd <Project>
make -f Makefile.wine all
```

#### For WebAssembly:
```bash
cd <Project>
make -f Makefile.web all
```

### Clean Rebuild
To perform a clean rebuild, use the following commands:

#### For Linux:
```bash
make -f Makefile.linux clean
make -f Makefile.linux all
```

#### For Windows:
```bash
make -f Makefile.windows clean
make -f Makefile.windows all
```

#### For Wine (Linux cross-compile to Windows):
```bash
make -f Makefile.wine clean
make -f Makefile.wine all
```

#### For WebAssembly:
```bash
make -f Makefile.web clean
make -f Makefile.web all
```

### Build Options
- `all`: Build the output executable.
- `do`: Build and execute the executable.
- `clean`: Remove build artifacts.

To execute the built application, use:

#### For Linux:
```bash
make -f Makefile.linux exe
```

#### For Windows:
```bash
make -f Makefile.windows exe
```

#### For Wine (Linux cross-compile to Windows):
```bash
make -f Makefile.wine exe
```

#### For WebAssembly:
Open the generated `index.html` in a web browser or use Emscripten's `emrun` command:
```bash
make -f Makefile.web exe
```
Navigate to http://localhost:8080 in your browser to run the application.

This README provides a comprehensive overview of the project, its features, and how to build and run it on different platforms.