// Function: FUN_00459a90
// Address: 00459a90
// Size: 636 bytes
// Class: Unknown

void FUN_00459a90(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  char cVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar3;
  int64_t *plVar4;
  uint32_t uVar5;
  int64_t local_a8;
  char local_a0;
  int64_t in_stack_ffffffffffffff68;
  int64_t *plVar6;
  char local_90;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar4 = *(int64_t **)(this_ptr + 0x60);
  if ((plVar4 != (int64_t *)0x0) ||
     (plVar4 = *(int64_t **)(this_ptr + 0x30), plVar4 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01f27fe0();
  uVar5 = FUN_00324f60();
  local_40 = local_60;
  local_38 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_38 = '\x01';
  FUN_000c4290(uVar5,&local_40);
  if ((local_90 == '\0') && (in_stack_ffffffffffffff68 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (in_stack_ffffffffffffff68 != 0) {
    if (0 < *(int *)(in_stack_ffffffffffffff68 + 0xc)) {
      lVar3 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(in_stack_ffffffffffffff68 + 0x10) + lVar3 * 8);
        plVar6 = plVar1;
        cVar2 = FUN_00518a70();
        if ((cVar2 != '\0') && (cVar2 = (**(code **)(*plVar1 + 0x390))(), cVar2 != '\0')) {
          if (plVar1 == plVar4) {
            local_50 = *arg1;
            uVar5 = g_02390124;
          }
          else {
            local_50 = 0;
            uVar5 = 0;
          }
          local_48 = '\0';
          local_68 = '\0';
          local_70 = 0;
          FUN_0051d3f0(uVar5,&local_70,param_3,param_4,plVar6);
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 == plVar4) {
            if (local_50 != 0 && local_48 != '\0') {
              FUN_00d50b20();
            }
          }
          else if (local_50 != 0 && local_48 != '\0') {
            FUN_00d50b20();
          }
        }
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < *(int *)(in_stack_ffffffffffffff68 + 0xc));
    }
    FUN_0015ee90();
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

