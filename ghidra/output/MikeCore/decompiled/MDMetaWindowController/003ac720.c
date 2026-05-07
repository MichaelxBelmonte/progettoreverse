// Function: FUN_003ac720
// Address: 003ac720
// Size: 1027 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x003ac9b6) */
/* WARNING: Removing unreachable block (ram,0x003aca26) */
/* WARNING: Removing unreachable block (ram,0x003aca2b) */
/* WARNING: Removing unreachable block (ram,0x003aca33) */
/* WARNING: Removing unreachable block (ram,0x003aca45) */
/* WARNING: Removing unreachable block (ram,0x003aca38) */
/* WARNING: Removing unreachable block (ram,0x003ac9bc) */
/* WARNING: Removing unreachable block (ram,0x003ac9c1) */
/* WARNING: Removing unreachable block (ram,0x003ac9cc) */
/* WARNING: Removing unreachable block (ram,0x003acab4) */
/* WARNING: Removing unreachable block (ram,0x003acabd) */
/* WARNING: Removing unreachable block (ram,0x003aca89) */
/* WARNING: Removing unreachable block (ram,0x003acac8) */
/* WARNING: Removing unreachable block (ram,0x003ac970) */
/* WARNING: Removing unreachable block (ram,0x003ac97c) */
/* WARNING: Removing unreachable block (ram,0x003ac984) */
/* WARNING: Removing unreachable block (ram,0x003aca4e) */
/* WARNING: Removing unreachable block (ram,0x003ac94b) */
/* WARNING: Removing unreachable block (ram,0x003aca01) */
/* WARNING: Removing unreachable block (ram,0x003ac9ef) */
/* WARNING: Removing unreachable block (ram,0x003aca0e) */
/* WARNING: Removing unreachable block (ram,0x003aca57) */
/* WARNING: Removing unreachable block (ram,0x003aca5c) */
/* WARNING: Removing unreachable block (ram,0x003aca62) */
/* WARNING: Removing unreachable block (ram,0x003aca6b) */
/* WARNING: Removing unreachable block (ram,0x003aca70) */
/* WARNING: Removing unreachable block (ram,0x003aca7f) */
/* WARNING: Removing unreachable block (ram,0x003aca84) */
/* WARNING: Removing unreachable block (ram,0x003acad1) */
/* WARNING: Removing unreachable block (ram,0x003acad6) */

void FUN_003ac720(void)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong unaff_RDI;
  longlong *local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  FUN_01e53f10();
  FUN_003a7490();
  lVar4 = *(longlong *)(unaff_RDI + 0x70);
  lVar2 = lVar4;
  if (lVar4 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_003ac758;
      }
      FUN_00d50b00();
      lVar4 = *(longlong *)(unaff_RDI + 0x70);
      *(longlong *)(unaff_RDI + 0x70) = local_30;
    }
    else {
      local_28 = '\0';
LAB_003ac758:
      *(longlong *)(unaff_RDI + 0x70) = lVar2;
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  FUN_003a7840();
  lVar4 = *(longlong *)(unaff_RDI + 0x78);
  lVar2 = lVar4;
  if (lVar4 == local_30) goto LAB_003ac80f;
  lVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar2 = 0;
      goto LAB_003ac7cd;
    }
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x78);
    *(longlong *)(unaff_RDI + 0x78) = local_30;
  }
  else {
    local_28 = '\0';
LAB_003ac7cd:
    *(longlong *)(unaff_RDI + 0x78) = lVar2;
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
    lVar2 = local_30;
  }
LAB_003ac80f:
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  iVar3 = 0;
  if ((*(longlong *)(unaff_RDI + 0x78) != 0) &&
     (iVar3 = 0, *(longlong *)(*(longlong *)(unaff_RDI + 0x78) + 0x308) != 0)) {
    iVar3 = (uint)*(byte *)(unaff_RDI + 0xd0) * 2;
  }
  iVar1 = FUN_00d48ad0();
  if (iVar1 != iVar3) {
    FUN_00d48ac0();
    *(undefined8 *)(unaff_RDI + 200) = 0;
  }
  lVar4 = 0;
  if (*(longlong *)(unaff_RDI + 0x78) != 0) {
    if (*(longlong *)(*(longlong *)(unaff_RDI + 0x78) + 0x308) != 0) {
      FUN_01e53c20();
      (**(code **)(*local_40 + 0x6f0))();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_30 == 0) {
        FUN_01f27fe0();
        FUN_0027c9f0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar4 = DAT_02708ed0;
        if (DAT_02708ed0 != 0) {
          FUN_00d50b00();
        }
        FUN_01d5e6e0();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
    }
    lVar4 = *(longlong *)(unaff_RDI + 0x78);
  }
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_003acd80();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_003a5800();
  return;
}


