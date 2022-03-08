More info about ideation at [my blog](https://hannahz.vercel.app/creative-embedded-sound)

A quick [demonstration video](https://youtu.be/pl-USFRBLrE) on YouTube


# Feedbox
A foam-enclosed box for controling sound feedback art. 

## Description

Feedbox ![Bos GIF](https://user-images.githubusercontent.com/83347817/157174993-554fc53a-35fb-4aea-b6b2-ca30f361aaa6.gif) is revisiting the idea of feedback and realize it with sound. Due to time constraint, the sound input comes in and out from the computer, while a user can control the extend of feedback distortion via the foam-enclosed embedded system.


![Max_GIF](https://user-images.githubusercontent.com/83347817/157151461-7a0bbc41-bd8e-4a2b-970c-3e0c1db8218a.gif)

## Medium
an ESP32 TTGO, a potentiometer, a button, a joystick, a foamboard, some pins

## Software
Max/MSP, Arduino

## Tips for reproduction

1. for Arduino: Use lower boud rate (e.g. 115200 instead of 9600) and give a larger buffer time (using `delay()` ) to ensure successful upload
2. for Max: use `loadmess` for quicker start up, `print` and `'i' (int number read/write)` for debugging, `meter` for a more visual debugging.
3. Because it is the computer that is supposed to be running the Max patches and loop the sound, plugging the ESP32 into the computer with USB directly (instead of powering it up with a battery) is recommended.

**Where I could have taken this and what you may want to do if you are replicating the work:**

1. Interaction / control design: Provide a file list, and allow people to press the button to switch between pre-set files (songs, auditory scenes, or else) and real-time audio input
2. Sound effect: Add reverb effect to the loop , adding another dimension for control
3. Data: Use JSON for a more stable and customizable communication
