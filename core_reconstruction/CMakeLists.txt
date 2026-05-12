cmake_minimum_required(VERSION 3.22)

project(mikecore_reconstruction LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(mikecore_runtime_fft
    src/features/spectral_metrics.cpp
    src/fft/packed_spectrum.cpp
    src/rawnotes/analyzer_gate_cluster_support.cpp
    src/rawnotes/exponential_smoother.cpp
    src/rawnotes/interval_boundary_refinement.cpp
    src/rawnotes/interval_gate.cpp
    src/rawnotes/paired_peak_gate.cpp
    src/rawnotes/pitch_matrix_bridge.cpp
    src/rawnotes/raw_note_class12_builder.cpp
    src/rawnotes/raw_note_class8_builder.cpp
    src/rawnotes/threshold_seed_matcher.cpp
    src/fft/stft_frontend.cpp
    src/runtime/shared_descriptor_cache.cpp
    src/runtime/spectral_time_slice.cpp
)

target_include_directories(mikecore_runtime_fft
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(mikecore_runtime_fft PUBLIC cxx_std_20)
