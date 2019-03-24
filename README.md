ECE590 Final Project, Project Name: Device Battery
===

This repo is forked from [klavinslab/elma_project]https://github.com/klavinslab/elma_project.git).

Project Proposal
===

Goal

The goal of this project is to build a nested state-machine. The inner state-machine will only be controlled by the outter state-machine, which will recieve user input. The example will be device and its battery. Battery will only be controlled by device. 

Milestones

1. The previous project idea was to build a car transmission. Decided to do something different because a transimission simulator is either too complicated or too simple. E.g. Too complicated if comsider all possible input, or too simple if just shifting between gears. 
1. Come up with something interesting. Checked
1. Design and define device and battery states. Checked
1. Create a device class. Checked
1. Create tests for device. Checked
1. Create battery class and read device event. Checked
1. Create battery test. Checked
1. Integrate user interface from stopwatch example
1. Document the code. Checked
1. Turn in by 3/23 11:59 PM


Example Elma Project
===

[Elma](http://klavinslab.org/elma) is an event loop manager designed to teach embedded and reactive systems programming. This repository contains an example Elma project, showing how to use many Elma features, as well as illustrating how to arrange the files and directories in an Elma project.

The source code for this project is available [on github](https://github.com/klavinslab/elma_project).

Installation
---

    git clone https://github.com/tsayc/elma_project.git
    cd elma_project
    docker run -v $PWD:/source -it klavins/elma:latest bash
    make
    make docs


Execution
---
To run the test, type

    ./bin/test


Testing
---
To run tests, do
```bash
bin/test
```

Architecture
---
A deivce has on, off, and charging states. Each state emits events to control the battery states: drain, no_change, and charge. User or future integrated module could input battery_low, battery_full, or plug event to the device and control the battery.

Results
---
The device to battery control system can prevent user or other modules to control the battery directly 

Acknowledgements
---
Greatly appreciate Professor Klavins, Justin, and Henry for the weekend office hours. Entering this class with zero C++ experience, I struggled quite a lot during the course, but I feel like I'm learing a lot of coding and tools that I could use in the future. 

