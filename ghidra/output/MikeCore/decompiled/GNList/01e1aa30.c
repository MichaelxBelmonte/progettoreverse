// Function: FUN_01e1aa30
// Address: 01e1aa30
// Size: 759 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01e1ab3e) */
/* WARNING: Removing unreachable block (ram,0x01e1ab47) */

undefined8 FUN_01e1aa30(int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar7;
  longlong local_58;
  char local_50;
  longlong *local_38;
  
  if (*unaff_RSI != 0) goto LAB_01e1ab0d;
  FUN_00d8ede0();
  lVar1 = *unaff_RSI;
  if (lVar1 == local_58) {
    if (((char)unaff_RSI[1] != '\0') || (local_58 == 0)) goto LAB_01e1aaf9;
    if (local_50 == '\0') {
      FUN_00d50b00();
      goto LAB_01e1aaf2;
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = local_58;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01e1aaf2:
      local_38 = unaff_RSI + 1;
      *(undefined1 *)local_38 = 1;
LAB_01e1aaf9:
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01e1ab0d;
    }
    *unaff_RSI = local_58;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  local_38 = unaff_RSI + 1;
  *(undefined1 *)local_38 = 1;
LAB_01e1ab0d:
  (**(code **)(**(longlong **)(unaff_RDI + 0x138) + 0x378))();
  if (local_58 == 0) {
    local_58 = 0;
  }
  else if (local_50 == '\0') {
    FUN_00d50b00();
  }
  iVar4 = FUN_00d8c7a0();
  if ((0 < param_1) && (iVar4 <= param_1)) {
    param_1 = FUN_00d8c7a0();
    param_1 = param_1 + -1;
  }
  if (param_2 == 0) {
    iVar4 = FUN_00d8c7a0();
    iVar7 = 1;
    lVar1 = *unaff_RSI;
  }
  else {
    iVar7 = -1;
    iVar4 = 0;
    lVar1 = *unaff_RSI;
  }
  if ((lVar1 == 0) || (iVar5 = FUN_00d8c7a0(), iVar5 == 0)) {
    if (param_2 == 0) {
      uVar6 = FUN_00e7b4e0();
    }
    else {
      uVar6 = FUN_00e7b4e0();
    }
  }
  else if (param_2 == 0) {
    for (; param_1 != iVar4; param_1 = param_1 + iVar7) {
      FUN_00d8cbc0();
      cVar3 = FUN_00d90d50();
      if (cVar3 != '\0') {
        uVar6 = FUN_00e7b4e0();
        goto LAB_01e1acd4;
      }
    }
    uVar6 = FUN_00e7b4e0();
  }
  else {
    if (param_2 != 1) {
      do {
        FUN_00d8cbc0();
        FUN_00d90d50();
      } while( true );
    }
    for (; param_1 != iVar4; param_1 = param_1 + iVar7) {
      FUN_00d8cbc0();
      cVar3 = FUN_00d90d50();
      if (cVar3 != '\0') {
        uVar6 = FUN_00e7b4e0();
        goto LAB_01e1acd4;
      }
    }
    uVar6 = FUN_00e7b4e0();
  }
LAB_01e1acd4:
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return uVar6;
}


