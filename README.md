What’s this?
============
Have you every imagined when working in LabVIEW it would be cool have some tool to translate your code for some embedded device? Yes.. this is what you wanted, I know that, because I think about the same for long time until I finally implemented it.
This is transcriptor (on internet also mentioned as transpiler) from LabVIEW to C++ for Arduino, ie. it takes as input VI and returns it’s C++ representation which is possible to deploy to embedded devices. It’s exactly as it’s written. There are some extra steps which has to be done to get right code in the end, so I programme them and test them to create basic customizable tool to translate LabVIEW diagram into requested form.
To show basic principle imagine blinking led diode program below translated into some structured C++ code for Arduino.

![LabVIEWforKids Blink Program](/Documentation/img/LabVIEWforKids%20Blink%20Program.png "Transcripted Blink Program")

So if you implement some basic structure transcription process to translate diagram into code plus add some needed small function which handles tunnels, shift register you can somewho generates any code from LabVIEW. It sounds quite easy it’s not rocket science :D but still there are some mistfalls, luckily they are shallow….. long story short, I made this to you to avoid them and show you how to do that and provide you some tool hopefully useful for you.

Why “Universal”
---------------
Because you can scale it into width and also into deep :D Simple said you can add you own libraries and extende its functionality or modified it’s source to transcritp into another target platform language. All dis up to you.
There are some chapters about creating own transcriptior dictionary, I tried to make easy for you, so you have to just create in folder with your Vis translator VI and that’s all.
I also implemented some special features, killer features, you can create your own classes and use own color for wires! And there is more…. (at least my faviourite test program on picture below).

![LabVIEWforKids FFT Program](/Documentation/img/LabVIEWforKids%20FFT%20Program.png "FFT Program for MCU")

As written above, you can define your own libraries, but still, you can modify whole transcriptor (I prefer way to add folder into Transcriptors/ folder number 3,4 or anything else, copy basic frame and starts to modify) and target it to any language, as proof of concept my option is C++ for arduino to show how to translates diagram for it.

There is performance issue, transcripted code cannot be faster than hand written
--------------------------------------------------------------------------------
True and false at same time. Always depends on programme application. I wanted to show you that’s it’s possible to transcript LabVIEW diagram into C++ (but that we all know, because NI is doing this for years), but mostly to create xample application.
Generated code has one advatage and that’s it has same structure over whole application which means it’s really easy to do some analysis and optimalization afterwards. So at first stage I concerd mostly for functionality ignore performance question, these should be handled by some code optiamlizators after transcriptor proces.
2 Implemented functionality
Let’s starts with something positive :) To gain your attention I would like to introduce thorought this whole document conecpt and implementation of my transcriptor for LabVIEW VI into target platform code, for beginning chosen C++ because of Arduino.
Really, I’m not lying, this is it and it’s here to show you how to done this. So quick review what implement this transcriptor, in other words what could be seamlessly transcripted into C++ code:

* structures
  * while loop
  * for loop
  * case structure
  * flat sequence structures
  * feedback node
* 1D arrays
  * initialize array
  * insert into array
  * delete from array
  * index array
  * array size
* basic string functions (length, subset, replace, conversion functions from numeric to string)
* basic numeric functions (add, multiply, divide, increment, decrement, conversion functions between different numeric datatypes – integer, byte, word, …)
* basic boolean functions (not, and, or, xor, not xor)
* cluster functions
  * not named cluster - bundle cluster, unbundle
  * named cluster – bundle, unbundle cluster
* comparison functions – equal, greater, less, ...
* system serial line functions – availability, print, println, read, …
* digital output – read, write and set mode
* analog output – read, write, analog reference
* interrupts – attach, detach, no interrupts !since now this wasn’t completely tested, but some basic example is running

Then there is pallete ”Translate tools” which holds result this whole effort, there is located whole transcriptor written into one sub vi, calling it and passing it reference to VI which we want to transcript is all what we have to do.
Last pa section in pallete  called “Scripting” contains Vis used to build this whole transcriptor, they can be used in users Vis to improve this whole tool.
This is basic functionality which is making this transcriptor usable to transcript at least VI “Hello world” and prove concept functionality. Transcriptor can be also extended by user  and I interfaced into this transcriptor some another arduino libraries to make it useful at least for playing, to hold your attnetion they are:
  * wifi implementation (yes, it’s what you think, you can programme ESP modules using this transcriptor)
  * DAC (more specifically MPC4725)
  * accelerometer & gyroscope module (sure, it’s MPU6050)
  * complex numbers functions
  * advanced math functions (trigonometry, hyperboli functions, …)
  * DDS sinewave generator (for radioamateurs well known AD9850)
  * SD card functionality
  * Servo motor control (yeah, the blue one, cheap one)
  * basci matrix math functions (invert matrxi and print matrix into serial output, this is usuable, it’s done in little creepy way, but it’s running)
  * there is also library for LCD display, I haven’t test it
  * there is also library for TFT display, this will be one day tested, it’s possible that’s is already running without any change, but I haven’t time to check it, feel free to try it and report me :)

![LabVIEWforKids early fun](/Documentation/img/LabVIEWforKids%20Jarda.png "one of early LabVIEW for Kids fun")


