## Introduction:
In this project an embedded system is designed using ultrasonic sensor ,Arduino and Lcd screen . Here the signal is sent from ultrasonic sensor which is bounced back after hitting the object. The time taken from the sensor is used to determine the distance between the object and the sensor. The distance hence obtained is displayed on the Lcd screen as the output.




## Components Required:  
The components required for the project are


I.	Arduino Uno 
•	It takes the input from the ultrasonic sensor and processes it to give the output that is the distance between the object and the sensor
 
II.	ultrasonic sensor hc-sr04  
•	It sends the ultrasonic signals which are used to determine the distance of the object


III.	16 x 2 Lcd screen  
•	It is used to Display the distance in CM


IV.	Power Supply
•	External power source to supply power to Arduino and other devices








## Requirements: 

|  ID|Description|
  |---|---|
  | LR01 | The Lcd screen should turn on after giving the power supply
  | LR02 |  arduino should be in on state and the led on arduino should blink
  | HR01 | Distance should be displayed on the lcd screen
  | HR02 | the displayed distance should be in cm 
  | HR03 | the distance should change if we change the value in potentiometer
  | HR04 | the value of distance displayed should be equal to zero when we turn of the power supply 
  
  





## SWOT Analysis:

Strengths: 

•	To measure the distance between the object and the sensor and to display the same on the Lcd screen
•	The ultrasonic sensor is accurate rather than other sensors

Weakness: 

•	Ultrasonic sensors have less range as compared to other sensors
•	The ultrasonic sensors is inefficient in tracing back reflections from small object soft curves etc.

Opportunities:

•	It has a wide range of applications in various fields like Radar SONAR etc.
•	It can be used by anybody in day to day life

Threats:

•	There are many other sensors available which give more range and are more efficient than the ultrasonic sensor.






## 4W’s &1H:

What

•	This is a utility to determine the distance between the object and the sensor

Where

•	This sensor can be used in SONAR and other related fields

Who

•	Anyone who wants to determine the distance of the object placed in front of him can use this

When

•	It can be used when any person has to find whether or not the object is placed in front of him or to measure the distance of object from him
How

•	This project is developed in C language and Simulide
