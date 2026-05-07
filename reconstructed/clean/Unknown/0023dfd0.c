// Function: FUN_0023dfd0
// Address: 0023dfd0
// Size: 596 bytes
// Class: Unknown

uint64_t FUN_0023dfd0(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  int64_t *plVar6;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
LAB_0023e054:
    plVar6 = (int64_t *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar6 = local_40;
    pcVar4 = &local_50;
    if (local_38[0] != '\0') {
      pcVar4 = local_38;
    }
    local_50 = local_38[0];
    *pcVar4 = '\0';
    if ((local_38[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (int64_t *)0x0) {
      plVar6 = *(int64_t **)(this_ptr + 0x90);
      if (plVar6 == (int64_t *)0x0) goto LAB_0023e054;
    }
    else if (local_50 != '\0') goto LAB_0023e057;
    FUN_00d50b00();
  }
LAB_0023e057:
  (**(code **)(*plVar6 + 0xed0))();
  if (local_40 == (int64_t *)0x0) {
    uVar5 = 0;
  }
  else {
    (**(code **)(*plVar6 + 0xed0))();
    uVar3 = (**(code **)(*(int64_t *)CONCAT71(uStack_4f,local_50) + 0x3c8))();
    uVar5 = (uint64_t)uVar3;
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar5 == '\0') {
    cVar2 = (**(code **)((int64_t)&dylib_command_000012e8.dylib.name.offset + *plVar6))();
    if (cVar2 != '\0') {
      if (param_2 != '\0') {
        (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                    *plVar6 + 8))();
        (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                    *plVar6))();
        uVar5 = g_026f6e00;
        if (g_026f6e00 != 0) {
          FUN_00d50b00();
        }
        FUN_0023de90();
        if (uVar5 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_01caeae0();
      plVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
      if (plVar1 != (int64_t *)0x0) {
        FUN_01caeae0();
        (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                    *plVar6 + 8))();
        FUN_01d66ab0();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_0023e20b;
    }
  }
  else {
    FUN_01caeae0();
    plVar6 = local_40;
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_01caeae0();
      FUN_01d66ab0();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  uVar5 = 0;
LAB_0023e20b:
  FUN_00d50b20();
  return uVar5 & 0xffffffff;
}

