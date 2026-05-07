// Function: FUN_01c71b80
// Address: 01c71b80
// Size: 1086 bytes
// Class: MUBeatSelection


/* WARNING: Removing unreachable block (ram,0x01c71ef6) */
/* WARNING: Removing unreachable block (ram,0x01c71e34) */
/* WARNING: Removing unreachable block (ram,0x01c71d70) */
/* WARNING: Removing unreachable block (ram,0x01c71d42) */
/* WARNING: Removing unreachable block (ram,0x01c71d4b) */
/* WARNING: Removing unreachable block (ram,0x01c71e06) */
/* WARNING: Removing unreachable block (ram,0x01c71e0f) */
/* WARNING: Removing unreachable block (ram,0x01c71eca) */
/* WARNING: Removing unreachable block (ram,0x01c71ed3) */
/* WARNING: Removing unreachable block (ram,0x01c71f8c) */
/* WARNING: Removing unreachable block (ram,0x01c71f95) */

void FUN_01c71b80(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
  (**(code **)(*unaff_RSI + 0x4d8))();
  (**(code **)(*unaff_RSI + 0x7b8))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01c71bed;
    }
  }
  else if (local_40 != 0) {
LAB_01c71bed:
    FUN_01d97870();
    if (local_40 == 0) {
      bVar3 = false;
    }
    else {
      FUN_01d97850();
      bVar3 = local_50 != 0;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3) {
      plVar2 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar2 + 0x18))();
      uVar4 = FUN_00d46dc0(CONCAT44(uVar5,uVar5));
      lVar1 = DAT_027ebed8;
      if ((local_48 == '\0') && (local_50 != 0)) {
        uVar4 = FUN_00d50b00();
        lVar1 = DAT_027ebed8;
      }
      DAT_027ebed8 = lVar1;
      if (lVar1 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      uVar4 = FUN_00d470c0(unaff_RSI[0x37]);
      if (local_50 != 0) {
        uVar4 = FUN_00d50b00();
      }
      lVar1 = DAT_027ebee0;
      if (DAT_027ebee0 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      uVar4 = FUN_00d470c0(unaff_RSI[0x38]);
      if (local_50 != 0) {
        uVar4 = FUN_00d50b00();
      }
      lVar1 = DAT_027ebee8;
      if (DAT_027ebee8 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      uVar4 = FUN_00d46530();
      if (local_50 != 0) {
        uVar4 = FUN_00d50b00();
      }
      lVar1 = DAT_027ebef0;
      if (DAT_027ebef0 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      plVar2 = (longlong *)0x0;
    }
    *unaff_RDI = plVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    return;
  }
  *unaff_RDI = 0;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


