// Function: FUN_011ed4f0
// Address: 011ed4f0
// Size: 1046 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void FUN_011ed4f0(float param_1)

{
  uint uVar1;
  void*puVar2;
  int64_t lVar3;
  uint uVar4;
  void*puVar5;
  int64_t this_ptr;
  uint64_t uVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t local_40;
  char local_38;
  
  uVar1 = *(uint *)(*(int64_t *)(this_ptr + 0x160) + 0xc);
  uVar4 = FUN_00e7d780(param_1 / (float)*(double *)(*(int64_t *)(this_ptr + 0x1d0) + 0x50));
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  puVar2 = *(void**)(this_ptr + 0x2a0);
  if (puVar2 == puVar5) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x2a0) = puVar5;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00d21140();
  FUN_00d50b20();
  if (1 < (int)uVar4) {
    if ((int)uVar1 < 1) {
      iVar8 = uVar4 - 1;
      do {
        FUN_00c8e690();
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        FUN_00d21140();
        FUN_00d50b20();
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    else {
      uVar7 = 1;
      do {
        FUN_00c8e690();
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        FUN_00d21140();
        uVar6 = 0;
        do {
          lVar3 = *(int64_t *)
                   (*(int64_t *)
                     (*(int64_t *)
                       (*(int64_t *)(*(int64_t *)(this_ptr + 0x280) + 0x10) + uVar6 * 8) + 0x10)
                   + uVar7 * 8);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          if (*(char *)(lVar3 + 0x3d) != '\0') {
            *(void*)(*(int64_t *)(local_40 + 0x10) + uVar6 * 4) =
                 *(void*)(lVar3 + 0x14);
          }
          FUN_00d50b20();
          uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar4);
    }
  }
  FUN_00c8e690();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar3 = *(int64_t *)(this_ptr + 0x2a8);
  if (lVar3 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x2a8) = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar3 = *(int64_t *)(this_ptr + 0x2b0);
  if (lVar3 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x2b0) = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

