// Function: FUN_015fe7b0
// Address: 015fe7b0
// Size: 729 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void* FUN_015fe7b0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  void*puVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar8;
  int64_t lVar9;
  
  if ((param_2 < 0) || (*(int *)(arg1 + 0x28) <= param_2)) {
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_02572358;
    (*g_02572370)();
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_02572358;
    (*g_02572370)();
    uVar6 = (uint64_t)*(uint *)(arg1 + 0x30);
    if ((int)*(uint *)(arg1 + 0x30) < 1) {
      bVar3 = false;
      lVar9 = 0;
    }
    else {
      lVar8 = 0;
      lVar9 = 0;
      bVar3 = false;
      do {
        bVar4 = true;
        if ((param_2 < *(int *)(arg1 + 0x28)) && (lVar8 < (int)uVar6)) {
          if (*(int *)(arg1 + 0x34) == param_2) {
            iVar1 = *(int *)(*(int64_t *)(arg1 + 0x38) + lVar8 * 4);
          }
          else {
            lVar7 = (int64_t)((int)uVar6 * param_2) * 4 +
                    *(int64_t *)(*(int64_t *)(arg1 + 0x18) + 0x10);
            *(int64_t *)(arg1 + 0x38) = lVar7;
            *(int *)(arg1 + 0x34) = param_2;
            iVar1 = *(int *)(lVar7 + lVar8 * 4);
          }
          if ((int64_t)iVar1 == -1) goto LAB_015fe8e0;
          lVar7 = *(int64_t *)
                   (*(int64_t *)(*(int64_t *)(arg1 + 0x10) + 0x10) + (int64_t)iVar1 * 8);
          bVar2 = true;
          if (lVar7 == 0) {
            lVar7 = 0;
          }
          else {
            FUN_00d50b00();
          }
          bVar4 = false;
          if (lVar9 == lVar7) goto LAB_015fe99c;
LAB_015fe8e9:
          if (bVar4) {
            if (lVar7 != 0) {
              FUN_00d50b00();
            }
            if ((bVar3) && (lVar9 != 0)) {
              FUN_00d50b20();
            }
          }
          else if ((bVar3) && (lVar9 != 0)) {
            FUN_00d50b20();
          }
          bVar3 = true;
          bVar2 = false;
          lVar9 = lVar7;
LAB_015fe942:
          if (lVar9 != 0) {
            iVar1 = *(int *)(lVar9 + 0x18);
            if ((bVar2) && (lVar7 != 0)) {
              FUN_00d50b20();
            }
            goto joined_r0x015fe9e9;
          }
          if ((bVar2) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
          lVar9 = 0;
        }
        else {
LAB_015fe8e0:
          lVar7 = 0;
          bVar2 = false;
          if (lVar9 != 0) goto LAB_015fe8e9;
LAB_015fe99c:
          if (lVar9 == 0 || bVar3) goto LAB_015fe942;
          bVar3 = true;
          bVar2 = false;
          if (!bVar4) goto LAB_015fe942;
          FUN_00d50b00();
          bVar3 = true;
          iVar1 = *(int *)(lVar9 + 0x18);
joined_r0x015fe9e9:
          if (iVar1 <= param_1) {
            FUN_00d21140();
          }
        }
        lVar8 = lVar8 + 1;
        uVar6 = (uint64_t)*(int *)(arg1 + 0x30);
      } while (lVar8 < (int64_t)uVar6);
    }
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
    if ((bVar3) && (lVar9 != 0)) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

