// Function: FUN_015fdc20
// Address: 015fdc20
// Size: 791 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


int64_t * FUN_015fdc20(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar11;
  float local_4c;
  float local_48;
  int64_t local_40;
  int64_t local_38;
  
  uVar7 = (uint64_t)*(uint *)(arg1 + 0x28);
  if ((int)*(uint *)(arg1 + 0x28) < 1) {
    *(void*)(this_ptr + 1) = 0;
    local_40 = 0;
    lVar10 = 0;
    bVar3 = false;
  }
  else {
    local_48 = 0.0;
    uVar11 = 0;
    lVar10 = 0;
    bVar3 = false;
    bVar4 = false;
    local_40 = 0;
    do {
      iVar1 = *(int *)(*(int64_t *)(*(int64_t *)(arg1 + 0x20) + 0x10) + uVar11 * 4);
      lVar9 = (int64_t)iVar1;
      if (lVar9 != -1) {
        bVar2 = true;
        if (((int64_t)uVar11 < (int64_t)(int)uVar7) && (iVar1 < *(int *)(arg1 + 0x30))) {
          if (uVar11 == *(uint *)(arg1 + 0x34)) {
            iVar1 = *(int *)(*(int64_t *)(arg1 + 0x38) + lVar9 * 4);
          }
          else {
            lVar8 = (int64_t)(*(int *)(arg1 + 0x30) * (int)uVar11) * 4 +
                    *(int64_t *)(*(int64_t *)(arg1 + 0x18) + 0x10);
            *(int64_t *)(arg1 + 0x38) = lVar8;
            *(int *)(arg1 + 0x34) = (int)uVar11;
            iVar1 = *(int *)(lVar8 + lVar9 * 4);
          }
          if ((int64_t)iVar1 == -1) goto LAB_015fdd90;
          local_38 = *(int64_t *)
                      (*(int64_t *)(*(int64_t *)(arg1 + 0x10) + 0x10) + (int64_t)iVar1 * 8);
          bVar5 = true;
          if (local_38 == 0) {
            bVar2 = false;
            goto joined_r0x015fdd9d;
          }
          FUN_00d50b00();
          bVar2 = false;
          if (lVar10 != local_38) goto LAB_015fdda3;
LAB_015fdd10:
          if (lVar10 == 0 || bVar3) goto LAB_015fddf2;
          bVar3 = true;
          bVar5 = false;
          if (!bVar2) goto LAB_015fddf2;
          bVar3 = true;
          FUN_00d50b00();
          bVar5 = false;
LAB_015fddf7:
          local_4c = *(float *)(lVar10 + 0x1c);
          bVar2 = local_48 < local_4c;
          bVar6 = bVar2;
          if (bVar5) {
LAB_015fde2a:
            bVar2 = bVar6;
            if (local_38 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else {
LAB_015fdd90:
          bVar5 = false;
joined_r0x015fdd9d:
          local_38 = 0;
          if (lVar10 == 0) goto LAB_015fdd10;
LAB_015fdda3:
          if (bVar2) {
            if (local_38 != 0) {
              FUN_00d50b00();
            }
            if ((bVar3) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
          }
          else if ((bVar3) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
          bVar5 = false;
          bVar3 = true;
          lVar10 = local_38;
LAB_015fddf2:
          if (lVar10 != 0) goto LAB_015fddf7;
          lVar10 = 0;
          bVar2 = false;
          bVar6 = false;
          if (bVar5) goto LAB_015fde2a;
        }
        if (bVar2) {
          if (local_40 == lVar10) {
            lVar9 = local_40;
            bVar2 = bVar4;
            if (bVar3) {
              if ((!bVar4) && (lVar10 != 0)) {
                FUN_00d50b00();
                bVar2 = true;
              }
            }
            else {
              bVar3 = false;
            }
          }
          else {
            if ((bVar3) && (lVar10 != 0)) {
              FUN_00d50b00();
            }
            lVar9 = lVar10;
            bVar2 = bVar3;
            if ((bVar4) && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          local_40 = lVar9;
          local_48 = local_4c;
          bVar4 = bVar2;
        }
      }
      uVar11 = uVar11 + 1;
      uVar7 = (uint64_t)*(int *)(arg1 + 0x28);
    } while ((int64_t)uVar11 < (int64_t)uVar7);
    *(void*)(this_ptr + 1) = 0;
    if (!bVar4) {
      if (local_40 == 0) {
        local_40 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
  }
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar3) && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

