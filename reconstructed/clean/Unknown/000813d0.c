// Function: FUN_000813d0
// Address: 000813d0
// Size: 657 bytes
// Class: Unknown

void FUN_000813d0(void)

{
  float *pfVar1;
  int64_t lVar2;
  char cVar3;
  int64_t this_ptr;
  float fVar4;
  uint64_t local_c0;
  uint8_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  uint64_t local_38;
  uint8_t local_30;
  
  FUN_00d3ecc0();
  lVar2 = g_02726c30;
  if (g_02726c30 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*local_38 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    fVar4 = (float)FUN_000780c0();
    pfVar1 = (float *)(this_ptr + 0x68);
    if ((fVar4 != *pfVar1) || (NAN(fVar4) || NAN(*pfVar1))) {
      if (fVar4 < *pfVar1 || fVar4 == *pfVar1) {
        FUN_0049e420();
        FUN_00d50b00();
        lVar2 = g_026d8460;
        if (g_026d8460 != 0) {
          FUN_00d50b00();
        }
        FUN_0049e560(*(void*)(this_ptr + 0x68),fVar4,g_02390450);
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_0049e420();
        FUN_00d50b00();
        lVar2 = g_026d8460;
        if (g_026d8460 != 0) {
          FUN_00d50b00();
        }
        FUN_0049e560(*(void*)(this_ptr + 0x68),fVar4,g_02390450);
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      *(float *)(this_ptr + 0x68) = fVar4;
    }
  }
  FUN_00d530a0();
  return;
}

