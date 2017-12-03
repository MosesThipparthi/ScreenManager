/*
 * ScreenManager.cpp
 *
 *  Created on: 9. 9. 2017
 *      Author: denis
 */

#include <Arduino.h>
#include "ScreenManager.hpp"

<<<<<<< HEAD
ScreenManager::ScreenManager(Screen * s) :
		m_handler(nullptr) {
	m_tft = s->getTft();
=======
ScreenManager::ScreenManager(Screen * s):
m_handler(nullptr){
	m_tft = s->getTft();
	//m_handler = nullptr;
>>>>>>> d6f1c54e5bed26b66678e168b3471d72d9412558
	m_screen = s;
}

void ScreenManager::Update() {
	if (m_handler != nullptr) {
		m_handler->update();
	}
	m_screen->update(getAction());
	//handler->reset();
}

Adafruit_GFX* ScreenManager::getTft() {
	return m_tft;
}

void ScreenManager::setHandler(Handler* h) {
	m_handler = h;
}

Action ScreenManager::getAction() {
<<<<<<< HEAD
	if (m_handler != nullptr) {
		return m_handler->getAction();
	} else {
		return Action::NONE;
	}
=======
	return m_handler->getAction();
>>>>>>> d6f1c54e5bed26b66678e168b3471d72d9412558
}

void ScreenManager::Begin() {
	if (m_handler != nullptr) {
		m_handler->begin();
		m_handler->reset();
	}
	m_screen->begin();
}
