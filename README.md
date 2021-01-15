# Taster-am-Arduino

Eine LED per Tastendruck aktivieren
Aufgabe: Eine LED soll für 5 Sekunden leuchten, wenn ein Taster betätigt wurde.

Material: Arduino / eine LED (blau) / Ein Widerstand mit 100 Ohm / Ein Widerstand mit 1K Ohm (1000 Ohm) / Breadboard / Kabel / Taster

Der Mikrocontroller kann an seinen digitalen Pins nicht nur Spannungen ausgeben, sondern auch auslesen. Dies wollen wir in diesem Programm ausprobieren. Bei dem Aufbau gibt es jedoch eine Besonderheit. Wenn man den Taster einfach nur mit dem Mikrocontroller verbindet, dann liegt an dem Pin des Mikrocontrollers eine Spannung an, sobald der Taster gedrückt wird. Man kann sich das so vorstellen, als würden an dem besagten Pin ganz viele Elektronen herumschwirren. Wenn der Taster dann losgelassen wird, kommen keine neuen Elektronen mehr zu dem Pin am Mikrocontroller hinzu. Jetzt kommt der Knackpunkt. Die Elektronen, die es sich vorher auf dem Pin gemütlich gemacht haben, sind dann immer noch da und entweichen nur ganz langsam über kleine Kriechströme. Der Mikrocontroller denkt dann also, dass der Taster nicht nur kurz gedrückt wird sondern dass er ganz lange gedrückt wird. Nämlich so lange, bis sich keine Elektronen mehr auf dem Pin aufhalten.

Dieses Problem kann man dadurch beheben, dass man den Pin über einen Widerstand mit ca. 1000 Ohm (1 K Ohm) erdet. Die Elektronen können dadurch recht schnell vom Pin abfließen und der Mikrocontroller erkennt, dass der Taster nur kurz „angetastet“ wurde. Da der Widerstand die Spannung an dem Eingangspin immer auf 0V „herunter zieht“, wird er auch als „PULLDOWN-“ Widerstand bezeichnet. ACHTUNG: Wenn man dafür einen zu kleinen Widerstand verwendet, kann beim Drücken des Tasters ein Kurzschluss auf dem Mikrocontroller entstehen.


Weitere Infos unter: https://funduino.de/
