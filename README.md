# :fire:Flame_Alert:fire:
### Flame alert made with HC-05 bluetooth module, KY-026 flame sensor and Arduino UNO. When flame is detected, Arduino sends the "!!FIRE ALERT!!" message to phone via bluetooth.

## 	:pushpin:Fritzing Schematic:
![alt text](/images/flame-bt-fr.png)

## :pushpin:Phone Interface with Bluetooth Electronics Application:
-My phone is android. I used the application "Bluetooth Electronics". You can find it at Play Store.
![alt text](/images/App-andr.png)

-Open the app and create a new panel. Add a text and a buzzer. There is a menu at the right of the screen. You can find these features and add them from the menu.
![alt text](/images/tutorial1.png)

-Touch the feature to edit. (After touching, the "edit" will be appear at the right bottom.)

-For the text, editing should be done as follows:
![alt text](/images/tutorial2.png)
![alt text](/images/tutorial3.png)

-For the buzzer:
![alt text](/images/tutorial4.png)

-Then, please set the circuit and upload the code. While the circuit is powered, open your phone's bluetooth and then connect it with the HC-05. This part is depends on your phone's model.  If it asks you a pin while connecting to the HC-05, probably it is 0000 or 1234.

-Open the application. Choose the panel you did. Select "Connect" option. And Connect to the HC-05.
![alt text](/images/tutorial5.png)
![alt text](/images/tutorial6.png)
![alt text](/images/tutorial7.png)

-Lastly, back to the menu and select the panel. Then run it. You can test it with a lighter. When flame detected, the text will change and the buzzer start to buzz!
