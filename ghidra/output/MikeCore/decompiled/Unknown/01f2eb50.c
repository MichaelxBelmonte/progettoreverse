// Function: FUN_01f2eb50
// Address: 01f2eb50
// Size: 1367 bytes
// Class: Unknown
// String references:
//   "%s"


/* WARNING: Removing unreachable block (ram,0x01f2ede7) */
/* WARNING: Removing unreachable block (ram,0x01f2edf3) */

void FUN_01f2eb50(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *unaff_RDI;
  bool bVar6;
  longlong local_a8;
  char local_a0;
  undefined8 *local_48;
  uint local_40;
  undefined8 local_38;
  longlong local_30;
  char local_28;
  
  plVar5 = DAT_028ba9f0;
  if ((DAT_028ba9f0 == (longlong *)0x0) || (DAT_028ba9f9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ba9f0 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar5 + 0x18))();
      if (DAT_028ba9f0 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = DAT_028ba9f0 != (longlong *)0x0;
        DAT_028ba9f0 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (DAT_028ba9f8 == '\0') {
        DAT_028ba9f8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00003040();
      FUN_00d91a70();
      lVar4 = local_30;
      puVar3 = DAT_02800018;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
          puVar3 = DAT_02800018;
        }
      }
      else {
        local_28 = '\0';
      }
      DAT_02800018 = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_40 = local_40 & 0xffffff00;
      local_48 = puVar3;
      FUN_00ca0840();
      if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      local_38 = FUN_00003050();
      local_40 = 1;
      local_48 = &DAT_026ba3d0;
      FUN_00d8cb40(&DAT_026ba3d0,&local_48);
      lVar4 = DAT_0270b070;
      if ((local_a0 == '\0') && (local_a8 != 0)) {
        FUN_00d50b00();
        lVar4 = DAT_0270b070;
      }
      DAT_0270b070 = lVar4;
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      local_28 = '\0';
      local_30 = lVar4;
      FUN_00ca0840();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (local_a8 != 0) {
        FUN_00d50b20();
      }
      FUN_00003060();
      FUN_00d91a70();
      lVar4 = local_30;
      puVar3 = DAT_0270b078;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
          puVar3 = DAT_0270b078;
        }
      }
      else {
        local_28 = '\0';
      }
      DAT_0270b078 = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_40 = local_40 & 0xffffff00;
      local_48 = puVar3;
      FUN_00ca0840();
      if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00003010();
      FUN_00d91a70();
      lVar4 = local_30;
      puVar3 = DAT_0270b080;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
          puVar3 = DAT_0270b080;
        }
      }
      else {
        local_28 = '\0';
      }
      DAT_0270b080 = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_40 = local_40 & 0xffffff00;
      local_48 = puVar3;
      FUN_00ca0840();
      if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00003090();
      FUN_00d91a70();
      lVar4 = local_30;
      puVar3 = DAT_02800020;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
          puVar3 = DAT_02800020;
        }
      }
      else {
        local_28 = '\0';
      }
      DAT_02800020 = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_40 = local_40 & 0xffffff00;
      local_48 = puVar3;
      FUN_00ca0840();
      if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      DAT_028ba9f9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ba9f9 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = DAT_028ba9f0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      goto LAB_01f2f08a;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01f2f08a:
  *unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


