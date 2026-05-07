// Function: FUN_00bde2c0
// Address: 00bde2c0
// Size: 1250 bytes
// Class: GNString
// String references:
//   ".NFF"


/* WARNING: Removing unreachable block (ram,0x00bde300) */
/* WARNING: Removing unreachable block (ram,0x00bde30c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00bde2c0(void)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  bool bVar5;
  bool bVar6;
  int local_54 [2];
  undefined1 local_4c;
  longlong local_48;
  char local_40;
  int local_34;
  
  FUN_00b9d1d0();
  uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
  local_4c = 0;
  local_54[1] = 0;
  local_54[0] = 4;
  (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x380))(local_54,local_54 + 1);
  bVar5 = local_48 != 0;
  bVar6 = local_54[0] != 4;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02764880;
  if (bVar5 || bVar6) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  iVar3 = FUN_00e7de00();
  lVar2 = DAT_02764880;
  if (iVar3 != 0) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd540(&local_34);
  bVar5 = local_48 != 0;
  bVar6 = local_34 != 4;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02765700;
  if (bVar5 || bVar6) {
    if (DAT_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  piVar1 = (int *)(unaff_RDI + 0x34);
  FUN_00ccd540(&local_34,piVar1);
  bVar5 = local_48 != 0;
  bVar6 = local_34 != 4;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02765700;
  if (bVar5 || bVar6) {
    if (DAT_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd540(&local_34,(int *)(unaff_RDI + 0x38));
  bVar5 = local_48 != 0;
  bVar6 = local_34 != 4;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02765700;
  if (bVar5 || bVar6) {
    if (DAT_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd540(&local_34,unaff_RDI + 0x3c);
  bVar5 = local_48 != 0;
  bVar6 = local_34 != 4;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02765700;
  if (bVar5 || bVar6) {
    if (DAT_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd540(&local_34,unaff_RDI + 0x40);
  bVar5 = local_48 != 0;
  bVar6 = local_34 != 4;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02765700;
  if (bVar5 || bVar6) {
    if (DAT_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd540(&local_34,unaff_RDI + 0x44);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02765700;
  if (local_48 != 0 || local_34 != 4) {
    if (DAT_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_02764880;
  if (*(int *)(unaff_RDI + 0x38) != 5) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (uVar4 < (ulonglong)((longlong)*piVar1 + (longlong)*(int *)(unaff_RDI + 0x30))) {
    *piVar1 = (int)uVar4 - *(int *)(unaff_RDI + 0x30);
  }
  return;
}


