// Function: FUN_0008eac0
// Address: 0008eac0
// Size: 754 bytes
// Class: MDMetaWindowController


longlong * FUN_0008eac0(longlong *param_1,float param_2,int param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong *in_RDX;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  longlong *local_80;
  char local_78;
  longlong local_60;
  char local_58;
  longlong local_48;
  char local_40;
  int local_34;
  
  plVar1 = (longlong *)*in_RDX;
  local_34 = param_3;
  if (*(longlong **)(unaff_RSI + 0x88) == plVar1) {
    (**(code **)(*plVar1 + 0x4d8))();
    lVar2 = DAT_026fce10;
    param_1 = (longlong *)*param_1;
    if (DAT_026fce10 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*param_1 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    fVar7 = DAT_023908e8;
    if (cVar3 == '\0') {
      fVar7 = (float)FUN_00d8d7b0();
    }
    fVar9 = (float)param_4;
    if (param_2 * DAT_0239011c < (float)local_34) {
      fVar9 = fVar9 / DAT_023908ec;
    }
    (**(code **)(**(longlong **)(unaff_RSI + 0x108) + 0x378))(fVar7 + fVar9);
  }
  else if (*(longlong **)(unaff_RSI + 0x98) == plVar1) {
    uVar4 = 4;
    if ((*(longlong *)(unaff_RSI + 0x128) != 0) &&
       (FUN_0123fef0(), *(longlong *)(unaff_RSI + 0x128) != 0)) {
      uVar4 = FUN_0123ff00();
    }
    (**(code **)(*(longlong *)*in_RDX + 0x4d8))();
    if (param_2 * DAT_0239011c < (float)local_34) {
      iVar5 = 0;
      if (1 < uVar4) {
        iVar5 = 0;
        do {
          uVar4 = (int)uVar4 >> 1;
          iVar5 = iVar5 + 1;
        } while (1 < uVar4);
      }
      iVar6 = iVar5 + param_4 / 10;
      if (iVar6 == 0 || SCARRY4(iVar5,param_4 / 10) != iVar6 < 0) {
        uVar4 = 1;
      }
      else {
        iVar5 = 5;
        if (iVar6 < 5) {
          iVar5 = iVar6;
        }
        uVar4 = 2;
        if ((1 < iVar5) && (uVar4 = 4, iVar5 != 2)) {
          uVar4 = 8;
          if (3 < iVar5) {
            uVar4 = (uint)(iVar5 != 4) * 0x10 + 0x10;
          }
        }
      }
    }
    uVar8 = FUN_01e05950();
    uVar8 = FUN_0123fbe0(uVar8,uVar4);
    local_40 = 0;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        uVar8 = FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_40 = '\x01';
    local_48 = local_60;
    (**(code **)(*local_80 + 0x388))(uVar8,&local_48);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar2 = *param_1;
    if ((char)param_1[1] == '\0') {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar2;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      *unaff_RDI = lVar2;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  return unaff_RDI;
}


