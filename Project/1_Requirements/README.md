Introduction: In this project an embedded system is designed using ultrasonic sensor ,Arduino and Lcd screen . Here the signal is sent from ultrasonic sensor which is bounced back after hitting the object. The time taken from the sensor is used to determine the distance between the object and the sensor. The distance hence obtained is displayed on the Lcd screen as the output.




Components Required:  The components required for the project are


I.	Arduino Uno 
•	It takes the input from the ultrasonic sensor and processes it to give the output that is the distance between the object and the sensor
 
II.	ultrasonic sensor hc-sr04  
•	It sends the ultrasonic signals which are used to determine the distance of the object


III.	16 x 2 Lcd screen  
•	It is used to Display the distance in CM


IV.	Power Supply
•	External power source to supply power to Arduino and other devices








Requirements: 
a)	High level requirements


HLR-1	To measure the distance of the object with ultrasonic sensor
HLR-2	To display the output on the 16 x 2 Lcd display





b)	 Low Level Requirements


LLR-1	Power supply of 5V DC
LLR-2	Working current of 15mA
LLR-3	Ranging distance from 2cm to 400cm
LLR-4	It has a resolution of 0.3cm
LLR-5	Measuring angle of 30 degree
LLR-6	Trigger input pulse of width 10µs TTL Pulse
LLR-7	Echo output signal is TTL pulse proportional to distance range






SWOT Analysis:

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






4W’s &1H:

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
