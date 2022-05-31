# Automatic-door-lock-with-face-mask-detection.
Detecting face mask with CNN model to control solenoid lock with Arduino Uno.

Working :- Here i have created a cnn model in jupyter notebook and used that model to detect face mask using live video feed from the webcam.
After face mask is checked a serial output is send to the arduino uno board and it is used to control a led indicator and a solenoid door lock.

This repository has the following files and folders:-
1.Arduino code - This folder contains the arudino code file to be uploaded on the arudino uno microcontroller to control the Lock and led using the serial input recieved after detection of mask.
2. face_detector - This folder contains the face detector algorithm used to detect face in the live video feed.
3. maskdetectionlive.py - This is the progran that uses the face_detector and the mask_detector.model to detect faces and predict mask respectively.
4. Model_training.ipynb is the jupyter notebook file where i have trained the model using data from the dataset folder.
