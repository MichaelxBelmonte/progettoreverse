// Function: FUN_01ed6a90
// Address: 01ed6a90
// Size: 1102 bytes
// Class: GNTextAutoCompleterItem


/* WARNING: Removing unreachable block (ram,0x01ed6d41) */
/* WARNING: Removing unreachable block (ram,0x01ed6bcc) */
/* WARNING: Removing unreachable block (ram,0x01ed6bd5) */
/* WARNING: Removing unreachable block (ram,0x01ed6c68) */
/* WARNING: Removing unreachable block (ram,0x01ed6c71) */
/* WARNING: Removing unreachable block (ram,0x01ed6dfb) */
/* WARNING: Removing unreachable block (ram,0x01ed6e08) */

void FUN_01ed6a90(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x928))();
  FUN_01ed7190();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (unaff_RDI[0x54] == 0) {
    *(undefined4 *)(unaff_RDI + 0x30) = 0;
  }
  else {
    local_50 = local_40;
    uVar9 = FUN_01e436c0();
    FUN_01ed48b0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    plVar2 = (longlong *)unaff_RDI[0x54];
    local_78 = 0;
    local_88 = local_40;
    FUN_00d50b00();
    local_78 = '\x01';
    local_a8 = 0;
    local_a0 = '\0';
    local_80 = unaff_RDI;
    (**(code **)(*plVar2 + 0x18))(&local_a8,&local_80);
    lVar3 = local_98;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    FUN_00d243f0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = unaff_RDI[0x56];
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    uVar10 = FUN_00d243f0();
    if (lVar3 != 0) {
      uVar10 = FUN_00d50b20();
    }
    FUN_00c8e340(uVar10,0);
    iVar1 = *(int *)(unaff_RDI[0x57] + 0xc);
    *(int *)(unaff_RDI + 0x30) = iVar1;
    if (0 < iVar1) {
      lVar7 = 0;
      do {
        plVar2 = (longlong *)unaff_RDI[0x54];
        local_68 = 0;
        FUN_00d50b00();
        local_68 = '\x01';
        lVar8 = *(longlong *)(*(longlong *)(unaff_RDI[0x57] + 0x10) + lVar7 * 8);
        local_58 = 0;
        local_70 = unaff_RDI;
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        local_58 = '\x01';
        local_60 = lVar8;
        uVar10 = (**(code **)(*plVar2 + 0x18))(&local_60,&local_70);
        if (lVar3 != 0) {
          uVar10 = FUN_00d50b00();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        if (((lVar3 == 0) || (*(int *)(lVar3 + 0xc) != 0)) ||
           (cVar6 = (**(code **)(*unaff_RDI + 0xa40))(), uVar10 = extraout_XMM0_Da, cVar6 != '\0'))
        {
          bVar5 = false;
          lVar8 = lVar3;
        }
        else {
          uVar10 = FUN_00d50b20();
          bVar5 = true;
          lVar8 = 0;
        }
        lVar4 = unaff_RDI[0x58];
        iVar1 = *(int *)(lVar4 + 0x18);
        FUN_00c8e340(uVar10,1);
        *(ulonglong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar1) =
             (ulonglong)(lVar8 != 0) << 0x20;
        if (!bVar5 && lVar8 != 0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < (int)unaff_RDI[0x30]);
    }
    FUN_01ed4a40();
    FUN_01e3f820();
    cVar6 = FUN_00d05440();
    if (cVar6 != '\0') {
      (**(code **)(*unaff_RDI + 0x518))(uVar9,param_2);
    }
    local_40 = local_50;
    if (local_88 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01dcfdb0();
  FUN_01ed73b0();
  (**(code **)(*unaff_RDI + 0x930))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}


