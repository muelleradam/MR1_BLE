This code is largely based on an example of nkloban.

Check out: https://github.com/nkolban/ESP32_BLE_Arduino/

The ESP connects as a client to a server which must be defined in a new file named "myUUIDs.h".
The client may then read the RSSI and lightly filter the values read.
The filter calculates the mean out of 4 Values.
It also prevents spikes which sometimes occur when reading the rssi.

The data is getting sent via uart as one byte since the values should always be in
the range of 0 to 255. This is so the master node can read the serial data more easily.