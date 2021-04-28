/**
 * @file pulsing.h
 * @brief Datoteka koja deklarise pulsing
 * @author Aleksa Djokovic
 * @date 22-3-2021
 * @version 1.0
 *
 */
#ifndef PULSING_H_
#define PULSING_H_

#include "util.h"
#include "timer0.h"
#include "../pin_driver/pin.h"

/**
 * pinPulsing - Funkcija koja implementira num_of_repetitions perioda podizanja i spustanja vrednosti na pinu
 * odgovarajucom brzinom
 * @param port - ulaz tipa unsigned char - Port na kojem je potrebno implementirati funkcionalnost
 * @param pin - ulaz tipa unsigned char - Pin na kojem je potrebno implementirati funkcionalnost
 * @param period - ulaz tipa unsigned long - Perioda promene vrednosti na pinu
 * @param num_of_repetitions - ulaz tipa unsigned char - Broj perioda koje je potrebno implementirati
 * @return Nema povratnu vrednost
 */
void pinPulsing(unsigned char port, unsigned char pin, unsigned long period, unsigned char num_of_repetitions);

/**
 * pinPulse - Funkcija koja implementiran podizanje i spustanje vrednosti na pinu
 * odgovarajucom brzinom
 * @param port - ulaz tipa unsigned char - Port na kojem je potrebno implementirati funkcionalnost
 * @param pin - ulaz tipa unsigned char - Pin na kojem je potrebno implementirati funkcionalnost
 * @param period - ulaz tipa unsigned long - Perioda promene vrednosti na pinu
 * @return Nema povratnu vrednost
 */
void pinPulse(unsigned char port, unsigned char pin, unsigned long period);


#endif /* PULSING_H_ */
