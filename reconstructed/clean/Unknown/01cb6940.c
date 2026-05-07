// Function: FUN_01cb6940
// Address: 01cb6940
// Size: 770 bytes
// Class: Unknown

void* FUN_01cb6940(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  void*puVar7;
  void*this_ptr;
  int64_t lVar8;
  int64_t lVar9;
  int64_t local_98;
  char local_90;
  int64_t local_78;
  char local_70;
  int64_t *local_40;
  char local_38;
  
  plVar4 = local_40;
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*g_02572370)();
  FUN_01cb6e70();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (local_40 == (int64_t *)0x0) {
    *this_ptr = puVar7;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    if (0 < *(int *)((int64_t)local_40 + 0xc)) {
      lVar9 = 0;
      do {
        plVar5 = local_40;
        plVar1 = *(int64_t **)(plVar4[2] + lVar9 * 8);
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        cVar6 = (**(code **)(*plVar1 + 0x3a0))();
        if (cVar6 != '\0') {
          (**(code **)(*plVar1 + 1000))();
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
              goto LAB_01cb6a48;
            }
          }
          else if (local_40 != (int64_t *)0x0) {
LAB_01cb6a48:
            if (0 < *(int *)((int64_t)local_40 + 0xc)) {
              lVar8 = 0;
              do {
                plVar2 = *(int64_t **)(plVar5[2] + lVar8 * 8);
                if (plVar2 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                cVar6 = (**(code **)(*plVar2 + 0x3a0))();
                if (cVar6 != '\0') {
                  (**(code **)(*plVar2 + 0x368))();
                  plVar3 = g_027ede18;
                  if (local_40 == (int64_t *)0x0) {
                    cVar6 = '\0';
                  }
                  else {
                    if (g_027ede18 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    (**(code **)(*plVar2 + 0x368))();
                    FUN_00d8ed10();
                    if (local_70 == '\0') {
                      if (local_78 != 0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_70 = '\0';
                    }
                    cVar6 = (**(code **)(*plVar3 + 0x50))();
                    if (local_78 != 0) {
                      FUN_00d50b20();
                    }
                    if ((local_70 != '\0') && (local_78 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_90 != '\0') && (local_98 != 0)) {
                      FUN_00d50b20();
                    }
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (cVar6 != '\0') {
                    local_38 = '\0';
                    FUN_00d21140();
                    local_40 = plVar2;
                  }
                }
                FUN_00d50b20();
                lVar8 = lVar8 + 1;
              } while (lVar8 < *(int *)((int64_t)plVar5 + 0xc));
            }
            FUN_00d50b20();
          }
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)((int64_t)plVar4 + 0xc));
    }
    *this_ptr = puVar7;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  return this_ptr;
}

