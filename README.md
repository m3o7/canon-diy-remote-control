Canon DIY remote control
========================

how to hack your triggertrap mobile dongle to work with an arduino

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
This is only interesting to you if you actually plan to build your own trigger-trap contraption. In this case you might want to actually read [this article](http://www.doc-diy.net/photo/eos_wired_remote/), as all you need is a button. Meaning: The camera has a 1V charge it outputs in the `shutter-pin` and the `focus-pin`. If you ground either of them via the `ground-pin` you can trigger either action.
![camera connector](https://farm6.staticflickr.com/5599/15501704399_a81d325ca1.jpg)


# Ressources
[How the canon remote controller-jack works](http://www.doc-diy.net/photo/eos_wired_remote/).  
[How the trigger-trap mobile dongle works](http://www.diyphotography.net/building-diy-trigger-trap/).  
[iPhone auxiliary uses AC instead of DC](http://electronics.stackexchange.com/a/28520).
