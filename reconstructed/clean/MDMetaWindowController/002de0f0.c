// Function: FUN_002de0f0
// Address: 002de0f0
// Size: 645 bytes
// Class: MDMetaWindowController

int FUN_002de0f0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  FUN_01bcc520();
  plVar1 = local_38;
  if ((((local_30 == '\0') && (local_38 != (int64_t *)0x0)) && (FUN_00d50b00(), local_30 != '\0'))
     && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01bf21a0();
  FUN_01d384c0();
  FUN_01e49090();
  uVar4 = (**(code **)(*plVar1 + 0x9a8))();
  FUN_01bcee20();
  plVar2 = local_38;
  if (((local_30 == '\0') && (local_38 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_30 != '\0' && (local_38 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  local_78 = plVar1;
  local_70 = '\0';
  FUN_002de5d0();
  local_58 = local_38;
  local_50 = 0;
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_50 = '\x01';
  iVar3 = FUN_0007cb70(&local_58,&local_78,0,3);
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar3 == 0) {
    FUN_01c023b0();
  }
  else {
    (**(code **)(*plVar1 + 0x930))();
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    local_60 = '\0';
    local_68 = 0;
    FUN_01c025c0(uVar4,&local_68,0);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return iVar3;
}

