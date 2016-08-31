# Till

An IKEA hack to bring contactless payments to the [DUKTIG "Toy Cash Register"](http://www.ikea.com/us/en/catalog/products/80256501/).

## Bill of Materials

 * ~~Photon~~ [Arduino Pro Mini](https://www.arduino.cc/en/Main/ArduinoBoardProMini)
 * [PN532 Breakout Board](https://www.adafruit.com/products/364)
 * [LiPo battery, 1200 mAH](https://www.adafruit.com/products/258)
 * [PowerBoost 1000 Charger](https://www.adafruit.com/products/2465)

## Roadmap

 - [ ] Read register input
 - [ ] Integrate kernel for EMV
 - [ ] Test contactless payments
 - [ ] Mount componentry
 - [ ] Carve [contactless symbol](https://www.emvco.com/best_practices.aspx?id=117)  
       ![Contactless Symbol](https://www.emvco.com/images/sym.jpg)
 - [ ] Through lemonade sales, teach progeny about:
   - modern payment processing
   - PCI-DSS and PA-DSS
   - crypto
   - electronics

## Building

    make

## Flashing

Note: connect all 6 ICSP pins regardless of whether the programmer provides power.

    make install

## Troubleshooting

### Avrdude can't connect to Atmel-ICE on Mac OS X

OS X steals the interface.

Install a [dummy driver](http://www.avrfreaks.net/comment/1421981#comment-1421981)
to prevent this:

- Decompress tools/AtmelICE.kext.tar.bz2 into /System/Library/Extensions
- `chown -R root:wheel /System/Library/Extensions/AtmelICE.kext`
- Reload with `kextcache -system-caches`
- Unplug and plug in the Atmel-ICE device
- Rejoice!

## Resources

- Arduino Pro Mini
-- [Datasheet - Atmel](http://www.atmel.com/Images/Atmel-42735-8-bit-AVR-Microcontroller-ATmega328-328P_datasheet.pdf)
-- [Fuse Calculator](http://www.engbedded.com/fusecalc/)
-- [Graphical Datasheet - SparkFun](https://cdn.sparkfun.com/datasheets/Dev/Arduino/Boards/ProMini8MHzv1.pdf)
-- [ICE User Guide - Atmel](http://www.atmel.com/Images/Atmel-42330-Atmel-ICE_UserGuide.pdf)
- AVR
-- [Beyond the Arduino - Elliot Williams](http://www.littlehacks.org/static/files/beyond_the_arduino.pdf)
- EMV
-- [A Guide to EMV Level 2 Contactless - Level2Kernel](https://www.level2kernel.com/emv-level-2-contactless-information-guide.html)
-- [EMV - Gemalto](http://www.gemalto.com/emv/)
-- [EMV Contactless Spec](http://www.emvco.com/specifications.aspx?id=21)
-- [NFC Resources - Smart Card Alliance](http://www.smartcardalliance.org/smart-cards-applications-nfc/)
