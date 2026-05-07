// Function: FUN_015fe420
// Address: 015fe420
// Size: 728 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void* FUN_015fe420(uint64_t param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  void*puVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  bool bVar10;
  
  if ((param_2 < 0) || (*(int *)(arg1 + 0x28) <= param_2)) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    (*g_02572370)();
    *this_ptr = puVar4;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    (*g_02572370)();
    uVar5 = (uint64_t)*(uint *)(arg1 + 0x30);
    if ((int)*(uint *)(arg1 + 0x30) < 1) {
      bVar3 = false;
      lVar7 = 0;
    }
    else {
      lVar9 = 0;
      lVar7 = 0;
      bVar3 = false;
      do {
        bVar10 = true;
        if ((param_2 < *(int *)(arg1 + 0x28)) && (lVar9 < (int)uVar5)) {
          if (*(int *)(arg1 + 0x34) == param_2) {
            iVar1 = *(int *)(*(int64_t *)(arg1 + 0x38) + lVar9 * 4);
          }
          else {
            lVar6 = (int64_t)((int)uVar5 * param_2) * 4 +
                    *(int64_t *)(*(int64_t *)(arg1 + 0x18) + 0x10);
            *(int64_t *)(arg1 + 0x38) = lVar6;
            *(int *)(arg1 + 0x34) = param_2;
            iVar1 = *(int *)(lVar6 + lVar9 * 4);
          }
          if ((int64_t)iVar1 == -1) goto LAB_015fe550;
          lVar6 = *(int64_t *)
                   (*(int64_t *)(*(int64_t *)(arg1 + 0x10) + 0x10) + (int64_t)iVar1 * 8);
          bVar2 = true;
          if (lVar6 == 0) {
            bVar10 = false;
            goto joined_r0x015fe553;
          }
          FUN_00d50b00();
          bVar10 = false;
          lVar8 = lVar6;
          if (lVar7 != lVar6) goto LAB_015fe559;
LAB_015fe5e0:
          lVar6 = lVar7;
          if (lVar7 == 0 || bVar3) goto LAB_015fe5b0;
          bVar2 = false;
          bVar3 = true;
          if (!bVar10) goto LAB_015fe5b0;
          bVar3 = true;
          FUN_00d50b00();
          bVar2 = false;
LAB_015fe626:
          if (*(int64_t *)(lVar7 + 0x80) == 0) {
            bVar10 = false;
          }
          else {
            bVar10 = *(char *)(*(int64_t *)(lVar7 + 0x80) + 0x50) != '\0';
          }
          if (bVar2) {
LAB_015fe64e:
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else {
LAB_015fe550:
          bVar2 = false;
joined_r0x015fe553:
          lVar6 = 0;
          lVar8 = lVar6;
          if (lVar7 == 0) goto LAB_015fe5e0;
LAB_015fe559:
          if (bVar10) {
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            if ((bVar3) && (lVar7 != 0)) {
              FUN_00d50b20();
            }
          }
          else if ((bVar3) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
          bVar2 = false;
          bVar3 = true;
          lVar8 = lVar6;
LAB_015fe5b0:
          lVar7 = lVar6;
          if (lVar6 != 0) goto LAB_015fe626;
          lVar7 = 0;
          bVar10 = false;
          if (bVar2) goto LAB_015fe64e;
        }
        if (bVar10) {
          FUN_00d21140();
        }
        lVar9 = lVar9 + 1;
        uVar5 = (uint64_t)*(int *)(arg1 + 0x30);
      } while (lVar9 < (int64_t)uVar5);
    }
    *this_ptr = puVar4;
    *(void*)(this_ptr + 1) = 1;
    if ((bVar3) && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

