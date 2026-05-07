// Function: FUN_015b46b0
// Address: 015b46b0
// Size: 1005 bytes
// Class: Unknown

void* FUN_015b46b0(uint64_t param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  void*puVar6;
  int64_t *arg1;
  void*this_ptr;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint64_t uVar10;
  int64_t local_40;
  char local_38;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  if (2 < param_2) {
    uVar9 = param_2 - 1;
    uVar10 = 1;
    iVar8 = 0;
    iVar7 = 0;
    do {
      pfVar4 = (float *)*arg1;
      fVar1 = pfVar4[uVar10 - 1];
      fVar2 = pfVar4[uVar10];
      iVar5 = (int)uVar10;
      if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
        if (fVar1 < fVar2) {
LAB_015b4771:
          iVar8 = iVar8 + 1;
          if (fVar1 != fVar2) {
            iVar8 = 0;
          }
          if (NAN(fVar1) || NAN(fVar2)) {
            iVar8 = 0;
          }
          iVar7 = 1;
          goto LAB_015b47a2;
        }
LAB_015b4810:
        iVar8 = iVar8 + 1;
        if (fVar1 != fVar2) {
          iVar8 = 0;
        }
        if (NAN(fVar1) || NAN(fVar2)) {
          iVar8 = 0;
        }
        iVar7 = -1;
LAB_015b482a:
        if ((fVar2 <= fVar1) && (fVar2 < pfVar4[uVar10 + 1])) {
          if (iVar8 != 0) {
            iVar5 = iVar5 - iVar8 / 2;
          }
          FUN_014328b0((double)iVar5,(double)fVar2);
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
      else if (iVar7 == 0) {
        fVar3 = pfVar4[uVar10 + 1];
        if ((fVar3 != fVar2) || (NAN(fVar3) || NAN(fVar2))) {
          if (fVar2 <= fVar3) goto LAB_015b4810;
          goto LAB_015b4771;
        }
        iVar8 = iVar8 + 1;
        iVar7 = 0;
      }
      else {
        iVar8 = iVar8 + 1;
        if (iVar7 < 1) goto LAB_015b482a;
LAB_015b47a2:
        if ((fVar1 <= fVar2) && (pfVar4[uVar10 + 1] <= fVar2 && fVar2 != pfVar4[uVar10 + 1])) {
          if (*(int *)((int64_t)puVar6 + 0xc) == 0) {
            FUN_014328b0(0,(double)*pfVar4);
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
          if (iVar8 != 0) {
            iVar5 = iVar5 - iVar8 / 2;
          }
          FUN_014328b0((double)iVar5,(double)*(float *)(*arg1 + uVar10 * 4));
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
      uVar10 = uVar10 + 1;
    } while (uVar9 != uVar10);
    if ((1 < (int)*(uint *)((int64_t)puVar6 + 0xc)) &&
       ((*(uint *)((int64_t)puVar6 + 0xc) & 1) == 0)) {
      FUN_014328b0((double)(int)uVar9,(double)*(float *)(*arg1 + (int64_t)(int)uVar9 * 4));
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
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

