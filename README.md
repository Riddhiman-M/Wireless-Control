## Bluetooth

<h4>This project involves wireless communication from Arduino Microcontroller to an Android App usig the HC-05 Bluetooth Module. An ultrasonic sensor (HC-SR04) has been used to detect if a person comes near the system (less than a certain threshold distance) then this gets detected on the App with a green signal and otherwise a red signal is displayed.</h4>

<br><h3>Flow of data</h3>
<h4>Ultrasonic sensor -> Arduino -> Bluetooth Module -> Application</h4>
<br>
<h4>The Application was developed using MIT App Inventor as below:</h4>

<p float="left">
  <img src="https://user-images.githubusercontent.com/89708853/169047107-8f4fa8e4-55bd-4261-b691-34fcbbe7f254.png" width=20% height=25%>
  <img src="https://user-images.githubusercontent.com/89708853/169049135-4037ebfc-8afe-4172-9e6b-0d25fe5ab960.png" width=40% height=40%>
</p>

## How to Connect?
<h4><ul>
  <li>Assemble the Arduino Circuit as below:</li>
  <img src="https://user-images.githubusercontent.com/89708853/169070252-0c195f15-a159-4d00-94f7-02458ce2a889.jpg" width=30% height=30%>
  <li>Download the Arduino Code (.ino file) and upload it to the Arduino.
    <br><I>Note: Make sure while uploading the code, the TX, RX pins of the Arduino are disconnected. Once the code gets uploaded, then those 2 pins can be connected again.</I></li>
  <li>Install the app from the apk. This kind of an interface should be visible on opening the app.</li>
  <img src="https://user-images.githubusercontent.com/89708853/169068913-a5378fe3-e316-4020-8a80-cf151adbc107.jpg" width=20% height=10%>
  <li>Click on Bluetooth Devices and select the option HC-05 (Make sure your phone is paired with the Bluetooth Module before this). If the connection has been made the Bluetooth Devices Option will change to a Bluetooth icon.</li>
  <li>When in use the application would give a green signal for distance < 10 and red signal for distance > 10.</li>
    <p float="left">
      <img src="https://user-images.githubusercontent.com/89708853/169071818-e6ed4f75-8248-46a9-879f-1493666884bf.jpg" width=40% height=40%>
      <img src="https://user-images.githubusercontent.com/89708853/169071796-c9246d90-6133-4eb1-a187-96bc393cfb68.jpg" width=40% height=40%>
    </p>
  
  </ul>
  </h4>
