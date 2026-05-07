// Function: FUN_003c0750
// Address: 003c0750
// Size: 855 bytes
// Class: MDAudioTrackHeaderViewController

void FUN_003c0750(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  char *pcVar4;
  void*this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  if (param_2 == 0) {
    FUN_01c00e50();
    lVar1 = CONCAT71(uStack_4f,local_50);
    if (local_48 == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_38[0] = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    pcVar4 = local_38;
    if (local_38[0] == '\0') {
      pcVar4 = &local_50;
    }
    local_50 = local_38[0];
    *pcVar4 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    cVar2 = FUN_01bc0690();
    if ((local_50 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_01c00e50();
      FUN_01bbfb40();
      FUN_01beea30();
      lVar1 = CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_38[0] = '\0';
      local_40 = lVar1;
      FUN_00d23480();
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01c00e50();
    cVar2 = FUN_01bc0690();
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_01c00e50();
      lVar1 = CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_38[0] = '\0';
      local_40 = lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01c00e50();
    FUN_01bbfb40();
    FUN_01beea30();
    lVar1 = CONCAT71(uStack_4f,local_50);
    if (local_48 == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_38[0] = '\0';
    local_40 = lVar1;
    FUN_00d23480();
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

