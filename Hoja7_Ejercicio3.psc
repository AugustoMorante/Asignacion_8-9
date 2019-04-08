Algoritmo Hoja_7_Ejercicio_3
	sb <- 2500
	Escribir "Es extranjero?"
	Escribir "Escribe 1 si es si o 2 si es no"
	Leer e
	Escribir "Edad"
	Leer ed
	Si e < 2 Entonces
		s <- sb + 500
	SiNo
		s <- sb + 0
	Fin Si
	Si n >= 15 o n <= 20 Entonces
		sr <- s + 1400
	SiNo
		Si n >= 21 o n <= 25  Entonces
			sr <- s + 1500
		SiNo
			Si n >= 25 o n <= 30   Entonces
				sr <- s + 1200
			SiNo
				sr <- s + 800
			Fin Si
		Fin Si
	Fin Si
	Escribir "Sueldo"
	Escribir sr

FinAlgoritmo
