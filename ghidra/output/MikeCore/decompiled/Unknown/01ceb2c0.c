// Function: FUN_01ceb2c0
// Address: 01ceb2c0
// Size: 702 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01ceb463) */
/* WARNING: Removing unreachable block (ram,0x01ceb46f) */
/* WARNING: Removing unreachable block (ram,0x01ceb492) */
/* WARNING: Removing unreachable block (ram,0x01ceb49b) */

void FUN_01ceb2c0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  ulonglong uVar6;
  longlong lVar7;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  longlong local_50;
  char local_48 [12];
  uint local_3c;
  char local_38 [8];
  
  FUN_01ce9490();
  lVar4 = local_50;
  if (local_50 == 0) {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    lVar4 = 0;
  }
  else if (local_48[0] == '\0') {
    FUN_00d50b00();
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
  }
  FUN_00d23340();
  lVar7 = local_50;
  local_38[0] = local_48[0];
  pcVar3 = local_38;
  if (local_48[0] != '\0') {
    pcVar3 = local_48;
  }
  *pcVar3 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (lVar7 != 0)) {
    FUN_00d50b00();
  }
  FUN_01ce41d0();
  lVar5 = CONCAT71(uStack_5f,local_60);
  if (lVar5 == 0) {
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    goto LAB_01ceb55b;
  }
  local_3c = (uint)uVar6;
  if (local_58 == '\0') {
    FUN_00d50b00();
  }
  else {
    local_58 = '\0';
  }
  iVar1 = *(int *)(lVar5 + 0xc);
  if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  uVar6 = (ulonglong)local_3c;
  if (iVar1 != 0) {
    FUN_00d23310();
    lVar7 = local_50;
    local_60 = local_48[0];
    pcVar3 = local_48;
    if (local_48[0] == '\0') {
      pcVar3 = &local_60;
    }
    *pcVar3 = '\0';
    if ((local_48[0] != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else if (local_60 == '\0') {
      FUN_00d50b00();
    }
    FUN_00d21140();
    FUN_01ce9a80();
    lVar5 = *(longlong *)(unaff_RDI + 0x150);
    if (*(int *)(lVar5 + 0xc) < 2) {
LAB_01ceb509:
      if (*(int *)(lVar5 + 0xc) == 1) {
        FUN_01e42250();
      }
      else {
        FUN_01e42250();
      }
    }
    else {
      FUN_00d23340();
      pcVar3 = local_48;
      if (local_48[0] == '\0') {
        pcVar3 = &local_60;
      }
      local_60 = local_48[0];
      *pcVar3 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = *(longlong *)(local_50 + 0x20);
      if ((local_60 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = *(longlong *)(unaff_RDI + 0x150);
      if (lVar2 != lVar7) {
        uVar6 = (ulonglong)local_3c;
        goto LAB_01ceb509;
      }
      uVar6 = (ulonglong)local_3c;
      FUN_01e42250();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01ceb55b:
  if ((char)uVar6 == '\0' && lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}


