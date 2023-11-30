/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "constants.h"

// This is a small number so that it's easy to read the logs
const int kInferencesPerCycle = 20;

float vector_overwrite_fenwick[150] = {
       -1.930e+02,  1.050e+02,  1.521e+03,  3.000e+00,  1.520e+02,
        1.217e+03, -4.000e+01, -2.490e+02,  1.081e+03, -7.300e+01,
        2.300e+01,  1.286e+03, -1.910e+02,  6.800e+01,  1.423e+03,
       -1.250e+02, -3.900e+01,  1.144e+03, -1.090e+02,  1.600e+01,
        1.060e+03, -7.400e+01,  3.000e+00,  1.364e+03, -1.200e+02,
        8.100e+01,  1.100e+03, -1.530e+02, -6.500e+01,  1.263e+03,
       -9.500e+01,  7.600e+01,  1.395e+03, -1.450e+02,  3.000e+01,
        1.224e+03, -1.480e+02,  2.500e+01,  1.080e+03, -1.130e+02,
       -8.800e+01,  1.039e+03, -1.530e+02, -1.360e+02,  1.243e+03,
       -7.300e+01,  1.470e+02,  1.504e+03, -1.830e+02,  2.600e+02,
        1.200e+03, -1.570e+02, -2.570e+02,  1.001e+03, -2.330e+02,
       -1.190e+02,  1.190e+03, -1.160e+02,  8.100e+01,  1.352e+03,
        3.100e+01,  1.740e+02,  1.528e+03, -7.200e+01, -2.100e+02,
        1.159e+03, -8.200e+01, -1.760e+02,  1.235e+03,  5.400e+01,
       -1.300e+01,  1.148e+03, -1.000e+00,  2.440e+02,  1.343e+03,
       -1.720e+02, -2.120e+02,  1.376e+03, -9.400e+01,  3.500e+01,
        1.095e+03, -9.300e+01,  6.000e+01,  1.080e+03, -1.130e+02,
       -4.000e+01,  1.479e+03, -1.890e+02,  0.000e+00,  1.279e+03,
       -1.670e+02,  2.400e+01,  1.104e+03,  4.800e+01, -1.700e+01,
        1.270e+03, -7.200e+01, -3.200e+01,  1.352e+03, -2.760e+02,
        6.300e+01,  1.104e+03, -7.700e+01,  2.300e+01,  1.207e+03,
       -4.200e+01, -1.000e+00,  1.351e+03, -8.200e+01, -4.000e+01,
        1.019e+03, -1.830e+02, -4.000e+01,  1.263e+03, -1.210e+02,
        6.400e+01,  1.375e+03, -1.140e+02, -2.500e+01,  1.143e+03,
       -1.530e+02,  5.600e+01,  1.305e+03, -1.960e+02,  3.800e+01,
        1.200e+03, -8.700e+01, -4.500e+01,  1.153e+03, -1.190e+02,
        2.500e+01,  1.166e+03, -8.800e+01, -7.700e+01,  1.356e+03,
       -1.160e+02,  7.100e+01,  1.295e+03, -1.510e+02, -6.500e+01,
        1.059e+03, -6.100e+01,  8.000e+00,  1.182e+03, -1.000e+02,
        1.600e+01,  1.328e+03, -1.080e+02,  3.000e+00,  1.171e+03
    };
