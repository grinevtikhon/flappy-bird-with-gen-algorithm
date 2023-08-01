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

using namespace std;

class Network
{
public:

	vector<vector<double>> value;
	vector<vector<double>> bias;

	vector<vector<vector<double>>> w;

	vector<double> ans;

	double mistake;

	Network(vector<int> _v);

private:

	void generateRandomW();
	void generateRandomBias();

	void calculate_neuron(int& _x, int& _y);
	void calculate_line(int _x);

public:

	void calculate_network();

	void setInput(vector<double> _v);

	void setAnswer(vector<double> _v);
	vector<double> getAnswer();

	void calculate_mistake();

	void clear_mistake();
	void set_mistake(double _mistake);
	double get_mistake();

	bool operator<(Network& _n);
	bool operator<=(Network& _n);
	bool operator==(Network& _n);
	bool operator>(Network& _n);
	bool operator>=(Network& _n);

	void mutate(Network& _n, double _dispersion);

	double fuction(vector<double> _x);

	void calculate_mistake_for_dots(vector<double> _dot, vector<double> _ans);

};
