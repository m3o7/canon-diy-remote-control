Canon DIY remote control
========================

How to hack your triggertrap mobile dongle to work with an Arduino

This github-repository contains everything you need to connect your [Triggertrap-mobile-dongle](http://triggertrap.com/products/triggertrap-mobile-kits/for-canon/) to an Arduino. Even if you do not have the Trigger-trap you find all information to either build your own, or how to at least easily trigger your camera with a simple button.  
I have been using this setup on my **Canon 5D Mark III** and it works just fine.


# Shopping List
1. [Arduino Leonardo](http://arduino.cc/en/Main/arduinoBoardLeonardo)
2. [Triggertrap mobile dongle](http://triggertrap.com/products/triggertrap-mobile-kits/for-canon/)
3. [TRRS 3.5mm Jack](https://www.sparkfun.com/products/11570)
4. Cables (3x)
5. Breadboard

![pieces](https://farm4.staticflickr.com/3945/15687283145_9763dbf8dc.jpg)

# Wiring
![finished](https://farm6.staticflickr.com/5610/15687283555_2f5158cf27.jpg)
![fritzing](https://farm4.staticflickr.com/3956/15502802950_0575e0100b.jpg)

# What I learned
## Audio jack
![audio jack](https://farm8.staticflickr.com/7487/15502195228_9eeb286921.jpg)
## Camera connector
This is only interesting to you if you actually plan to *build your own trigger-trap contraption*. In this case you might want to actually read [this article](http://www.doc-diy.net/photo/eos_wired_remote/), as all you need is a button. Meaning: The camera outputs a `1V` charge on its `shutter-pin` and `focus-pin`. If you ground either of them via the `ground-pin` you can trigger either action.(see the image below for the 3 pins)

The tricky part is now figuring out how the trigger-trap works internally, so you can hook it up to the Arduino. It turns out that the **Trigger-trap** uses two `transistors` to ground the contacts([more info](http://www.diyphotography.net/building-diy-trigger-trap/)). So you need to apply a charge to the 
camera connector in order to open the transistor(-switch). However, since the Trigger-trap is supposed to work with iPhones it does not accept a simple DC-charge. You actually need [AC for this](http://electronics.stackexchange.com/a/28520)! Luckily the Arduino can fake AC-charge somewhat with it's `PWM`-pins. All you need to do is use the Arduinos `analogWrite`-function.
![camera connector](https://farm6.staticflickr.com/5599/15501704399_a81d325ca1.jpg)

## How to trigger your camera without a triggertrap
If you have a cable that fits into the Camera-remote-trigger port(e.g.: [this one](http://www.amazon.com/Camera-Remote-Control-Shutter-Release/dp/B00EZJ33TC/ref=sr_1_2?ie=UTF8&qid=1414905226&sr=8-2&keywords=canon+remote+cable)) just ground the 2.5mm audio-jack `tip` with the `ground` and the camera should get triggered.


# Ressources
[How the canon remote controller-jack works](http://www.doc-diy.net/photo/eos_wired_remote/).  
[How the trigger-trap mobile dongle works](http://www.diyphotography.net/building-diy-trigger-trap/).  
[iPhone auxiliary uses AC instead of DC](http://electronics.stackexchange.com/a/28520).
