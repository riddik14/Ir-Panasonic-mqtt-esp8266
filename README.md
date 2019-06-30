# AC Pompa di Calore Ir-Panasonic-mqtt-esp8266
Controlla il tuo condizionatore panasonic con  mqtt e esp8266


<img src="https://github.com/riddik14/Ir-Panasonic-mqtt-esp8266/blob/master/Immagine.png">
-
-
-
Se il pregetto ti è piaciuto clicca <a href="https://www.paypal.me/DomenicoCeccarelli">qui</a> per offrirmi un caffè
-
-
-
-
-


librerie usate
<a href="https://github.com/markszabo/IRremoteESP8266">libreria ir remote</a>
<a href="https://github.com/knolleary/pubsubclient">libreria mqtt</a>
-
-
basato su questo progetto<a href="https://community.home-assistant.io/t/enhanced-version-of-mqtt-hvac-climate-platform-with-proper-history-chart/75304"> qui per la parte hassio</a>
-
-
-
-
-
-
Materiale occorrente:
-
-
-
-
-
-

wemos D1 mini o qualsiasi ESP8266
<img src="https://images-na.ssl-images-amazon.com/images/I/71Q2T%2B9myRL._SL1000_.jpg"><a href="https://www.aliexpress.com/item/32845061455.html?spm=2114.search0204.3.68.67ab4f8dzGfmZz&ws_ab_test=searchweb0_0%2Csearchweb201602_3_10065_10068_319_317_10696_10084_453_10083_454_10618_10304_10307_10820_10821_537_10302_536_10843_10059_10884_10887_321_322_10103%2Csearchweb201603_60%2CppcSwitch_0&algo_expid=1f10874f-5b2e-4e0b-967b-45e419be5670-9&algo_pvid=1f10874f-5b2e-4e0b-967b-45e419be5670&transAbTest=ae803_4">link aliexpress</a>

Module IR TX
<img src="https://ae01.alicdn.com/kf/HTB1mXCbKXXXXXc7XVXXq6xXFXXXQ/Infrared-Emitter-IR-Transmitter-38KHz-940nm-IR-Emitter-Module-for-Arduino.jpg_640x640.jpg"><a href="https://www.aliexpress.com/item/1922513322.html">link aliexpress</a>     

-
-
-
-
-
-
-
-








TUTORIAL
connettere il module IRTX al wemosD1mini
-
- pin SIG alla porta GPIO4 (D2)
- pin gnd a gnd
- pin vcc a +5v o 3V (cambia la portata del segnale)
-
-
- arduino IDE con la configurazione dei moduli ESP8266 e le librerie allegate.
- cambiare i parametri relativi a wifi password mqtt server username e password
- connettere il PIN D3 con GND del wemos, premere reset o collegarlo alla usb del pc e caricare il firmware

PS tutte le modalità sono con le seguenti configurazioni
swingH: AUTO
swingV: AUTO
Velocità ventola: AUTO

le funzioni comandabili da MQTT

topic_mqtt: ha/ac_panasonic

playload:

ONcold
OFFcold

ONhot
OFFhot

ONdry
OFFdry

ONauto
OFFauto

Configurazione hassio

copiare i file dentro my_mqtt.zip in \config\custom_components della cartella configurazione di hassio

aggiungere nel configuration.yaml


climate:
  - platform: my_mqtt
    name: "Thermostat"
    #optimistic: false
    retain: false
    qos: 0
    payload_on: 1
    payload_off: 0
    modes:
      - auto
      - heat
      - cool
      - dry
      - 'off'
    mode_command_topic: "ha/ac_panasonic"
    mode_command_template: >-
      {% set values = { 'auto':'ONauto', 'heat':'ONhot',  'cool':'ONcold', 'dry':'ONdry', 'off':'OFFcold'} %}
      {{ values[value] if value in values.keys() else '4' }}
    current_temperature_topic: "ha/ac_panasonic/temperature"
    min_temp: 17
    max_temp: 30


_____________________________________________________________-

