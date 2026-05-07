// Function: FUN_01edb450
// Address: 01edb450
// Size: 1074 bytes
// Class: GNTextAutoCompleterItem

uint64_t FUN_01edb450(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  bool bVar2;
  uint3 uVar3;
  uint32_t uVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t *this_ptr;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar6 = g_027fe7c0;
  if (g_027fe7c0 != 0) {
    FUN_00d50b00();
  }
  uVar4 = (**(code **)(*local_40 + 0x50))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar4 == '\0') {
    FUN_01cae990();
    lVar6 = g_027fe7c8;
    if (g_027fe7c8 != 0) {
      FUN_00d50b00();
    }
    uVar4 = (**(code **)(*local_40 + 0x50))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar4 == '\0') {
      FUN_01cae990();
      lVar6 = g_027fe7d0;
      if (g_027fe7d0 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*local_40 + 0x50))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar4 == '\0') {
        FUN_01cae990();
        lVar6 = g_027fe7d8;
        if (g_027fe7d8 != 0) {
          FUN_00d50b00();
        }
        uVar4 = (**(code **)(*local_40 + 0x50))();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)uVar4 == '\0') {
          FUN_01cae990();
          lVar6 = g_027fe7b8;
          if (g_027fe7b8 != 0) {
            FUN_00d50b00();
          }
          uVar4 = (**(code **)(*local_40 + 0x50))();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar4 != '\0') {
            if (param_2 == '\0') {
              return CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
            }
            uVar5 = *(uint *)((int64_t)this_ptr + 0x2cc);
            lVar6 = (int64_t)(int)uVar5;
            if ((lVar6 != -1) &&
               (*(char *)(*(int64_t *)(this_ptr[0x58] + 0x10) + 4 + lVar6 * 8) != '\0')) {
              lVar1 = this_ptr[0x57];
              bVar2 = (int)uVar5 < *(int *)(lVar1 + 0xc);
              if (*(char *)(*(int64_t *)(this_ptr[0x58] + 0x10) + 5 + lVar6 * 8) == '\0') {
                if (-1 < (int)uVar5 && bVar2) {
                  lVar6 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar5 * 8);
                  if (lVar6 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  lVar6 = 0;
                }
                FUN_01ed2f70();
                if (lVar6 != 0) {
                  FUN_00d50b20();
                }
              }
              else {
                if (-1 < (int)uVar5 && bVar2) {
                  lVar6 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar5 * 8);
                  if (lVar6 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  lVar6 = 0;
                }
                FUN_01ed3c60();
                if (lVar6 != 0) {
                  FUN_00d50b20();
                }
              }
            }
            *(void*)((int64_t)this_ptr + 0x2cc) = 0xffffffff;
            FUN_01e1e360();
            if (this_ptr[0x5b] != 0) {
              this_ptr[0x5b] = 0;
              FUN_00d50b20();
            }
          }
          uVar5 = FUN_01dde120();
          return (uint64_t)uVar5;
        }
        uVar3 = (uint3)((uint)uVar4 >> 8);
        lVar6 = 0x14c;
      }
      else {
        uVar3 = (uint3)((uint)uVar4 >> 8);
        lVar6 = 0x14b;
      }
    }
    else {
      uVar3 = (uint3)((uint)uVar4 >> 8);
      lVar6 = 0x14a;
    }
  }
  else {
    uVar3 = (uint3)((uint)uVar4 >> 8);
    lVar6 = 0x149;
  }
  if (param_2 != '\0') {
    (**(code **)(*this_ptr + lVar6 * 8))();
  }
  return CONCAT71((uint7)uVar3,1);
}

