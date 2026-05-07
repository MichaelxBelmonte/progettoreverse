// Function: FUN_01ecc740
// Address: 01ecc740
// Size: 790 bytes
// Class: GNTextAutoCompleterItem

void* FUN_01ecc740(uint64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  void*puVar4;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar5;
  int64_t local_70;
  char local_68;
  int64_t *local_40;
  char local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar1 = *(int64_t *)(arg1 + 0x18);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
        (**(code **)(*plVar2 + 0x88))();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if (local_40 != (int64_t *)0x0) {
          if (param_3 == '\0') {
            cVar3 = FUN_00d90870();
            if (cVar3 != '\0') {
              local_38 = '\0';
              FUN_00d21140();
              local_40 = plVar2;
            }
          }
          else {
            FUN_00d99300();
            FUN_00d99300();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            cVar3 = FUN_00d90870();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar3 != '\0') {
              local_38 = '\0';
              FUN_00d21140();
              local_40 = plVar2;
            }
          }
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_01ed1330();
  }
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

