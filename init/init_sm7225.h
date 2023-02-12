#ifndef INIT_SEC_H
#define INIT_SEC_H

#include <string.h>

enum device_variant {
    VARIANT_M236B,
    VARIANT_E236B,
};

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant international_models = {
    .model = "SM-M236B",
    .codename = "m23xq"
};

static const variant india_models = {
    .model = "SM-E236B",
    .codename = "m23xq"
};

static const variant *all_variants[VARIANT_MAX] = {
    &international_models,
    &india_models,
};

#endif // INIT_SEC_H
