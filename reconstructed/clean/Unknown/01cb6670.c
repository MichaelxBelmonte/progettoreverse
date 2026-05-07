// Function: FUN_01cb6670
// Address: 01cb6670
// Size: 604 bytes
// Class: Unknown

void* FUN_01cb6670(void)

{
  uint uVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  uint64_t uVar5;
  char *pcVar6;
  void*this_ptr;
  int64_t lVar7;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  int64_t *local_58;
  char local_50 [8];
  int64_t local_48;
  int local_40;
  uint64_t local_3c;
  
  if ((g_028b72d0 == 0) && (FUN_01cb4c70(), g_028b72d0 == 0)) {
LAB_01cb6864:
    FUN_00d23340();
    pcVar6 = &local_70;
    if (local_50[0] != '\0') {
      pcVar6 = local_50;
    }
    local_70 = local_50[0];
    *pcVar6 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    if ((local_70 == '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    *this_ptr = local_58;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    lVar2 = g_028b72d0;
    local_50[0] = '\0';
    local_58 = (int64_t *)0x0;
    local_48 = g_028b72d0;
    local_3c = 0;
    lVar7 = 0;
    do {
      local_40 = (int)lVar7;
      if (*(int *)(lVar2 + 0xc) <= local_40) {
        FUN_01cc6060();
        if (g_028b72d0 != 0) {
          local_50[0] = '\0';
          local_58 = (int64_t *)0x0;
          local_48 = g_028b72d0;
          local_3c = 0;
          uVar1 = *(uint *)(g_028b72d0 + 0xc);
          if ((int)uVar1 < 1) {
            uVar5 = 0;
          }
          else {
            uVar4 = uVar1 & 7;
            if (uVar1 - 1 < 7) {
              uVar5 = 0;
            }
            else {
              uVar5 = 0;
              do {
                local_58 = *(int64_t **)(*(int64_t *)(g_028b72d0 + 0x10) + 0x38 + uVar5 * 8);
                uVar5 = uVar5 + 8;
              } while ((uVar1 & 0xfffffff8) != (uint)uVar5);
            }
            if (uVar4 != 0) {
              uVar5 = uVar5 & 0xffffffff;
              do {
                local_58 = *(int64_t **)(*(int64_t *)(g_028b72d0 + 0x10) + uVar5 * 8);
                uVar5 = uVar5 + 1;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
          }
          local_40 = (int)uVar5;
          FUN_01cc6060();
        }
        goto LAB_01cb6864;
      }
      local_58 = *(int64_t **)(*(int64_t *)(lVar2 + 0x10) + lVar7 * 8);
      (**(code **)(*local_58 + 0x450))();
      cVar3 = (**(code **)(*(int64_t *)CONCAT71(uStack_6f,local_70) + 0x50))();
      if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
        FUN_00d50b20();
      }
      lVar7 = lVar7 + 1;
    } while (cVar3 == '\0');
    *(void*)(this_ptr + 1) = 0;
    FUN_00d50b00();
    *this_ptr = local_58;
    *(void*)(this_ptr + 1) = 1;
    FUN_01cc6060();
  }
  return this_ptr;
}

