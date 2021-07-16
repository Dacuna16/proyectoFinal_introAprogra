# proyectoFinal_introAprogra

DESCRIPCIÓN: Mejorar el Servicio de Transporte Turismo_Tico S.A

La empresa TurismoTico S.A quiere mejorar su servicio de transporte a los clientes en todo el territorio nacional, sin embargo, antes de aplicar las mejoras necesita hacer un estudio para conocer sobre las personas que usan el servicio y adaptar algunas necesidades o mejoras en los medios de transporte como sillas de niños, espacios más amplios para los discapacitados, aire acondicionado, servicio sanitario dentro el autobús, etc.

El programa se implementará tanto en los dispositivos móviles de los autobuses de transporte como en las computadoras de los(as) encargados(as) administrativos(as), por
lo tanto, el sistema debe tener dos tipos de usuarios.

 Usuario de Autobús.
 Usuario Administrativo.

Perfil de Autobús

Este usuario será utilizado en los dispositivos móviles por los(as) conductores(as) y los asistentes del transporte, los cuales registrarán los siguientes datos:

1. Registro de pasajeros(as). –El asistente o el chofer deben de registrar la información de los pasajeros antes de ingresar.
La información se guardará en un archivo de texto y para los datos numéricos como las fechas se guardará en formato hexadecimal, los datos son los siguientes:

Tipo turismo:
 vol – volcanes
 pla - playa
 mon – montaña
 avt – aventura
rap – rápidos

Tipo de personas:
 pen – Pensionado (65 años en adelante)
 nin – Niño (0-11 años)
 ado – Adolecente (12-17 años)
 adu – Adulto (de 18 años en adelante, antes de los 65 años)
 dis – Discapacitado

Género:
 fe – Femenino
 ma – Masculino
 otr - Otro

Fecha Actual: dd/mm/yyyy (estos datos en hexadecimal)

Peticiones:
 sin – Silla para niño (a)
 wc – Servicio sanitario
 aic – Aire Acondicionado
 sir – Espacio para silla de ruedas
 asi – asistencia para subir y bajar del autobús
 rap – rampa en el autobús
 veg – vegano
 sgl – comida sin gluten
 css – comida sin semillas
 tra - traductor

2. Visualización del archivo de usuario.
La información en el archivo se guardará en una línea por pasajero y la información de los campos se separará por el símbolo “&”.
Ejemplo del archivo:

pla&nin&fe&C&7&7E5&sin&css
pla&dis&ma&C&7&7E5&sir&asi&rap
pla&adu@ma@C@7@7E5&wc&sgl
pla&adu@ma@C@7@7E5

Usuario Administrativo
Este usuario es para el personal administrativo.
1. El sistema debe de leer el archivo con la información generada de los pasajeros de los autobuses para que pueda ser analizada por la gerencia.
2. Visualización del archivo. – Opción que permita visualizar el listado del archivo de texto ejemplo:

Consideraciones técnicas:
 Debe implementar una función que pase de decimal a Hexadecimal para guardar la información en el archivo, así como una función que pase de hexadecimal a
decimal cuando lea el archivo.
 Además, debe de implementar el uso de 2 funciones propias a parte de las indicadas anteriormente, y debe de indicar que es lo que realizan (si son más no
hay problema).
 Debe implementar el uso de entrada y salida de flujos como los modificadores de base.
 Debe implementar el uso de funciones para el manejo y manipulación de cadenas.
 Debe implementar el manejo de excepciones utilizando las estructuras “try, catch y throw”

