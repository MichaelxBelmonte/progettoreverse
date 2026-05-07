// Function: FUN_015fd450
// Address: 015fd450
// Size: 814 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_015fd450(uint64_t param_1,int64_t *param_2)

{
  int iVar1;
  void*puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar6;
  uint32_t uVar7;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  if ((*arg1 == 0) || (*param_2 == 0)) {
    if (0 < *(int *)(this_ptr + 0x28)) {
      iVar6 = 0;
      do {
        uVar7 = FUN_00d216c0();
        uVar3 = (uint64_t)*(uint *)(this_ptr + 0x30);
        if (0 < (int)*(uint *)(this_ptr + 0x30)) {
          lVar5 = 0;
          do {
            if ((iVar6 < *(int *)(this_ptr + 0x28)) && (lVar5 < (int)uVar3)) {
              if (*(int *)(this_ptr + 0x34) == iVar6) {
                iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x38) + lVar5 * 4);
              }
              else {
                lVar4 = (int64_t)((int)uVar3 * iVar6) * 4 +
                        *(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10);
                *(int64_t *)(this_ptr + 0x38) = lVar4;
                *(int *)(this_ptr + 0x34) = iVar6;
                iVar1 = *(int *)(lVar4 + lVar5 * 4);
              }
              if (((int64_t)iVar1 != -1) &&
                 (*(int64_t *)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10) + (int64_t)iVar1 * 8) !=
                  0)) {
                FUN_00d50b00();
                FUN_00d21140();
                uVar7 = FUN_00d50b20();
              }
            }
            lVar5 = lVar5 + 1;
            uVar3 = (uint64_t)*(int *)(this_ptr + 0x30);
          } while (lVar5 < (int64_t)uVar3);
        }
        FUN_00d242c0(uVar7,0);
        if (0 < *(int *)((int64_t)puVar2 + 0xc)) {
          lVar5 = puVar2[2];
          lVar4 = 0;
          do {
            *(int *)(*(int64_t *)(lVar5 + lVar4 * 8) + 0x18) = (int)lVar4;
            lVar4 = lVar4 + 1;
          } while (lVar4 < *(int *)((int64_t)puVar2 + 0xc));
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(this_ptr + 0x28));
    }
  }
  else if (0 < *(int *)(this_ptr + 0x28)) {
    iVar6 = 0;
    do {
      uVar7 = FUN_00d216c0();
      uVar3 = (uint64_t)*(uint *)(this_ptr + 0x30);
      if (0 < (int)*(uint *)(this_ptr + 0x30)) {
        lVar5 = 0;
        do {
          if ((iVar6 < *(int *)(this_ptr + 0x28)) && (lVar5 < (int)uVar3)) {
            if (*(int *)(this_ptr + 0x34) == iVar6) {
              iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x38) + lVar5 * 4);
            }
            else {
              lVar4 = (int64_t)((int)uVar3 * iVar6) * 4 +
                      *(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10);
              *(int64_t *)(this_ptr + 0x38) = lVar4;
              *(int *)(this_ptr + 0x34) = iVar6;
              iVar1 = *(int *)(lVar4 + lVar5 * 4);
            }
            if (((int64_t)iVar1 != -1) &&
               (lVar4 = *(int64_t *)
                         (*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10) +
                         (int64_t)iVar1 * 8), lVar4 != 0)) {
              FUN_00d50b00();
              *(float *)(lVar4 + 0x1c) =
                   *(float *)(*(int64_t *)(*arg1 + 0x10) +
                             (int64_t)*(int *)(lVar4 + 0x10) * 4) * *(float *)(lVar4 + 0x1c);
              FUN_00d21140();
              uVar7 = FUN_00d50b20();
            }
          }
          lVar5 = lVar5 + 1;
          uVar3 = (uint64_t)*(int *)(this_ptr + 0x30);
        } while (lVar5 < (int64_t)uVar3);
      }
      FUN_00d242c0(uVar7,0);
      if (0 < *(int *)((int64_t)puVar2 + 0xc)) {
        lVar5 = 0;
        do {
          lVar4 = *(int64_t *)(puVar2[2] + lVar5 * 8);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          *(int *)(lVar4 + 0x18) = (int)lVar5;
          *(float *)(lVar4 + 0x1c) =
               *(float *)(*(int64_t *)(*param_2 + 0x10) + (int64_t)*(int *)(lVar4 + 0x10) * 4) *
               *(float *)(lVar4 + 0x1c);
          FUN_00d50b20();
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)((int64_t)puVar2 + 0xc));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(this_ptr + 0x28));
  }
  FUN_00d50b20();
  return;
}

