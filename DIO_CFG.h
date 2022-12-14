/*
 * DIO_CFG.h
 * Created: 8/31/2021 1:07:42 AM
 *  
 */ 


#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#define DIRECTION_REGISTER_B      DDRB
#define DIRECTION_REGISTER_D      DDRD
#define DIRECTION_REGISTER_C      DDRC
#define DIRECTION_REGISTER_A      DDRA

#define WRITE_DATA_REGISTER_B     PORTB
#define WRITE_DATA_REGISTER_D     PORTD
#define WRITE_DATA_REGISTER_C     PORTC
#define WRITE_DATA_REGISTER_A     PORTA

#define READ_DATA_REGISTER_B      PINB
#define READ_DATA_REGISTER_D      PIND
#define READ_DATA_REGISTER_C      PINC
#define READ_DATA_REGISTER_A      PINA

#endif /* DIO_CFG_H_ */