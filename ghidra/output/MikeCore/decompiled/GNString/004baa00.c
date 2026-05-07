// Function: FUN_004baa00
// Address: 004baa00
// Size: 1104 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x004bab54) */
/* WARNING: Removing unreachable block (ram,0x004bab5d) */
/* WARNING: Removing unreachable block (ram,0x004baaae) */
/* WARNING: Removing unreachable block (ram,0x004baaba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004baa00(void)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong unaff_RDI;
  undefined8 uVar6;
  longlong local_b0;
  char local_a8;
  longlong local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01e534b0();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar5 = *(longlong *)(unaff_RDI + 0x80);
  *(undefined8 **)(unaff_RDI + 0x80) = puVar4;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_01d6f8d0();
  FUN_00b7cae0();
  if (local_a8 == '\0') {
    if (local_b0 == 0) goto LAB_004bae4d;
    FUN_00d50b00();
  }
  else if (local_b0 == 0) goto LAB_004bae4d;
  if (0 < *(int *)(local_b0 + 0xc)) {
    lVar5 = 0;
    do {
      bVar2 = (byte)*(undefined8 *)(*(longlong *)(local_b0 + 0x10) + lVar5 * 8);
      iVar3 = FUN_00b7f240();
      lVar1 = DAT_026e1810;
      if ((iVar3 == 9) || (iVar3 == 6)) {
        if (DAT_026e1810 != 0) {
          FUN_00d50b00();
        }
        local_58 = lVar1;
        FUN_00e7d6f0();
        uVar6 = FUN_0071a120();
        if ((((local_38 == '\0') && (local_40 != 0)) && (uVar6 = FUN_00d50b00(), local_38 != '\0'))
           && (local_40 != 0)) {
          uVar6 = FUN_00d50b20();
        }
        local_50 = lVar1;
        local_48 = '\0';
        FUN_000175c0(uVar6,&local_50);
        lVar1 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          local_38 = '\0';
          local_40 = lVar1;
          bVar2 = FUN_00c70bc0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        bVar2 = lVar1 != 0 & bVar2 ^ 1;
        if (iVar3 != 9) goto LAB_004bacd8;
LAB_004bacde:
        if (local_58 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        bVar2 = 0;
        if (iVar3 == 9) goto LAB_004bacde;
LAB_004bacd8:
        if (iVar3 == 6) goto LAB_004bacde;
      }
      if (bVar2 == 0) {
        FUN_00df1990();
        lVar1 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d6f990();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d46530();
        lVar1 = local_50;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_40 = lVar1;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < *(int *)(local_b0 + 0xc));
  }
  FUN_00136a40();
  FUN_00d50b20();
LAB_004bae4d:
  FUN_004ba5c0();
  return;
}


