// Function: FUN_003bb820
// Address: 003bb820
// Size: 863 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void* FUN_003bb820(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar7;
  int64_t local_a0;
  char local_98;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68 [8];
  int64_t *local_60;
  uint64_t local_58;
  uint32_t local_50;
  int64_t in_stack_ffffffffffffffb8;
  char local_40;
  char local_38 [8];
  
  FUN_01bbfb40();
  FUN_002eb090();
  plVar1 = local_70;
  if (local_68[0] == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_40 != '\0') && (in_stack_ffffffffffffffb8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_38[0] = '\0';
  do {
    (**(code **)(*arg1 + 0x370))();
    plVar5 = local_70;
    if (local_70 == arg1) {
      if (((local_38[0] == '\0') && (local_70 != (int64_t *)0x0)) && (local_68[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_003bb8f7;
      }
    }
    else {
      if (local_68[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar4 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar4 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
        arg1 = plVar5;
LAB_003bb8f7:
        local_38[0] = '\x01';
        pcVar4 = local_68;
        plVar5 = arg1;
      }
      *pcVar4 = '\0';
      arg1 = plVar5;
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    // [STATIC_INIT: property registration]
    plVar5 = &g_02802688;
    if (arg1 != (int64_t *)0x0) {
      (**(code **)(*arg1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar5 = (int64_t *)&stack0xffffffffffffffb8;
      if (cVar2 == '\0') {
        plVar5 = &g_02802688;
      }
    }
    if (*plVar5 != 0) {
      if ((local_38[0] == '\0') && (arg1 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_003bba6c;
    }
    if (arg1 == (int64_t *)0x0) {
      arg1 = (int64_t *)0x0;
LAB_003bba6c:
      uVar7 = FUN_00d50b20();
      if ((arg1 != (int64_t *)0x0) && (plVar1 != (int64_t *)0x0)) {
        local_68[0] = '\0';
        local_70 = (int64_t *)0x0;
        local_60 = plVar1;
        local_50 = 0;
        local_58 = 0;
        if (0 < *(int *)((int64_t)plVar1 + 0xc)) {
          lVar6 = 0;
          do {
            local_80 = *(int64_t **)(plVar1[2] + lVar6 * 8);
            local_78 = '\0';
            local_70 = local_80;
            uVar7 = FUN_006500a0(uVar7,&local_80);
            if ((local_98 != '\0') && (local_a0 != 0)) {
              uVar7 = FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              uVar7 = FUN_00d50b20();
            }
            lVar6 = lVar6 + 1;
            local_58 = CONCAT44(local_58._4_4_,(int)lVar6);
          } while ((int)lVar6 < *(int *)((int64_t)plVar1 + 0xc));
        }
        FUN_000be170();
      }
      *this_ptr = plVar1;
      *(void*)(this_ptr + 1) = 1;
      if (arg1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      return this_ptr;
    }
  } while( true );
}

