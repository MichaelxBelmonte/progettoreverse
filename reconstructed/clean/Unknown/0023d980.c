// Function: FUN_0023d980
// Address: 0023d980
// Size: 831 bytes
// Class: Unknown

uint64_t FUN_0023d980(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  char *pcVar4;
  int64_t this_ptr;
  int64_t *plVar5;
  uint64_t uVar6;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
LAB_0023da04:
    plVar5 = (int64_t *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar5 = local_40;
    pcVar4 = &local_50;
    if (local_38[0] != '\0') {
      pcVar4 = local_38;
    }
    local_50 = local_38[0];
    *pcVar4 = '\0';
    if ((local_38[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = *(int64_t **)(this_ptr + 0x90);
      if (plVar5 == (int64_t *)0x0) goto LAB_0023da04;
    }
    else if (local_50 != '\0') goto LAB_0023da07;
    FUN_00d50b00();
  }
LAB_0023da07:
  (**(code **)(*plVar5 + 0xed0))();
  if (local_40 == (int64_t *)0x0) {
    cVar3 = '\0';
  }
  else {
    (**(code **)(*plVar5 + 0xed0))();
    cVar3 = (**(code **)(*(int64_t *)CONCAT71(uStack_4f,local_50) + 0x3b0))();
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    (**(code **)(*plVar5 + 0xed0))();
    if (local_40 == (int64_t *)0x0) {
      cVar3 = '\0';
    }
    else {
      (**(code **)(*plVar5 + 0xed0))();
      cVar3 = (**(code **)(*(int64_t *)CONCAT71(uStack_4f,local_50) + 0x3a8))();
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      if (param_2 != '\0') {
        cVar3 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                            *plVar5 + 0x28))();
        (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                    *plVar5 + 0x20))();
        if ((cVar3 != '\0') &&
           (cVar3 = (**(code **)((int64_t)&dylib_command_000012e8.dylib.name.offset + *plVar5))(),
           cVar3 == '\0')) {
          (**(code **)((int64_t)&dylib_command_000012e8.cmd + *plVar5))();
        }
        lVar1 = g_026f6e08;
        if (g_026f6e08 != 0) {
          FUN_00d50b00();
        }
        FUN_0023de90();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_01caeae0();
      plVar2 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar6 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
      if (plVar2 != (int64_t *)0x0) {
        FUN_01caeae0();
        (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                    *plVar5 + 0x28))();
        FUN_01d66ab0();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_0023dba0;
    }
    FUN_01caeae0();
    plVar5 = local_40;
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (int64_t *)0x0) {
      FUN_01caeae0();
      FUN_01d66ab0();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01caeae0();
    plVar5 = local_40;
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (int64_t *)0x0) {
      FUN_01caeae0();
      FUN_01d66ab0();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  uVar6 = 0;
LAB_0023dba0:
  FUN_00d50b20();
  return uVar6 & 0xffffffff;
}

