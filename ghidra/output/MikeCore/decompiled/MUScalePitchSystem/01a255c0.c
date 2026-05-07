// Function: FUN_01a255c0
// Address: 01a255c0
// Size: 681 bytes
// Class: MUScalePitchSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a255c0(void)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_28;
  char local_20;
  
  FUN_00d50100();
  if ((DAT_028b2a50 == 0) || (DAT_028b2a59 == '\0')) {
    FUN_00e8cb50();
    lVar5 = DAT_027e1e78;
    if (DAT_028b2a50 == 0) {
      if (DAT_027e1e78 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_01d20ca0(_DAT_0241bda0);
      lVar4 = DAT_028b2a50;
      if (DAT_028b2a50 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar4 = local_28;
        }
        bVar2 = DAT_028b2a50 != 0;
        DAT_028b2a50 = lVar4;
        if (bVar2) {
          FUN_00d50b20();
          lVar4 = local_28;
        }
      }
      if ((lVar4 != 0) && (DAT_028b2a58 == '\0')) {
        DAT_028b2a58 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_28;
      }
      if ((local_20 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      DAT_028b2a59 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b2a59 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b2a50 == 0) {
      lVar5 = 0;
      goto LAB_01a2577d;
    }
  }
  lVar5 = DAT_028b2a50;
  FUN_00d50b00();
LAB_01a2577d:
  (**(code **)(*unaff_RDI + 0x390))();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar3 = &DAT_02633dd0;
  puVar3[2] = &DAT_02634290;
  puVar3[7] = 0;
  (*DAT_02633de8)();
  puVar1 = (undefined8 *)unaff_RDI[7];
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[7] = (longlong)puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01a259e0();
  if ((local_20 == '\0') && (local_28 != 0)) {
    FUN_00d50b00();
  }
  FUN_01a5dfe0();
  if (local_28 != 0) {
    FUN_00d50b20();
  }
  return;
}


