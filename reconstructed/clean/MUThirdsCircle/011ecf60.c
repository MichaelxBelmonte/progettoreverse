// Function: FUN_011ecf60
// Address: 011ecf60
// Size: 977 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void FUN_011ecf60(float param_1)

{
  uint uVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint uVar5;
  void*puVar6;
  uint64_t uVar7;
  int64_t this_ptr;
  uint64_t uVar8;
  int64_t local_40;
  char local_38;
  
  uVar1 = *(uint *)(*(int64_t *)(this_ptr + 0x160) + 0xc);
  uVar5 = FUN_00e7d780(param_1 / (float)*(double *)(*(int64_t *)(this_ptr + 0x1d0) + 0x50));
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  puVar2 = *(void**)(this_ptr + 0x288);
  if (puVar2 == puVar6) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x288) = puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  if (0 < (int)uVar1) {
    if ((int)uVar5 < 2) {
      uVar7 = 0;
      do {
        lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + uVar7 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        local_38 = '\0';
        FUN_00d21140();
        FUN_00d50b20();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
    else {
      uVar7 = 0;
      do {
        lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + uVar7 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        local_38 = '\0';
        FUN_00d21140();
        uVar8 = 1;
        do {
          lVar4 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + uVar8 * 8);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          if (*(char *)(lVar4 + 0x3c) != '\0') {
            *(void*)(*(int64_t *)(local_40 + 0x10) + uVar8 * 4) =
                 *(void*)(lVar4 + 0x14);
          }
          FUN_00d50b20();
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar3 = *(int64_t *)(this_ptr + 0x290);
  if (lVar3 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x290) = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar3 = *(int64_t *)(this_ptr + 0x298);
  if (lVar3 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x298) = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

