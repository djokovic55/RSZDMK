/**
 * @file timer0.h
 * @brief Datoteka koja deklarise funkcije za upravaljanje tajmerom 0
 * @author Aleksa Djokovic
 * @date 22-3-2021
 * @version 1.0
 *
 */
#include <avr/interrupt.h>
#ifndef TIMER0_H_
#define TIMER0_H_

/**
 * timer0DelayMs - Funkcija koja implementira pauzu u broju milisekundi koji je prosledjen
 * kao parametar
 * @param delay_length - ulaz tipa unsigned long - Duzina pauze u milisekundama
 * @return Povratna vrednost je tipa unsigned long i ima vrednost broja milisekundi
 * proteklih od pocetka aplikacije do trenutka izlaska iz funkcije
 */
unsigned long timer0DelayMs(unsigned long delay_length);

/**
 * timer0InteruptInit - Funkcija koja inicijalizuje timer 0 tako da pravi prekide
 * svake milisekunde
 * @return Nema povratnu vrednost
 */
void timer0InteruptInit();

#endif /* TIMER0_H_ */
