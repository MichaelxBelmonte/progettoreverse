// Function: FUN_00618f70
// Address: 00618f70
// Size: 596 bytes
// Class: Unknown


void FUN_00618f70(undefined8 param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  cVar2 = FUN_00637950();
  if (param_2 == 0) goto LAB_00619154;
  if (cVar2 == '\0') {
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
    FUN_006470d0();
    cVar2 = FUN_00645730();
    if (cVar2 != '\0') goto LAB_00619139;
  }
  else {
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
    FUN_006470d0();
    cVar2 = FUN_0063f180();
    if (cVar2 == '\0') {
      FUN_00642f60();
      FUN_00643150();
    }
    iVar3 = FUN_00643ea0();
    if (iVar3 != -1) {
LAB_00619139:
      FUN_00645a20();
    }
  }
  FUN_00643150();
LAB_00619154:
  FUN_01caeae0();
  pcVar4 = &local_50;
  if (local_38[0] != '\0') {
    pcVar4 = local_38;
  }
  local_50 = local_38[0];
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != 0) && (FUN_01d66ab0(), local_50 != '\0')) {
    FUN_00d50b20();
  }
  FUN_0063f180();
  return;
}


