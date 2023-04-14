#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <time.h>
#include <string>
#include <SFML/Graphics.hpp>
#include <chrono>
#include <thread>
#include <SFML/System.hpp>
#include <queue>

#include "MyCostants.h"

#include "Pipe.h"
#include "Scoreboard.h"

using namespace std;

class Barriers
{

public:


	int amount;

	int first_element;

	vector<pair<Pipe, Pipe>> pipes; // ������� � ������

	Barriers();

	void generate_pipes();

	void next_tick();

	void update_pipes();

	void stop_pipes();

	void start_pipes();

	void reset();

	void draw_pipes(sf::RenderWindow& _window);

	void draw_grass(sf::RenderWindow& _window);

	void draw_all(sf::RenderWindow& _window);

};

