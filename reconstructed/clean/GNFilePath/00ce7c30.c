// Function: FUN_00ce7c30
// Address: 00ce7c30
// Size: 727 bytes
// Class: GNFilePath

void* FUN_00ce7c30(uint64_t param_1,void*param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  void*puVar4;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar5;
  int64_t local_a0;
  char local_98;
  int64_t *local_68;
  char local_60;
  int64_t *local_40;
  char local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  cVar3 = (**(code **)(*arg1 + 0x3a0))();
  if (cVar3 != '\0') {
    (**(code **)(*arg1 + 1000))();
    if (local_98 == '\0') {
      if (local_a0 == 0) goto LAB_00ce7f00;
      FUN_00d50b00();
    }
    else if (local_a0 == 0) goto LAB_00ce7f00;
    if (0 < *(int *)(local_a0 + 0xc)) {
      lVar5 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(local_a0 + 0x10) + lVar5 * 8);
        plVar2 = (int64_t *)*param_2;
        (**(code **)(*plVar1 + 0x370))();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        cVar3 = (**(code **)(*plVar2 + 0x50))();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(*plVar1 + 0x3a0))();
          if (cVar3 != '\0') {
            (**(code **)(*plVar1 + 0x458))();
            if (local_60 == '\0') {
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            local_40 = local_68;
            local_38 = '\0';
            FUN_00d214d0();
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_38 = '\0';
          FUN_00d21140();
          local_40 = plVar1;
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(local_a0 + 0xc));
    }
    FUN_00115910();
    FUN_00d50b20();
  }
LAB_00ce7f00:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

