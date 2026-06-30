#include "Transport.h"

Transport::Transport() {
	setTank(0);
}
Transport::Transport(int tank) {
	setTank(tank);
}
Transport::~Transport() {}

int Transport::getTank() {
	return tank;
}
void Transport::setTank(int tank) {
	if (tank > 0) {
		this->tank = tank;
	}
}