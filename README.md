# Serial_Relayer
A Windows application to monitor, save, and relay incoming data from a COM port to another.
The one thing that seperates this app from others is that you should know the number of bytes received in each transmission. 
Otherwise data will not be recorded and saved in proper order.

## Receiver Port
As you can tell Receiver Port is the COM port that receives data (from an Arduino, for example).

Choose the COM Port you want to read data from. And set Baud Rate, Data Bits, Stop Bits, and Parity parameters.

### Change Byte Configuration
This is where you set the number of bytes you are receiving (will be referred as package) in each transmission.

#### Number of Sections
This is how many sections each of your packages consists of. However this doesn't have any effect on reading or transmitting data, it only effects how the data is saved to the computer.
As an example, let's say you are receiving an 9-byte array: first byte is a char indicating your name's first letter, next two bytes are a short int counting from zero to 32767, last 4 bytes are a float coming from a temperature sensor.
In this case, if you want them to be seperated and named when saved, byte configuration should look like this: (Don't forget to click the "Apply Changes" button)

![image](https://github.com/C-EkoEko/Serial_Relayer/assets/110466108/b9691321-6d93-4a1f-b1c4-007d205a3015)


And saved data will look like this (Time stamp is added automatically):

*Add Image*

#### Export Configuration
Each time you open the app Byte Configuration will be reseted.
If you are going to use the same configuration multiple times and don't want to write the configuration again, you can save the configuration as a .txt file.
Just click the "Export Configuration Button" and choose location. Saved file is meant to be human-readible (definitely not because I didn't want work more).
You can open it and find out the logic easily and change the content according to will. 

#### Import Configuration
Just open the .txt file you saved with "Export Configuration".

DON'T FORGET TO CLICK "APPLY CHANGES" BUTTON!


## Transmitter Port
Transmitter Port is the COM port that you want to relay the data coming from Receiver Port. 

After choosing the COM Port, set the Baud Rate, Data Bits, Stop Bits, and Parity parameters again or if they are same as the Receiver Port check the "Same As Receiver" checkbox.
If you only want to read receive data and not send, you can disable sending by checking the Disable checkbox.

If you want to relay it to another computer you should use a device (two usb-ttl converters, for example) instead of directly connecting them with a USB-USB connector.

