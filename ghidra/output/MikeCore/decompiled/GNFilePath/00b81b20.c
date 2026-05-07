// Function: FUN_00b81b20
// Address: 00b81b20
// Size: 1427 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00b81bf4) */
/* WARNING: Removing unreachable block (ram,0x00b81c00) */
/* WARNING: Removing unreachable block (ram,0x00b81e83) */
/* WARNING: Removing unreachable block (ram,0x00b81e8c) */
/* WARNING: Removing unreachable block (ram,0x00b81e34) */
/* WARNING: Removing unreachable block (ram,0x00b81e3d) */

void FUN_00b81b20(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  longlong *local_80;
  char local_78;
  int local_44;
  longlong *local_40;
  char local_38;
  
  lVar7 = *unaff_RSI;
  lVar8 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar8 != lVar7) {
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x58) = lVar7;
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00b9bdf0();
  lVar7 = *(longlong *)(unaff_RDI + 0x68);
  plVar9 = (longlong *)lVar7;
  if ((longlong *)lVar7 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        goto LAB_00b81b99;
      }
      FUN_00d50b00();
      lVar7 = *(longlong *)(unaff_RDI + 0x68);
      *(longlong **)(unaff_RDI + 0x68) = local_40;
      plVar9 = local_40;
    }
    else {
      local_38 = '\0';
      plVar9 = local_40;
LAB_00b81b99:
      *(longlong **)(unaff_RDI + 0x68) = plVar9;
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
      plVar9 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar7 = DAT_02764880;
  if (*(longlong *)(unaff_RDI + 0x68) == 0) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  uVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x68) + 0x380))();
  *(undefined4 *)(unaff_RDI + 0x24) = uVar4;
  uVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x68) + 0x390))();
  *(undefined4 *)(unaff_RDI + 0x28) = uVar4;
  uVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x68) + 0x388))();
  *(undefined4 *)(unaff_RDI + 0x2c) = uVar4;
  uVar10 = (**(code **)(**(longlong **)(unaff_RDI + 0x68) + 0x398))();
  *(undefined8 *)(unaff_RDI + 0x30) = uVar10;
  uVar10 = (**(code **)(**(longlong **)(unaff_RDI + 0x68) + 0x3a0))();
  *(undefined8 *)(unaff_RDI + 0x38) = uVar10;
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    FUN_00bc6940();
  }
  plVar9 = *(longlong **)(unaff_RDI + 0x68);
  lVar7 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar9 + 0x3b0))();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  plVar9 = (longlong *)*unaff_RSI;
  plVar1 = *(longlong **)(unaff_RDI + 0x58);
  plVar2 = plVar1;
  if (plVar1 != plVar9) {
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *(longlong **)(unaff_RDI + 0x58) = plVar9;
    plVar2 = plVar9;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar2 = *(longlong **)(unaff_RDI + 0x58);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x3c0))();
    lVar7 = *(longlong *)(unaff_RDI + 0x60);
    plVar9 = (longlong *)lVar7;
    if ((longlong *)lVar7 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) {
          plVar9 = (longlong *)0x0;
          goto LAB_00b81d23;
        }
        FUN_00d50b00();
        lVar7 = *(longlong *)(unaff_RDI + 0x60);
        *(longlong **)(unaff_RDI + 0x60) = local_40;
        plVar9 = local_40;
      }
      else {
        local_38 = '\0';
        plVar9 = local_40;
LAB_00b81d23:
        *(longlong **)(unaff_RDI + 0x60) = plVar9;
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
        plVar9 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (*(int *)(unaff_RDI + 0x28) != 1) {
    return;
  }
  local_44 = 0;
  local_40 = (longlong *)*unaff_RSI;
  local_38 = '\0';
  FUN_00b834c0(0,&local_44);
  if (local_78 == '\0') {
    if (local_80 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_80 == (longlong *)0x0) {
    return;
  }
  cVar3 = (**(code **)(*local_80 + 0x398))();
  if (cVar3 == '\0') goto LAB_00b8209c;
  FUN_00b9bdf0();
  plVar9 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (plVar9 == (longlong *)0x0) goto LAB_00b8209c;
  dVar11 = (double)(**(code **)(*plVar9 + 0x398))();
  dVar12 = (double)(**(code **)(**(longlong **)(unaff_RDI + 0x68) + 0x398))();
  if ((dVar11 != dVar12) || (NAN(dVar11) || NAN(dVar12))) {
LAB_00b81fdc:
    if (*(longlong *)(unaff_RDI + 0x80) != 0) {
      *(undefined8 *)(unaff_RDI + 0x80) = 0;
      FUN_00d50b20();
    }
  }
  else {
    iVar5 = (**(code **)(*plVar9 + 0x388))();
    iVar6 = (**(code **)(**(longlong **)(unaff_RDI + 0x68) + 0x388))();
    if (iVar5 != iVar6) goto LAB_00b81fdc;
    lVar7 = (**(code **)(*plVar9 + 0x3a0))();
    lVar8 = (**(code **)(**(longlong **)(unaff_RDI + 0x68) + 0x3a0))();
    if (lVar7 != lVar8) goto LAB_00b81fdc;
    if (local_44 == 0) {
      plVar1 = *(longlong **)(unaff_RDI + 0x80);
      if (plVar1 != plVar9) {
        FUN_00d50b00();
        *(longlong **)(unaff_RDI + 0x80) = plVar9;
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      plVar9 = *(longlong **)(unaff_RDI + 0x78);
      if (plVar9 != local_80) {
        FUN_00d50b00();
        *(longlong **)(unaff_RDI + 0x78) = local_80;
        if (plVar9 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      lVar7 = *(longlong *)(unaff_RDI + 0x68);
      lVar8 = *(longlong *)(unaff_RDI + 0x80);
      if (lVar8 != lVar7) {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        *(longlong *)(unaff_RDI + 0x80) = lVar7;
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      lVar7 = *unaff_RSI;
      lVar8 = *(longlong *)(unaff_RDI + 0x78);
      if (lVar8 != lVar7) {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        *(longlong *)(unaff_RDI + 0x78) = lVar7;
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      plVar1 = *(longlong **)(unaff_RDI + 0x68);
      if (plVar1 != plVar9) {
        FUN_00d50b00();
        *(longlong **)(unaff_RDI + 0x68) = plVar9;
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      plVar9 = *(longlong **)(unaff_RDI + 0x58);
      if (plVar9 != local_80) {
        FUN_00d50b00();
        *(longlong **)(unaff_RDI + 0x58) = local_80;
        if (plVar9 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    *(undefined4 *)(unaff_RDI + 0x50) = 1;
    *(undefined4 *)(unaff_RDI + 0x28) = 2;
  }
  FUN_00d50b20();
LAB_00b8209c:
  FUN_00d50b20();
  return;
}


