// Function: FUN_00cae8f0
// Address: 00cae8f0
// Size: 989 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00caea05) */
/* WARNING: Removing unreachable block (ram,0x00caea0e) */

void FUN_00cae8f0(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong unaff_RDI;
  bool bVar9;
  
  if (*(longlong *)(unaff_RDI + 0x90) == 0) {
    if ((DAT_028a7308 == (undefined8 *)0x0) || (DAT_028a7311 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a7308 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a7308 == puVar5) {
          bVar3 = false;
          bVar2 = false;
        }
        else {
          bVar3 = true;
          bVar2 = true;
          bVar9 = DAT_028a7308 != (undefined8 *)0x0;
          DAT_028a7308 = puVar5;
          if (bVar9) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a7310 == '\0') {
          DAT_028a7310 = '\x01';
          FUN_00e8cb90();
          bVar2 = bVar3;
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_00d22760();
        DAT_028a7311 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a7311 = '\x01';
        FUN_00e8cb70();
      }
    }
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_025823b0;
    puVar6[4] = 0;
    *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x12) = 0;
    (*DAT_025823c8)();
    puVar5 = *(undefined8 **)(unaff_RDI + 0x68);
    if (puVar5 == puVar6) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x68) = puVar6;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00df2b20();
    (**(code **)(*(longlong *)(unaff_RDI + 0x18) + 0x10))();
    FUN_00d50b00();
    FUN_00df2b40();
    if ((longlong *)(unaff_RDI + 0x18) != (longlong *)0x0) {
      (**(code **)(*(longlong *)(unaff_RDI + 0x18) + 0x10))();
      FUN_00d50b20();
    }
    FUN_00df2c50();
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_025736a8;
    puVar6[3] = 0;
    *(undefined4 *)(puVar6 + 4) = 0;
    (*DAT_025736c0)();
    puVar5 = *(undefined8 **)(unaff_RDI + 0xc0);
    if (puVar5 == puVar6) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0xc0) = puVar6;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar7 + 0x18))();
    lVar1 = *(longlong *)(unaff_RDI + 0x80);
    *(longlong **)(unaff_RDI + 0x80) = plVar7;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_0258a670;
    pcVar4 = DAT_0258a688;
    (*DAT_0258a688)();
    puVar5 = *(undefined8 **)(unaff_RDI + 0x90);
    if (puVar5 == puVar6) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x90) = puVar6;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00e38130(0,1,0);
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_0258a670;
    (*pcVar4)();
    puVar5 = *(undefined8 **)(unaff_RDI + 0x98);
    if (puVar5 == puVar6) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x98) = puVar6;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00e38130(0,1,0);
    uVar8 = FUN_00c8d380();
    *(undefined8 *)(unaff_RDI + 0xa0) = uVar8;
    FUN_00c8d600();
    FUN_00c8d610();
    uVar8 = FUN_00c8d380();
    FUN_00c8d600();
    FUN_00c8d610();
    *(undefined8 *)(unaff_RDI + 0xb8) = uVar8;
  }
  return;
}


