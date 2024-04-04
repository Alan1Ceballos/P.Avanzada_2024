
#ifndef DTFECHA_H_
#define DTFECHA_H_

class DtFecha {
	private:
		int Dia,Mes,Anio;
	public:
		DtFecha() : Dia(0), Mes(0), Anio(0) {};
		DtFecha(int , int , int );
		int getFechaNacimientoDia();
		int getFechaNacimientoMes();
		int getFechaNacimientoAnio();
};


#endif /* DTFECHA_H_ */
