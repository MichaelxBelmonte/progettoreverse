// Function: FUN_015fd9b0
// Address: 015fd9b0
// Size: 507 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


uint32_t FUN_015fd9b0(void)

{
  int iVar1;
  uint32_t uVar2;
  bool bVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t lVar6;
  uint64_t uVar7;
  int iVar8;
  uint32_t local_4c;
  int64_t local_48;
  
  if (*(int *)(this_ptr + 0x28) < 1) {
    local_4c = 0;
  }
  else {
    uVar7 = 0;
    local_4c = 0;
    local_48 = 0;
    bVar3 = false;
    do {
      *(void*)(*(int64_t *)(*(int64_t *)(this_ptr + 0x20) + 0x10) + uVar7 * 4) =
           0xffffffff;
      if (local_48 != 0) {
        if (bVar3) {
          FUN_00d50b20();
        }
        bVar3 = false;
      }
      uVar4 = (uint64_t)*(uint *)(this_ptr + 0x30);
      if ((int)*(uint *)(this_ptr + 0x30) < 1) {
        local_48 = 0;
      }
      else {
        lVar6 = 0;
        local_48 = 0;
        iVar8 = unaff_ESI + 1;
        do {
          if (((int64_t)uVar7 < (int64_t)*(int *)(this_ptr + 0x28)) && (lVar6 < (int)uVar4)) {
            if (uVar7 == *(uint *)(this_ptr + 0x34)) {
              iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x38) + lVar6 * 4);
            }
            else {
              lVar5 = (int64_t)((int)uVar4 * (int)uVar7) * 4 +
                      *(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10);
              *(int64_t *)(this_ptr + 0x38) = lVar5;
              *(int *)(this_ptr + 0x34) = (int)uVar7;
              iVar1 = *(int *)(lVar5 + lVar6 * 4);
            }
            if (((int64_t)iVar1 != -1) &&
               (lVar5 = *(int64_t *)
                         (*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10) +
                         (int64_t)iVar1 * 8), lVar5 != 0)) {
              FUN_00d50b00();
              if ((*(int64_t *)(lVar5 + 0x80) == 0) &&
                 (iVar1 = *(int *)(lVar5 + 0x18), iVar1 < iVar8)) {
                iVar8 = iVar1;
                if (local_48 == lVar5) {
                  if (!bVar3) {
                    FUN_00d50b00();
                    lVar5 = local_48;
                    goto LAB_015fdb50;
                  }
                }
                else {
                  FUN_00d50b00();
                  if ((bVar3) && (local_48 != 0)) {
                    FUN_00d50b20();
                    bVar3 = true;
                    local_48 = lVar5;
                  }
                  else {
LAB_015fdb50:
                    local_48 = lVar5;
                    bVar3 = true;
                  }
                }
              }
              FUN_00d50b20();
            }
          }
          lVar6 = lVar6 + 1;
          uVar4 = (uint64_t)*(int *)(this_ptr + 0x30);
        } while (lVar6 < (int64_t)uVar4);
        if (local_48 == 0) {
          local_48 = 0;
        }
        else {
          uVar2 = *(void*)(local_48 + 0x10);
          *(void*)(*(int64_t *)(*(int64_t *)(this_ptr + 0x20) + 0x10) + uVar7 * 4) = uVar2
          ;
          local_4c = (uint32_t)CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int64_t)uVar7 < (int64_t)*(int *)(this_ptr + 0x28));
    if ((bVar3) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return local_4c;
}

