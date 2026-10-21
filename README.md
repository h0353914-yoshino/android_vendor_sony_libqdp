# libqdp (rebuilt)

Ghidra decompilation of Qualcomm/Sony `libqdp.so` (arm64, stock sha1 `f83527aa6b6aa45c6495056dc830affbe889fb18`), rebuilt as C.

## Contents

- `libqdp_recon.c`: rebuilt C source (70 functions, same exports as the stock library).
- `data/qdp_data.S`: the stock library's data image (`.data.rel.ro` / `.data` / GOT slots) with its pointer relocations.
- `Android.bp`: `cc_library_shared` module named `libqdp` (arm64, vendor).

## Behavior

- The rebuild reproduces the stock library except for the APN-type-mask fix: `qdp_3gpp_profile_create` and `qdp_3gpp_profile_fill_common_params` (inlined into `update_params_v2` in the stock binary) keep `apn_type_mask_valid = 0`, so TLV 0xDD is never sent. The A9-era modem does not know this TLV and rejects the whole CREATE/MODIFY. This matches the blob patch (`strb w28/w23` -> `strb wzr`).
- The Ghidra pipeline, verification harnesses and reference dumps are not part of this repo.

## Verification

- Differential tests against the stock library: 100 random cases per function over 67 functions (the harness skips 3), 0 differences, with simulated QMI responses. These do not exercise the data relocations.
- Data image: all 1441 stock pointer relocations are present with the same targets. An earlier build lost about 700 of them (a chunking bug in `build_data.py`), which crashed qcrild at startup; the differential tests did not catch it.
- On device (G8342, BH90018Q63): boots, LTE attaches, no qcrild crashes across boot, airplane mode toggle and an APN change.
