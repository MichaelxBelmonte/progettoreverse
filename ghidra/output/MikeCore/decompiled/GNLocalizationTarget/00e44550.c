// Function: FUN_00e44550
// Address: 00e44550
// Size: 1838 bytes
// Class: GNLocalizationTarget


/* WARNING: Removing unreachable block (ram,0x00e44c38) */
/* WARNING: Removing unreachable block (ram,0x00e44c41) */

void FUN_00e44550(void)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *unaff_RDI;
  longlong local_38;
  char local_30;
  
  FUN_00c899d0();
  *(undefined1 *)((longlong)unaff_RDI + 0x2c) = 1;
  FUN_00d79550();
  lVar1 = unaff_RDI[0xc];
  lVar7 = lVar1;
  if (lVar1 != local_38) {
    lVar7 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar7 = 0;
        goto LAB_00e44591;
      }
      FUN_00d50b00();
      lVar1 = unaff_RDI[0xc];
      unaff_RDI[0xc] = local_38;
    }
    else {
      local_30 = '\0';
LAB_00e44591:
      unaff_RDI[0xc] = lVar7;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar7 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025683c0;
  pcVar3 = DAT_025683d8;
  (*DAT_025683d8)();
  FUN_00c92170();
  puVar6 = (undefined8 *)unaff_RDI[10];
  if (puVar6 == puVar4) {
    FUN_00d50b20();
LAB_00e4463e:
    puVar4 = (undefined8 *)unaff_RDI[10];
    if (puVar4 != (undefined8 *)0x0) goto LAB_00e44653;
    puVar4 = (undefined8 *)0x0;
  }
  else {
    unaff_RDI[10] = (longlong)puVar4;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
      goto LAB_00e4463e;
    }
LAB_00e44653:
    FUN_00d50b00();
  }
  FUN_00daa540();
  lVar1 = unaff_RDI[0xb];
  lVar7 = lVar1;
  if (lVar1 != local_38) {
    lVar7 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar7 = 0;
        goto LAB_00e44687;
      }
      FUN_00d50b00();
      lVar1 = unaff_RDI[0xb];
      unaff_RDI[0xb] = local_38;
    }
    else {
      local_30 = '\0';
LAB_00e44687:
      unaff_RDI[0xb] = lVar7;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar7 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025683c0;
  (*pcVar3)();
  FUN_00c92170();
  puVar6 = (undefined8 *)unaff_RDI[0xd];
  if (puVar6 == puVar4) {
    FUN_00d50b20();
LAB_00e44739:
    puVar4 = (undefined8 *)unaff_RDI[0xd];
    if (puVar4 != (undefined8 *)0x0) goto LAB_00e4474e;
    puVar4 = (undefined8 *)0x0;
  }
  else {
    unaff_RDI[0xd] = (longlong)puVar4;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
      goto LAB_00e44739;
    }
LAB_00e4474e:
    FUN_00d50b00();
  }
  FUN_00daa540();
  lVar1 = unaff_RDI[0xe];
  lVar7 = lVar1;
  if (lVar1 != local_38) {
    lVar7 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar7 = 0;
        goto LAB_00e44782;
      }
      FUN_00d50b00();
      lVar1 = unaff_RDI[0xe];
      unaff_RDI[0xe] = local_38;
    }
    else {
      local_30 = '\0';
LAB_00e44782:
      unaff_RDI[0xe] = lVar7;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar7 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025683c0;
  (*pcVar3)();
  FUN_00c92170();
  puVar6 = (undefined8 *)unaff_RDI[0xf];
  if (puVar6 == puVar4) {
    FUN_00d50b20();
LAB_00e44834:
    puVar4 = (undefined8 *)unaff_RDI[0xf];
    if (puVar4 != (undefined8 *)0x0) goto LAB_00e44849;
    puVar4 = (undefined8 *)0x0;
  }
  else {
    unaff_RDI[0xf] = (longlong)puVar4;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
      goto LAB_00e44834;
    }
LAB_00e44849:
    FUN_00d50b00();
  }
  FUN_00daa540();
  lVar1 = unaff_RDI[0x10];
  lVar7 = lVar1;
  if (lVar1 != local_38) {
    lVar7 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar7 = 0;
        goto LAB_00e44880;
      }
      FUN_00d50b00();
      lVar1 = unaff_RDI[0x10];
      unaff_RDI[0x10] = local_38;
    }
    else {
      local_30 = '\0';
LAB_00e44880:
      unaff_RDI[0x10] = lVar7;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar7 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_0258a670;
  pcVar3 = DAT_0258a688;
  (*DAT_0258a688)();
  puVar6 = (undefined8 *)unaff_RDI[0x11];
  if (puVar6 == puVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x11] = (longlong)puVar4;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e38130(0,1,0);
  plVar5 = (longlong *)FUN_00023900();
  (**(code **)(*plVar5 + 0x18))();
  plVar2 = (longlong *)unaff_RDI[0x12];
  if (plVar2 == plVar5) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x12] = (longlong)plVar5;
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39cc0(1,1);
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_0258a670;
  (*pcVar3)();
  puVar6 = (undefined8 *)unaff_RDI[0x13];
  if (puVar6 == puVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x13] = (longlong)puVar4;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e38130(0,1,0);
  plVar5 = (longlong *)FUN_00023900();
  (**(code **)(*plVar5 + 0x18))();
  plVar2 = (longlong *)unaff_RDI[0x14];
  if (plVar2 == plVar5) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x14] = (longlong)plVar5;
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39cc0(0,1);
  plVar5 = (longlong *)FUN_00023900();
  (**(code **)(*plVar5 + 0x18))();
  plVar2 = (longlong *)unaff_RDI[0x15];
  if (plVar2 == plVar5) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x15] = (longlong)plVar5;
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39cc0(0,1);
  plVar5 = (longlong *)FUN_00023900();
  (**(code **)(*plVar5 + 0x18))();
  plVar2 = (longlong *)unaff_RDI[0x16];
  if (plVar2 == plVar5) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x16] = (longlong)plVar5;
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39cc0(1,1);
  FUN_00e44f20();
  lVar1 = unaff_RDI[0x17];
  lVar7 = lVar1;
  if (lVar1 == local_38) goto LAB_00e44b77;
  lVar7 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar7 = 0;
      goto LAB_00e44b2c;
    }
    FUN_00d50b00();
    lVar1 = unaff_RDI[0x17];
    unaff_RDI[0x17] = local_38;
  }
  else {
    local_30 = '\0';
LAB_00e44b2c:
    unaff_RDI[0x17] = lVar7;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar7 = local_38;
  }
LAB_00e44b77:
  if ((local_30 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = (longlong *)FUN_00023900();
  (**(code **)(*plVar5 + 0x18))();
  plVar2 = (longlong *)unaff_RDI[0x18];
  if (plVar2 == plVar5) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x18] = (longlong)plVar5;
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39cc0(0,0);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_0258ed08;
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x11) = 0;
  (*DAT_0258ed20)();
  FUN_00e5e400();
  (**(code **)(*unaff_RDI + 0x600))();
  FUN_00d50b20();
  return;
}


