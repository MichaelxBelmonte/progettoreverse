// Function: FUN_00235240
// Address: 00235240
// Size: 1113 bytes
// Class: MUTool

void FUN_00235240(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  uint64_t local_70;
  int64_t local_68;
  char local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
LAB_002353ce:
    if (*(int64_t **)(this_ptr + 0xc0) == (int64_t *)0x0) {
      return;
    }
    cVar3 = (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x398))();
    local_70 = param_1;
    if (g_02805cda != cVar3) {
LAB_002353f7:
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_48 + 0x450))();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        plVar1 = *(int64_t **)(this_ptr + 0x90);
        (**(code **)(&UNK_00001550 + *plVar1))();
        plVar6 = local_48;
        local_38[0] = local_40[0];
        pcVar5 = local_40;
        if (local_40[0] == '\0') {
          pcVar5 = local_38;
        }
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar6 == (int64_t *)0x0) {
          plVar6 = *(int64_t **)(this_ptr + 0x90);
LAB_00235487:
          FUN_00d50b00();
        }
        else if (local_38[0] == '\0') goto LAB_00235487;
        (**(code **)(*plVar6 + 0x970))();
        FUN_01d982e0();
        lVar2 = CONCAT71(uStack_57,local_58);
        if ((local_50 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          plVar1 = *(int64_t **)(this_ptr + 0x90);
          (**(code **)(&UNK_00001550 + *plVar1))();
          plVar6 = local_48;
          pcVar5 = local_40;
          if (local_40[0] == '\0') {
            pcVar5 = local_38;
          }
          local_38[0] = local_40[0];
          *pcVar5 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar6 == (int64_t *)0x0) {
            plVar6 = *(int64_t **)(this_ptr + 0x90);
LAB_0023554b:
            FUN_00d50b00();
          }
          else if (local_38[0] == '\0') goto LAB_0023554b;
          (**(code **)(*plVar6 + 0x970))();
          FUN_01d982e0();
          (**(code **)(*(int64_t *)CONCAT71(uStack_57,local_58) + 0x620))();
          if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  else {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar1 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (int64_t *)0x0) goto LAB_002353ce;
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *(int64_t *)CONCAT71(uStack_57,local_58) + 0x20))();
    plVar1 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (int64_t *)0x0) {
      return;
    }
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *(int64_t *)CONCAT71(uStack_57,local_58) + 0x20))();
    cVar3 = (**(code **)(*local_48 + 0x50))();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *(int64_t *)CONCAT71(uStack_57,local_58) + 0x20))();
    local_70 = (**(code **)(*local_48 + 0x68))();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (g_02805cda != cVar3) goto LAB_002353f7;
  }
  if (((cVar3 != '\0') && (g_02805cda != cVar3)) && (*(char *)(this_ptr + 0x150) != '\0')) {
    *(void*)(this_ptr + 0x150) = 0;
    FUN_0021e5f0();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  pcVar5 = &local_58;
  if (local_40[0] != '\0') {
    pcVar5 = local_40;
  }
  local_58 = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (int64_t *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x90);
  }
  else {
    plVar6 = local_48;
    if (local_58 != '\0') goto LAB_0023563b;
  }
  FUN_00d50b00();
LAB_0023563b:
  (**(code **)(*plVar6 + 0xf00))(local_70);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (*(int64_t **)(this_ptr + 0x98) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x928))(local_70);
  }
  if (cVar3 != '\0') {
    FUN_0021eea0(0);
  }
  g_02805cda = cVar3;
  return;
}

