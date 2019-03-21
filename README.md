ECE590 Final Project, Project Name: Paddle shifter
===

This repo is forked from [klavinslab/elma_project](https://github.com/klavinslab/elma).
Project Proposal
===

Goal

The goal is to build a automatic transmission with paddle shifter. The transmission should selelct the best gear to optimize gas efficiency but also response to driver's paddle shifter to perform up shift or down shift.

Milestones

1. Discuss with TA/Professor about the project complexity and decide what factors should be considered for transmission.
1. Create a base transimission class.
1. Create transmission that optimize for fule efficiency
1. Create test for transmission 
1. Create paddle shifter function and test
1. Document the code 
1. Turn in by 3/22


Example Elma Project
===

[Elma](http://klavinslab.org/elma) is an event loop manager designed to teach embedded and reactive systems programming. This repository contains an example Elma project, showing how to use many Elma features, as well as illustrating how to arrange the files and directories in an Elma project.

The source code for this project is available [on github](https://github.com/klavinslab/elma_project).

Installation
---

    git clone https://github.com/klavinslab/elma_project.git
    cd elma_project
    docker run -v $PWD:/source -it klavins/elma:latest bash
    make
    make docs


Execution
---
To run the stopwatch, type

    bin/stopwatch

The stopwatch is controlled via the keyboard, via these keys:
- **s**: Start or stop
- **l**: Lap
- **r**: Reset
- **q**: Quit

Testing
---
To run tests, do
```bash
bin/test
```

Architecture
---
Describe how your project was designed, what choices you made, how things are organized, etc.

Results
---
Describe the results of testing and running your code. Include visuals when possible.

Acknowledgements
---
Mention anyone who helped you and how.

References
---
List all libraries, articles, stack overflow answers, etc. that you used to get your code working.
