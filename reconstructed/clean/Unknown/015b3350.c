// Function: FUN_015b3350
// Address: 015b3350
// Size: 643 bytes
// Class: Unknown

void* FUN_015b3350(float param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  void*puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t *arg1;
  void*this_ptr;
  int iVar9;
  float fVar10;
  float local_44;
  int64_t local_40;
  char local_38;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  if (2 < param_2) {
    fVar10 = *(float *)*arg1;
    pfVar1 = (float *)*arg1 + 1;
    if (*pfVar1 <= fVar10 && fVar10 != *pfVar1) {
      fVar10 = (float)FUN_00e83930(g_02394254,0);
      FUN_014328b0((double)fVar10,(double)local_44);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar6 = 1;
    iVar9 = 0;
    iVar8 = 0;
    do {
      lVar4 = *arg1;
      fVar10 = *(float *)(lVar4 + -4 + uVar6 * 4);
      fVar2 = *(float *)(lVar4 + uVar6 * 4);
      fVar3 = fVar10;
      if ((fVar10 != fVar2) || (NAN(fVar10) || NAN(fVar2))) {
LAB_015b34ca:
        iVar8 = (uint)(fVar3 < fVar2) * 2 + -1;
LAB_015b34e4:
        iVar9 = iVar9 + 1;
        if (fVar10 != fVar2) {
          iVar9 = 0;
        }
        if (NAN(fVar10) || NAN(fVar2)) {
          iVar9 = 0;
        }
        if ((((param_1 < fVar2) && (0 < iVar8)) && (fVar10 <= fVar2)) &&
           (pfVar1 = (float *)(lVar4 + 4 + uVar6 * 4), *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
          uVar7 = uVar6;
          if (iVar9 != 0) {
            uVar7 = (uint64_t)(uint)((int)uVar6 - iVar9 / 2);
          }
          fVar10 = (float)FUN_00e83930(g_02394254,uVar7);
          FUN_014328b0((double)fVar10,(double)local_44);
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if (iVar8 != 0) goto LAB_015b34e4;
        fVar3 = *(float *)(lVar4 + 4 + uVar6 * 4);
        if ((fVar3 != fVar2) || (NAN(fVar3) || NAN(fVar2))) goto LAB_015b34ca;
        iVar9 = iVar9 + 1;
        iVar8 = 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_2 - 1);
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

