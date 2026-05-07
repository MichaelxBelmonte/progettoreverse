// Function: FUN_01f0c590
// Address: 01f0c590
// Size: 523 bytes
// Class: GNMultipleValue


longlong * FUN_01f0c590(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  longlong local_50;
  char local_48;
  longlong local_40;
  
  if (unaff_RSI[0x2d] == 0) {
    (**(code **)(*unaff_RSI + 0x930))();
  }
  FUN_01e466c0(param_1);
  uVar7 = (**(code **)(*unaff_RSI + 0x950))();
  lVar6 = 8;
  uVar4 = 0;
  bVar1 = false;
  local_40 = 0;
  do {
    iVar3 = FUN_01d5b230();
    if ((longlong)iVar3 <= (longlong)uVar4) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      if (!bVar1) {
        return unaff_RDI;
      }
      if (local_40 == 0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
    FUN_01d5b240(extraout_XMM0_Da,uVar4 & 0xffffffff);
    if (local_40 == local_50) {
      if ((bVar1) || (local_40 == 0)) goto joined_r0x01f0c6ed;
      bVar1 = true;
      if (local_48 == '\0') {
        FUN_00d50b00();
        lVar5 = local_40;
        goto LAB_01f0c6ce;
      }
    }
    else if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      lVar5 = local_50;
      if ((bVar1) && (local_40 != 0)) {
        FUN_00d50b20();
      }
LAB_01f0c6ce:
      bVar1 = true;
      local_40 = lVar5;
joined_r0x01f0c6ed:
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else if ((bVar1) && (local_40 != 0)) {
      local_40 = local_50;
      FUN_00d50b20();
      bVar1 = true;
    }
    else {
      local_40 = local_50;
      bVar1 = true;
    }
    cVar2 = FUN_00d05410(uVar7,*(undefined8 *)(*(longlong *)(unaff_RSI[0x2d] + 0x10) + -8 + lVar6),
                         *(undefined8 *)(*(longlong *)(unaff_RSI[0x2d] + 0x10) + lVar6));
    uVar4 = uVar4 + 1;
    lVar6 = lVar6 + 0x10;
    if (cVar2 != '\0') {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if ((!bVar1) && (local_40 != 0)) {
        FUN_00d50b00();
      }
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return unaff_RDI;
    }
  } while( true );
}


