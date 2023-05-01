# Guidelines
This document defines code style, project structure and high-level view
of what this project aims to look like

## Code style
- ```camelCase``` is used
- ```m_``` prefix denotes a member variable

## Structure
This project groups both the **Spring Engine** and an **editor** which relies on it.  
The **Spring Engine** is divided in modules, which can individually be enabled:  
1) ```CoreModule``` deals with memory managment, abstracting OS, logging, ...
2) ```Display``` deals with windows, surfaces
3) ```Graphics``` provides tools to work with graphics (on screen, headless)
4) ```UI``` provides tools to compute user interfaces (rendering is handled by the graphics module)

Each module depends on ```CoreModule``` and ```CoreModule``` doesn't depend on any module.  
There should be as few interactions between modules as possible.  

## Testing
Development is test-driven. Therefore in order to implement a new feature, tests (grouped in a *set of tests*) have to be implemented first. Once validated, they can only be changed with minor version changes.  
A *set of tests* groups tests related to one topic (TODO: define *"topic"* more precisely).  
