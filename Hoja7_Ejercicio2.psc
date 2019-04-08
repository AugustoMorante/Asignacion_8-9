Algoritmo Hoja_7_Ejercicio_2
	Escribir "Ingresar número de seis dígitos (abcdef)"
	Leer N
	F <- N mod 10
	E <- ((N mod 100) - F) / 10
	D <- ((N mod 1000) - (10*E + F)) / 100
	C <- ((N MOD 10000) - (100*D + 10*E + F)) / 1000
	B <- ((N MOD 100000) - (1000*C + 100*D + 10*E + F)) / 10000
	A <-  ((N MOD 1000000) - (10000*B + 1000*C + 100*D + 10*E + F)) /100000
	Resul <- (A * 100000) + (F * 10000) + (B * 1000) + (E * 100) + (C * 10) + D
	Escribir "Nuevo orden (afbecd)"
	Escribir Resul
FinAlgoritmo
