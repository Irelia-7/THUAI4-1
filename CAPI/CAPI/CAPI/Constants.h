#ifndef CONSTANTS_H

#define CONSTANTS_H

#include <cstdint>
#include <numeric>

#define G_SCI static constexpr inline
#define GF_CI constexpr inline
#define _NODISCARD [[nodiscard]]

namespace Constants
{

	static const uint64_t SightRadius = 5000;

	static const uint64_t SightRadiusSquared = SightRadius * SightRadius;

	static const uint32_t numOfGridPerCell = 1000;

	static const uint32_t numOfPlayer = 4;

	static const uint32_t numOfTeam = 2;

}

#undef GF_CI
#undef G_SCI

#endif //!CONSTANTS_H