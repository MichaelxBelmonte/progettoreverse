// Function: FUN_012205a0
// Address: 012205a0
// Size: 837 bytes
// Class: Unknown

void FUN_012205a0(void)

{
  float fVar1;
  uint uVar2;
  int64_t lVar3;
  uint32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t *this_ptr;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t local_40;
  char local_38;
  
  lVar5 = *this_ptr;
  if (0 < *(int *)(lVar5 + 0xc)) {
    lVar7 = 0;
    do {
      lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar7 * 8);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      FUN_015f8890();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      uVar2 = *(uint *)(local_40 + 0xc);
      uVar9 = (uint64_t)uVar2;
      if (uVar9 == 0) {
LAB_01220896:
        FUN_00d50b20();
      }
      else {
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        if (0 < (int)uVar2) {
          lVar6 = *(int64_t *)(local_40 + 0x10);
          lVar3 = *(int64_t *)(local_40 + 0x10);
          if (uVar9 - 1 < 3) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            do {
              *(float *)(lVar3 + uVar10 * 4) =
                   (float)*(int *)(*(int64_t *)(lVar6 + uVar10 * 8) + 0x10);
              *(float *)(lVar3 + 4 + uVar10 * 4) =
                   (float)*(int *)(*(int64_t *)(lVar6 + 8 + uVar10 * 8) + 0x10);
              *(float *)(lVar3 + 8 + uVar10 * 4) =
                   (float)*(int *)(*(int64_t *)(lVar6 + 0x10 + uVar10 * 8) + 0x10);
              *(float *)(lVar3 + 0xc + uVar10 * 4) =
                   (float)*(int *)(*(int64_t *)(lVar6 + 0x18 + uVar10 * 8) + 0x10);
              uVar10 = uVar10 + 4;
            } while ((uVar2 & 0xfffffffc) != uVar10);
          }
          if ((uint64_t)(uVar2 & 3) != 0) {
            uVar8 = 0;
            do {
              *(float *)(lVar3 + uVar10 * 4 + uVar8 * 4) =
                   (float)*(int *)(*(int64_t *)(lVar6 + uVar10 * 8 + uVar8 * 8) + 0x10);
              uVar8 = uVar8 + 1;
            } while ((uVar2 & 3) != uVar8);
          }
        }
        FUN_015c15b0(g_023b2c88,uVar9);
        FUN_00c8e4f0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00c92170();
        FUN_00c92160();
        FUN_015c15b0(g_0240b524,uVar9);
        if (0 < (int)uVar2) {
          lVar6 = *(int64_t *)(local_40 + 0x10);
          uVar10 = 0;
          do {
            fVar1 = *(float *)(*(int64_t *)(local_40 + 0x10) + uVar10 * 4);
            *(float *)(*(int64_t *)(lVar6 + uVar10 * 8) + 0x14) =
                 (*(float *)(*(int64_t *)(local_40 + 0x10) + uVar10 * 4) - fVar1) * g_02411290 +
                 fVar1;
            uVar4 = FUN_00e7d780();
            lVar6 = *(int64_t *)(local_40 + 0x10);
            *(void*)(*(int64_t *)(lVar6 + uVar10 * 8) + 0x10) = uVar4;
            uVar10 = uVar10 + 1;
          } while (uVar9 != uVar10);
        }
        FUN_00d50b20();
        if (local_40 != 0) {
          FUN_00d50b20();
          goto LAB_01220896;
        }
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      lVar7 = lVar7 + 1;
      lVar5 = *this_ptr;
    } while (lVar7 < *(int *)(lVar5 + 0xc));
  }
  return;
}

