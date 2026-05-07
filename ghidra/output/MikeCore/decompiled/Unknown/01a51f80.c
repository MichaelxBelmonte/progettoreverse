// Function: FUN_01a51f80
// Address: 01a51f80
// Size: 719 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a51f80(void)

{
  undefined8 *puVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  
  FUN_00d50100();
  if ((DAT_028b2bd8 == 0) || (DAT_028b2be1 == '\0')) {
    FUN_00e8cb50();
    lVar6 = DAT_027e2118;
    if (DAT_028b2bd8 == 0) {
      if (DAT_027e2118 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_01d20ca0(_DAT_023b1900);
      lVar5 = DAT_028b2bd8;
      if (DAT_028b2bd8 != local_60) {
        if (local_58 == '\0') {
          if (local_60 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_60;
          }
        }
        else {
          local_58 = '\0';
          lVar5 = local_60;
        }
        bVar2 = DAT_028b2bd8 != 0;
        DAT_028b2bd8 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_60;
        }
      }
      if ((lVar5 != 0) && (DAT_028b2be0 == '\0')) {
        DAT_028b2be0 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_60;
      }
      if ((local_58 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      DAT_028b2be1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b2be1 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b2bd8 == 0) {
      lVar6 = 0;
      goto LAB_01a52143;
    }
  }
  lVar6 = DAT_028b2bd8;
  FUN_00d50b00();
LAB_01a52143:
  (**(code **)(*unaff_RDI + 0x390))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar4 = &DAT_026324d8;
  puVar4[2] = &DAT_02632998;
  *(undefined4 *)((longlong)puVar4 + 0x34) = 0;
  pcVar3 = DAT_026324f0;
  (*DAT_026324f0)();
  puVar1 = (undefined8 *)unaff_RDI[7];
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[7] = (longlong)puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01a4f310();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar4 = &DAT_026324d8;
  puVar4[2] = &DAT_02632998;
  *(undefined4 *)((longlong)puVar4 + 0x34) = 0;
  (*pcVar3)();
  puVar1 = (undefined8 *)unaff_RDI[8];
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[8] = (longlong)puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01a4f310();
  return;
}


