// Function: FUN_0120a2e0
// Address: 0120a2e0
// Size: 627 bytes
// Class: Unknown

void FUN_0120a2e0(float param_1)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  void*puVar4;
  uint64_t uVar5;
  int64_t *this_ptr;
  bool bVar6;
  int64_t lVar7;
  uint32_t uVar8;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  uVar8 = (*g_02572370)();
  local_40 = *this_ptr;
  FUN_00d214d0(uVar8,*(void*)((int64_t)puVar4 + 0xc));
  FUN_00d216c0();
  if (0 < *(int *)((int64_t)puVar4 + 0xc)) {
    lVar7 = 0;
    do {
      lVar2 = *(int64_t *)(puVar4[2] + lVar7 * 8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_015f8890();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      uVar1 = *(uint *)(local_40 + 0xc);
      if ((int)uVar1 < 3) {
LAB_0120a46d:
        FUN_00d21140();
        local_40 = lVar2;
      }
      else {
        uVar5 = 2;
        bVar6 = false;
        do {
          lVar3 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + uVar5 * 8);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          if ((*(int64_t *)(lVar3 + 0x88) != 0 && g_0239424c < *(float *)(lVar3 + 0x50)) ||
             (param_1 < *(float *)(lVar3 + 0x50))) {
            bVar6 = true;
            FUN_015fa960(1,2);
          }
          FUN_00d50b20();
          uVar5 = uVar5 + 1;
        } while (uVar1 != uVar5);
        if (!bVar6) goto LAB_0120a46d;
        lVar3 = *this_ptr;
        uVar8 = FUN_015fab90();
        if (local_58 == '\0') {
          if (local_60 != 0) {
            uVar8 = FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_40 = local_60;
        FUN_00d214d0(uVar8,*(void*)(lVar3 + 0xc));
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((int64_t)puVar4 + 0xc));
  }
  FUN_00d50b20();
  return;
}

