# COS214-PROJECT
## Group: Error_418
### Members: Graeme Blain, Aidan Chapman, Kabelo CHuene, Douglas Porter, Sange Tshakumane and Boikanyo Tshwale

This is a C++ based project that simulates a restaurant.
A random number of customers between 1 and 10 inclusively is generated based on the **rand()** C++ function and a Unix Timestamp to ensure that it is truly random.
Each customer then places an order randomly which consists of main meals such as steaks, burgers and fish, side dishes such as chips and salads and drinks such as beers, waters and sodas.
The orders are then sent to the kitchen where they are prepared.
Once the order is ready, it is sent to the customer, who then pays for the order and leaves.
This payment consists of a tip, which is determined by the time it takes for the order to be prepared. If the customer has to wait longer, the tip is lower.
The preparation of the meals take time, which causes delays, resulting in the different attitudes of the customer when it comes time to tip.

The implementation makes use of the following design patterns:
* Facade
* Mediator
* State
* Observer
* Strategy
* Template Method
* Builder
* Chain of Responsibility
* Composite
* Adapter

The UML class diagram with the outlines of these patterns can be found along with the Activity, State, Sequence and Communication Diagrams in the **COS214_Project_UML_DIAGRAMS.pdf** file in the **VPP_Diagrams** folder.
Doxygen documentation can be found in the **Documentation** folder. To view the Doxygen Documentation, go to **/Documentation/html/index.html**

#### Instructions to run:
**Note: This is assuming you are using linux or wsl and that the g++ compiler is installed on your system.**
1. Download the project zip folder.
2. Unzip and open in your preferred IDE.
3. Open the main.cpp file and comment the test() function out and uncomment the run() function. This was setup in this manner to allow for the CI/CD GitHub actions to work.
4. Compile the file by typing *make fresh* in your IDE's terminal.
5. Run the file typing *make run* in your IDE's terminal.

Obviously the unit testing can be viewed if the test() function is left uncommented.

