// Function: FUN_0023f500
// Address: 0023f500
// Size: 761 bytes
// Class: MDTestValuesController

uint64_t FUN_0023f500(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 != 0) {
    plVar1 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    plVar5 = local_48;
    local_58 = local_40[0];
    pcVar4 = local_40;
    if (local_40[0] == '\0') {
      pcVar4 = &local_58;
    }
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = *(int64_t **)(this_ptr + 0x90);
LAB_0023f588:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_0023f588;
    (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                *plVar5 + 0x18))();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    plVar5 = local_48;
    pcVar4 = local_40;
    if (local_40[0] == '\0') {
      pcVar4 = &local_58;
    }
    local_58 = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = *(int64_t **)(this_ptr + 0x90);
LAB_0023f60f:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_0023f60f;
    (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                *plVar5 + 0x10))();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    plVar1 = local_48;
    FUN_00d46300();
    lVar2 = CONCAT71(uStack_57,local_58);
    lVar3 = g_026f6e38;
    if (local_50 == '\0') {
      if (lVar2 != 0) {
        FUN_00d50b00();
        lVar3 = g_026f6e38;
      }
    }
    else {
      local_50 = '\0';
    }
    g_026f6e38 = lVar3;
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x80))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01caeae0();
  plVar1 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return 1;
  }
  FUN_01caeae0();
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  pcVar4 = local_38;
  if (local_40[0] != '\0') {
    pcVar4 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (int64_t *)0x0) {
    plVar5 = *(int64_t **)(this_ptr + 0x90);
  }
  else {
    plVar5 = local_48;
    if (local_38[0] != '\0') goto LAB_0023f7b0;
  }
  FUN_00d50b00();
LAB_0023f7b0:
  (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" + *plVar5 + 0x18)
  )();
  FUN_01d66ab0();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  return 1;
}

