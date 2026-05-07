// Function: FUN_01e17b30
// Address: 01e17b30
// Size: 1271 bytes
// Class: GNList


undefined8 FUN_01e17b30(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong unaff_RDI;
  longlong lVar14;
  undefined4 extraout_XMM0_Da;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  undefined1 local_4c [4];
  longlong local_48;
  char local_40;
  longlong local_38;
  
  if ((DAT_028b9440 == 0) || (DAT_028b9449 == '\0')) {
    FUN_00e8cb50();
    lVar14 = DAT_027f3300;
    if (DAT_028b9440 == 0) {
      if (DAT_027f3300 != 0) {
        FUN_00d50b00();
        lVar3 = DAT_028b9440;
        if (DAT_028b9440 == lVar14) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          DAT_028b9440 = lVar14;
          bVar2 = true;
          bVar1 = true;
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b9448 == '\0') {
          DAT_028b9448 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      DAT_028b9449 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b9449 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b9450 == 0) || (DAT_028b9459 == '\0')) {
    FUN_00e8cb50();
    lVar14 = DAT_027f3308;
    if (DAT_028b9450 == 0) {
      if (DAT_027f3308 != 0) {
        FUN_00d50b00();
        lVar3 = DAT_028b9450;
        if (DAT_028b9450 == lVar14) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          DAT_028b9450 = lVar14;
          bVar2 = true;
          bVar1 = true;
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b9458 == '\0') {
          DAT_028b9458 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      DAT_028b9459 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b9459 = '\x01';
      FUN_00e8cb70();
    }
  }
  iVar9 = FUN_01eacf20(param_1);
  if (iVar9 == -1) {
    uVar13 = FUN_00e7b4e0();
    return uVar13;
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x138) + 0x378))();
  lVar14 = local_48;
  if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  iVar10 = FUN_00d8c7a0();
  iVar11 = iVar9;
  if (iVar10 <= iVar9) {
    iVar11 = FUN_00d8c7a0();
    iVar11 = iVar11 + -1;
  }
  sVar8 = FUN_00d8cbc0();
  iVar10 = FUN_00d8c7a0();
  if (iVar11 + 1 < iVar10) {
    uVar12 = FUN_00d8cbc0();
  }
  else {
    uVar12 = 0;
  }
  cVar7 = FUN_01e9c7e0(uVar12,local_4c);
  if (cVar7 == '\0') {
    cVar7 = FUN_00d90d50();
    lVar6 = DAT_028b9450;
    lVar5 = DAT_027f3310;
    lVar4 = DAT_027259e0;
    lVar3 = DAT_026fce10;
    if (cVar7 == '\0') {
      if (sVar8 == 9) {
        local_a8 = lVar14;
        local_a0 = 0;
        uVar12 = extraout_XMM0_Da;
        if (DAT_027f3310 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_98 = lVar5;
        local_90 = 1;
        uVar13 = FUN_01e1adc0(uVar12,&local_98);
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      else if (sVar8 == 0x2d) {
        local_88 = lVar14;
        local_80 = 0;
        uVar12 = extraout_XMM0_Da;
        if (DAT_026fce10 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_78 = lVar3;
        local_70 = 1;
        uVar13 = FUN_01e1adc0(uVar12,&local_78);
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      else if (sVar8 == 0x20) {
        local_c8 = lVar14;
        local_c0 = 0;
        uVar12 = extraout_XMM0_Da;
        if (DAT_027259e0 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_b8 = lVar4;
        local_b0 = 1;
        uVar13 = FUN_01e1adc0(uVar12,&local_b8);
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        cVar7 = FUN_00d90d50();
        if (cVar7 == '\0') {
          local_38 = lVar14;
          iVar11 = 0;
          do {
            lVar14 = local_38;
            if (iVar9 == iVar11) break;
            FUN_00d8cbc0();
            cVar7 = FUN_00d90d50();
            iVar11 = iVar11 + 1;
            lVar14 = local_38;
          } while (cVar7 == '\0');
          do {
            (**(code **)(**(longlong **)(unaff_RDI + 0x138) + 0x378))();
            iVar11 = FUN_00d8c7a0();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (iVar9 == iVar11) goto LAB_01e18017;
            FUN_00d8cbc0();
            cVar7 = FUN_00d90d50();
            if (cVar7 != '\0') goto LAB_01e18017;
            iVar9 = iVar9 + 1;
          } while( true );
        }
        uVar13 = FUN_00e7b4e0();
      }
    }
    else {
      uVar12 = extraout_XMM0_Da;
      if (DAT_028b9450 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_d8 = lVar6;
      local_d0 = 1;
      uVar13 = FUN_01e1adc0(uVar12,&local_d8);
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar13 = FUN_00e7b4e0();
  }
LAB_01e17df8:
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  return uVar13;
LAB_01e18017:
  uVar13 = FUN_00e7b4e0();
  goto LAB_01e17df8;
}


