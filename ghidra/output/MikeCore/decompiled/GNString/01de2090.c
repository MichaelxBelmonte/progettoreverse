// Function: FUN_01de2090
// Address: 01de2090
// Size: 1109 bytes
// Class: GNString


void FUN_01de2090(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int *unaff_RSI;
  longlong unaff_RDI;
  longlong local_98;
  char local_90;
  longlong local_78;
  char local_70;
  longlong *local_58;
  char local_40 [8];
  char local_38 [8];
  
  lVar1 = *param_2;
  local_40[0] = '\0';
  iVar6 = FUN_00d23d20();
  if ((local_40[0] != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  if (iVar6 == 0) {
    FUN_00d23340();
    pcVar7 = local_38;
    if (local_40[0] != '\0') {
      pcVar7 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar7 = '\0';
    if ((local_40[0] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = *param_2;
    if (lVar2 == lVar1) {
      if (((char)param_2[1] == '\0') && (lVar1 != 0)) {
        if (local_38[0] == '\0') {
          FUN_00d50b00();
        }
        goto LAB_01de233c;
      }
      if ((local_38[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar4 = param_2[1];
      if (local_38[0] == '\0') {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        *param_2 = lVar1;
        if (((char)lVar4 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_2 = lVar1;
        if (((char)lVar4 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_01de233c:
      local_58 = param_2 + 1;
      *(undefined1 *)local_58 = 1;
    }
    iVar6 = *unaff_RSI;
    *unaff_RSI = iVar6 + -1;
    if (iVar6 < 1) {
      *unaff_RSI = *(int *)(unaff_RDI + 0x180) + -1;
      cVar5 = FUN_01db9af0();
      goto joined_r0x01de240b;
    }
  }
  else {
    if (iVar6 == -1) {
      FUN_00d23310();
      pcVar7 = local_38;
      if (local_40[0] != '\0') {
        pcVar7 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar7 = '\0';
      if ((local_40[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = *param_2;
      if (lVar2 == lVar1) {
        if (((char)param_2[1] == '\0') && (lVar1 != 0)) {
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
          goto LAB_01de22f6;
        }
        if ((local_38[0] != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar4 = param_2[1];
        if (local_38[0] == '\0') {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          *param_2 = lVar1;
          if (((char)lVar4 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          *param_2 = lVar1;
          if (((char)lVar4 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
        }
LAB_01de22f6:
        local_58 = param_2 + 1;
        *(undefined1 *)local_58 = 1;
      }
      *unaff_RSI = 0;
      cVar5 = FUN_01db9af0();
      goto joined_r0x01de240b;
    }
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x160) + 0x10) + -8 + (longlong)iVar6 * 8);
    lVar2 = *param_2;
    lVar4 = param_2[1];
    if (lVar2 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *param_2 = lVar1;
      if (((char)lVar4 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
LAB_01de2259:
      *(undefined1 *)(param_2 + 1) = 1;
      cVar5 = FUN_01db9af0();
      goto joined_r0x01de240b;
    }
    if (((char)lVar4 == '\0') && (lVar1 != 0)) {
      FUN_00d50b00();
      goto LAB_01de2259;
    }
  }
  cVar5 = FUN_01db9af0();
joined_r0x01de240b:
  if (cVar5 != '\0') {
    plVar3 = *(longlong **)(unaff_RDI + 0x1f0);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    local_98 = *param_2;
    local_90 = '\0';
    cVar5 = (**(code **)(*plVar3 + 0x38))(&local_98,*unaff_RSI);
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      return;
    }
  }
  cVar5 = FUN_01db9ae0();
  if (cVar5 != '\0') {
    plVar3 = *(longlong **)(unaff_RDI + 0x1f0);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    local_78 = *param_2;
    local_70 = '\0';
    cVar5 = (**(code **)(*plVar3 + 0x40))(&local_78,*unaff_RSI);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      return;
    }
  }
  FUN_01de2090();
  return;
}


