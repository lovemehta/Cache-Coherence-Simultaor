#ifndef INCLUDE_MSICACHE_H_
#define INCLUDE_MSICACHE_H_

#include "Bus.hpp"
#include "Cache.hpp"
#include "Constants.hpp"

class MSICache: public Cache {
	private:
		void read_request(_address);
		void write_request(_address);

	public:
		MSICache(_id id, Bus* pbus);

		virtual bool handle_bus_request(Bus::BusRequest);
};

#endif /* INCLUDE_MSICACHE_H_ */
