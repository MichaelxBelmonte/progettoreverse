// Function: FUN_01ecbb20
// Address: 01ecbb20
// Size: 1218 bytes
// Class: GNTextAutoCompleterItem

int64_t * FUN_01ecbb20(uint64_t param_1,uint64_t param_2,int param_3)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  char *pcVar4;
  int64_t lVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  iVar2 = FUN_00d8c7a0();
  if ((iVar2 == 0) && (0 < param_3)) {
    FUN_00d23310();
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    iVar2 = FUN_00d8c7a0();
    if ((iVar2 != 0) || (-1 < param_3)) {
      lVar3 = *(int64_t *)(arg1 + 0x18);
      if (0 < *(int *)(lVar3 + 0xc)) {
        lVar5 = 0;
        do {
          plVar1 = *(int64_t **)(*(int64_t *)(lVar3 + 0x10) + lVar5 * 8);
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar1 + 0x3a0))();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 == 0) && ((**(code **)(*plVar1 + 0x88))(), local_40[0] != '\0')) {
            local_40[0] = '\0';
          }
          FUN_00d50b20();
          lVar5 = lVar5 + 1;
          lVar3 = *(int64_t *)(arg1 + 0x18);
        } while (lVar5 < *(int *)(lVar3 + 0xc));
      }
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return this_ptr;
    }
    FUN_00d23340();
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if ((local_38[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

