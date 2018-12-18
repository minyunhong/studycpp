#ifndef DELIVERY_HPP
#define DELIVERY_HPP

#include "main.hpp"
#include <array>
#include <queue>
#include <vector>

class Delivery : public Main
{
public:
	void Main();
	void dijkstra(int start);
};

void delivery_main();

#endif