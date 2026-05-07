// Function: FUN_01a09a50
// Address: 01a09a50
// Size: 730 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a09a50(void)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_30;
  char local_28;
  
  FUN_00d50100();
  if ((DAT_028b2978 == 0) || (DAT_028b2981 == '\0')) {
    FUN_00e8cb50();
    lVar5 = DAT_027e1bc8;
    if (DAT_028b2978 == 0) {
      if (DAT_027e1bc8 != 0) {
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
      lVar4 = DAT_028b2978;
      if (DAT_028b2978 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_30;
          }
        }
        else {
          local_28 = '\0';
          lVar4 = local_30;
        }
        bVar2 = DAT_028b2978 != 0;
        DAT_028b2978 = lVar4;
        if (bVar2) {
          FUN_00d50b20();
          lVar4 = local_30;
        }
      }
      if ((lVar4 != 0) && (DAT_028b2980 == '\0')) {
        DAT_028b2980 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_30;
      }
      if ((local_28 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      DAT_028b2981 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b2981 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b2978 == 0) {
      lVar5 = 0;
      goto LAB_01a09c0f;
    }
  }
  lVar5 = DAT_028b2978;
  FUN_00d50b00();
LAB_01a09c0f:
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
  (**(code **)(*unaff_RDI + 0x4b0))();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  FUN_01a5dfe0();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}


