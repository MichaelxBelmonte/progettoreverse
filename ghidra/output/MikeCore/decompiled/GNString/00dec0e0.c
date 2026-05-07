// Function: FUN_00dec0e0
// Address: 00dec0e0
// Size: 1202 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00dec3e4) */
/* WARNING: Removing unreachable block (ram,0x00dec2f7) */
/* WARNING: Removing unreachable block (ram,0x00dec2a0) */
/* WARNING: Removing unreachable block (ram,0x00dec2a9) */
/* WARNING: Removing unreachable block (ram,0x00dec38d) */
/* WARNING: Removing unreachable block (ram,0x00dec396) */
/* WARNING: Removing unreachable block (ram,0x00dec47a) */
/* WARNING: Removing unreachable block (ram,0x00dec483) */

void FUN_00dec0e0(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *unaff_RDI;
  bool bVar7;
  undefined4 uVar8;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  puVar6 = DAT_028a8750;
  if ((DAT_028a8750 == (undefined8 *)0x0) || (DAT_028a8759 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a8750 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_025818d0;
      *(undefined1 *)(puVar6 + 3) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x2c) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x3c) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x44) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x4c) = 0;
      FUN_00d500e0();
      if (DAT_028a8750 == puVar6) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar7 = DAT_028a8750 != (undefined8 *)0x0;
        DAT_028a8750 = puVar6;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a8758 == '\0') {
        DAT_028a8758 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00dec980();
      FUN_00003040();
      uVar4 = DAT_025908a0;
      uVar8 = FUN_00d8cb40(&DAT_025908a0,DAT_025908a0);
      lVar3 = DAT_02787830;
      if ((local_40 == '\0') && (local_48 != 0)) {
        uVar8 = FUN_00d50b00();
        lVar3 = DAT_02787830;
      }
      DAT_02787830 = lVar3;
      if (lVar3 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_30 = '\0';
      local_38 = lVar3;
      FUN_00ca0840(uVar8,&local_38);
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00dec980();
      uVar8 = FUN_00003050();
      uVar8 = FUN_00d8cb40(uVar8,uVar4);
      if (local_48 != 0) {
        uVar8 = FUN_00d50b00();
      }
      lVar3 = DAT_027d2068;
      if (DAT_027d2068 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_30 = '\0';
      local_38 = lVar3;
      FUN_00ca0840(uVar8,&local_38);
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00dec980();
      uVar8 = FUN_00003060();
      uVar8 = FUN_00d8cb40(uVar8,uVar4);
      if (local_48 != 0) {
        uVar8 = FUN_00d50b00();
      }
      lVar3 = DAT_02787840;
      if (DAT_02787840 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_30 = '\0';
      local_38 = lVar3;
      FUN_00ca0840(uVar8,&local_38);
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      uVar8 = FUN_00dec980();
      lVar3 = DAT_02788fa8;
      if (DAT_02788fa8 != 0) {
        uVar8 = FUN_00d50b00();
      }
      lVar5 = DAT_02788fb0;
      if (DAT_02788fb0 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_38 = lVar5;
      local_30 = '\0';
      FUN_00ca0840(uVar8,&local_38);
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      DAT_028a8759 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a8759 = '\x01';
      FUN_00e8cb70();
    }
    puVar6 = DAT_028a8750;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
      goto LAB_00dec574;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00dec574:
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


