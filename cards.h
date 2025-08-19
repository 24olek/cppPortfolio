//Code presents definition of classes with usage of predefined enumerator, vector type of array and 
//'switch' statement.
#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
using namespace std;
enum Type {
	Diamonds,
	Hearths,
	Clubs,
	Spades
};
class Card {
	int value;
	int type;
public:
	Card(int newValue, int newType) {
		this->value = newValue;
		this->type = newType;
	}
	void PrintValue() {
		string type;
		string value;
		switch (this->type) {
		case Diamonds:
			type = "diamonds";
			break;
		case Hearths:
			type = "hearths";
			break;
		case Clubs:
			type = "clubs";
			break;
		case Spades:
			type = "spades";
			break;
		}
		switch (this->value) {
		case 2:
			value = "two";
			break;
		case 3:
			value = "three";
			break;
		case 4:
			value = "four";
			break;
		case 5:
			value = "five";
			break;
		case 6:
			value = "six";
			break;
		case 7:
			value = "seven";
			break;
		case 8:
			value = "eight";
			break;
		case 9:
			value = "nine";
			break;
		case 10:
			value = "ten";
			break;
		case 11:
			value = "jack";
			break;
		case 12:
			value = "queen";
			break;
		case 13:
			value = "king";
			break;
		case 14:
			value = "ace";
			break;
		}
		cout << "This is " << value << " of " << type<<".";
	}
};
class Deck {
	vector<Card> cards;
public:
	Deck() {
		for (int i = 0; i < 3; i++) {
			for (int j = 2; j < 14; j++) {
				cards.push_back(Card(j, i));
			}
		}
	}
	void Shuffle() {
		std::random_device rd;
		std::mt19937 g(rd());
		std::shuffle(cards.begin(), cards.end(), g);
	}

};
