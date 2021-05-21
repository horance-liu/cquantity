#ifndef AEBAA966_7EB5_47EC_864D_F68E88AB77D0
#define AEBAA966_7EB5_47EC_864D_F68E88AB77D0

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum LengthUnit {
    MILE,
    YARD,
    FEET,
    INCH,
} LengthUnit;

typedef enum VolumeUnit {
    TBSP,
    TSP,
    OZ,
} VolumeUnit;

typedef struct Length {
    uint32_t amount;
    LengthUnit unit;
} Length;

bool length_equals(const Length *lhs, const Length *rhs);

typedef struct Volume {
    uint32_t amount;
    VolumeUnit unit;
} Volume;

#ifdef __cplusplus
}
#endif

#endif /* AEBAA966_7EB5_47EC_864D_F68E88AB77D0 */
