// Function: FUN_00619340
// Address: 00619340
// Size: 733 bytes
// Class: Unknown

void FUN_00619340(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  char *pcVar3;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  cVar2 = FUN_0063f180();
  if (cVar2 == '\0') {
    if (param_2 == '\0') goto LAB_006194f3;
    FUN_00637870();
    FUN_006e2720();
    lVar1 = local_40;
    if (local_38[0] == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    FUN_006c5ee0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    FUN_00642f60();
  }
  else {
    FUN_0063f230();
    lVar1 = local_40;
    cVar2 = FUN_00212c70();
    if ((local_38[0] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    if (param_2 == '\0') goto LAB_006194f3;
    if (cVar2 == '\0') {
      FUN_00637870();
      FUN_006c5ea0();
      lVar1 = CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_006e28a0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00642f60();
      cVar2 = FUN_00637950();
    }
    else {
      FUN_0063f230();
      lVar1 = local_40;
      FUN_002218f0();
      if ((local_38[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      cVar2 = FUN_00637950();
    }
    if (cVar2 == '\0') {
      FUN_006470d0();
      cVar2 = FUN_00645730();
      if (cVar2 == '\0') {
        FUN_00645a20();
      }
    }
  }
  FUN_00643150();
LAB_006194f3:
  FUN_01caeae0();
  pcVar3 = &local_50;
  if (local_38[0] != '\0') {
    pcVar3 = local_38;
  }
  local_50 = local_38[0];
  *pcVar3 = '\0';
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != 0) && (FUN_01d66ab0(), local_50 != '\0')) {
    FUN_00d50b20();
  }
  FUN_00637950();
  return;
}

