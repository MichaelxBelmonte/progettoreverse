// Function: FUN_011f7510
// Address: 011f7510
// Size: 545 bytes
// Class: MUPulseAssignmentTarget


/* WARNING: Removing unreachable block (ram,0x011f75f2) */
/* WARNING: Removing unreachable block (ram,0x011f75fb) */

void FUN_011f7510(void)

{
  longlong lVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  longlong local_50;
  undefined4 local_44;
  longlong local_40;
  char local_38 [8];
  
  FUN_00d23340();
  lVar6 = local_40;
  pcVar3 = local_38;
  pcVar4 = &local_60;
  if (local_38[0] != '\0') {
    pcVar4 = pcVar3;
  }
  local_60 = local_38[0];
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (lVar6 != 0)) {
    pcVar3 = (char *)FUN_00d50b20();
  }
  local_50 = lVar6;
  if (lVar6 == 0) {
    local_44 = (undefined4)CONCAT71((int7)((ulonglong)pcVar3 >> 8),1);
  }
  else {
    if (local_60 == '\0') {
      FUN_00d50b00();
    }
    local_44 = 0;
  }
  FUN_016ca4c0();
  lVar6 = local_40;
  if (local_40 == 0) {
    bVar2 = true;
    lVar6 = 0;
  }
  else {
    if (local_38[0] == '\0') {
      FUN_00d50b00();
      bVar2 = false;
      if ((local_38[0] == '\0') || (local_40 == 0)) goto LAB_011f75e1;
      FUN_00d50b20();
    }
    else {
      local_38[0] = '\0';
    }
    bVar2 = false;
  }
LAB_011f75e1:
  iVar7 = *(int *)(lVar6 + 0xc) * 2 + -2;
  if (1 < iVar7) {
    iVar5 = 1;
    do {
      FUN_00e7bcc0();
      uVar8 = FUN_015c8000((float)iVar7);
      lVar1 = CONCAT71(uStack_5f,local_60);
      if (local_58 == '\0') {
        if (lVar1 != 0) {
          uVar8 = FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_38[0] = '\0';
      local_40 = lVar1;
      FUN_00d23370(uVar8,iVar5);
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      iVar5 = iVar5 + 2;
    } while (iVar5 < iVar7);
  }
  local_38[0] = '\0';
  local_40 = lVar6;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_44 == '\0' && local_50 != 0) {
    FUN_00d50b20();
  }
  if (!bVar2 && lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}


