// Function: FUN_01edad20
// Address: 01edad20
// Size: 798 bytes
// Class: GNTextAutoCompleterItem

void* FUN_01edad20(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void*puVar7;
  void*puVar8;
  int64_t arg1;
  void*this_ptr;
  uint64_t uVar9;
  int64_t lVar10;
  
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  (*pcVar3)();
  if (*param_2 != 0) {
    FUN_00d21140();
    iVar4 = FUN_01ed4e60();
    if (iVar4 != -1) {
      uVar5 = FUN_00d23d20();
      uVar9 = (uint64_t)uVar5;
      if (0 < (int)uVar5) {
        do {
          uVar5 = uVar5 - 1;
          if ((int64_t)*(int *)(*(int64_t *)(arg1 + 0x2b8) + 0xc) < (int64_t)uVar9) {
            if (*param_2 != 0) {
              *param_2 = 0;
              if ((char)param_2[1] != '\0') {
                FUN_00d50b20();
              }
              goto LAB_01edaef0;
            }
          }
          else {
            lVar10 = *(int64_t *)
                      (*(int64_t *)(*(int64_t *)(arg1 + 0x2b8) + 0x10) + (uint64_t)uVar5 * 8
                      );
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            lVar1 = *param_2;
            if (lVar1 == lVar10) {
              if (((char)param_2[1] != '\0') || (lVar10 == 0)) {
                if (lVar10 != 0) {
                  FUN_00d50b20();
                }
                goto LAB_01edaef4;
              }
            }
            else {
              *param_2 = lVar10;
              if (((char)param_2[1] != '\0') && (lVar1 != 0)) {
                FUN_00d50b20();
              }
            }
LAB_01edaef0:
            *(void*)(param_2 + 1) = 1;
          }
LAB_01edaef4:
          iVar6 = FUN_01ed4e60();
          if (iVar6 < iVar4) {
            FUN_00d21140();
            iVar4 = FUN_01ed4e60();
            if (iVar4 == 0) break;
          }
          bVar2 = 1 < (int64_t)uVar9;
          uVar9 = uVar9 - 1;
        } while (bVar2);
      }
      uVar5 = *(uint *)((int64_t)puVar7 + 0xc);
      if (0 < (int)uVar5) {
        lVar10 = (uint64_t)uVar5 + 1;
        do {
          uVar5 = uVar5 - 1;
          lVar1 = *(int64_t *)(puVar7[2] + (uint64_t)uVar5 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + -1;
        } while (1 < lVar10);
      }
      if (*(int *)((int64_t)puVar8 + 0xc) != 0) {
        *this_ptr = puVar8;
        *(void*)(this_ptr + 1) = 1;
        goto LAB_01edb03f;
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  FUN_00d50b20();
LAB_01edb03f:
  FUN_00d50b20();
  return this_ptr;
}

