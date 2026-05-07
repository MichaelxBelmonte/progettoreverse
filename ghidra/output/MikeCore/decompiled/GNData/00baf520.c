// Function: FUN_00baf520
// Address: 00baf520
// Size: 666 bytes
// Class: GNData


void FUN_00baf520(uint param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 unaff_RSI;
  longlong *unaff_RDI;
  int iVar10;
  int iVar11;
  bool bVar12;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  uVar8 = (ulonglong)param_1;
  switch((short)unaff_RDI[8]) {
  case 1:
  case 3:
    local_38 = uVar8;
    uVar3 = (**(code **)(*unaff_RDI + 0x388))();
    uVar4 = (**(code **)(*unaff_RDI + 0x390))();
    lVar1 = unaff_RDI[4];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00b9d430(local_38,param_2,uVar3,uVar4);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    break;
  case 2:
  case 0x11:
    if ((short)unaff_RDI[8] == 2) {
      uVar9 = (uint)(short)unaff_RDI[0xd];
      plVar5 = (longlong *)((longlong)unaff_RDI + 0x6a);
    }
    else {
      uVar9 = (int)*(short *)((longlong)unaff_RDI + 0x6e) /
              (int)*(short *)((longlong)unaff_RDI + 0x3c);
      plVar5 = unaff_RDI + 0xe;
    }
    local_3c = (int)(short)*plVar5;
    if ((param_2 | (longlong)(int)uVar9) >> 0x20 == 0) {
      param_2 = (param_2 & 0xffffffff) % (ulonglong)uVar9;
    }
    else {
      param_2 = (longlong)param_2 % (longlong)(int)uVar9;
    }
    uVar6 = FUN_00e83010();
    (**(code **)(*(longlong *)unaff_RDI[4] + 0x3a0))();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    iVar11 = 0;
    do {
      iVar7 = local_3c;
      iVar10 = (int)param_2;
      uVar2 = iVar10 + (int)uVar8;
      if ((int)(uVar9 - iVar10) < (int)uVar8) {
        uVar2 = uVar9;
      }
      local_40 = local_3c;
      local_38 = uVar8;
      (**(code **)(*(longlong *)unaff_RDI[4] + 0x380))(&local_40,uVar6);
      bVar12 = local_40 == iVar7;
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02765700;
      if (local_90 == 0 && bVar12) {
        if ((short)unaff_RDI[8] == 2) {
          FUN_00baeb90(uVar2,param_2 & 0xffffffff,unaff_RSI,iVar11);
        }
        else {
          FUN_00baf170(uVar2,param_2 & 0xffffffff,unaff_RSI,iVar11);
        }
        iVar7 = (int)local_38;
      }
      else {
        if (DAT_02765700 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        iVar7 = (int)local_38;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      iVar10 = uVar2 - iVar10;
      iVar11 = iVar11 + iVar10;
      param_2 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 - iVar10);
    } while (iVar7 - iVar10 != 0 && iVar10 <= iVar7);
    FUN_00e83070();
  }
  return;
}


