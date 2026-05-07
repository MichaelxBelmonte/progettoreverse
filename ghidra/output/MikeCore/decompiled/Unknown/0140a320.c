// Function: FUN_0140a320
// Address: 0140a320
// Size: 742 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0140a378) */
/* WARNING: Removing unreachable block (ram,0x0140a381) */
/* WARNING: Removing unreachable block (ram,0x0140a4fa) */
/* WARNING: Removing unreachable block (ram,0x0140a503) */
/* WARNING: Removing unreachable block (ram,0x0140a3d0) */
/* WARNING: Removing unreachable block (ram,0x0140a3f0) */
/* WARNING: Removing unreachable block (ram,0x0140a3d2) */
/* WARNING: Removing unreachable block (ram,0x0140a3f2) */

longlong * FUN_0140a320(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar4;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar2 = local_58;
  FUN_01780120();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_0140a386;
    }
  }
  else if (local_58 != 0) {
LAB_0140a386:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar3 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_40) break;
      lVar1 = *(longlong *)(lVar2 + 0x10);
      local_58 = *(longlong *)(lVar1 + 8 + lVar3 * 8);
      local_88 = *unaff_RSI;
      local_80 = '\0';
      FUN_01408160(lVar1,&local_88);
      if ((local_90 == '\0') && (local_98 != 0)) {
        FUN_00d50b00();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (local_98 != 0) {
        *unaff_RDI = local_98;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        FUN_00018280();
        FUN_00d50b20();
        return unaff_RDI;
      }
    }
    FUN_00018280();
    FUN_00d50b20();
  }
  FUN_01780120();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_0140a5ce;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_0140a5ce;
  iVar4 = 0;
  while (iVar4 < *(int *)(local_58 + 0xc)) {
    local_78 = *unaff_RSI;
    local_70 = '\0';
    FUN_01408cd0();
    if ((local_90 == '\0') && (local_98 != 0)) {
      FUN_00d50b00();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    iVar4 = iVar4 + 1;
    if (local_98 != 0) {
      *unaff_RDI = local_98;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00018280();
      FUN_00d50b20();
      return unaff_RDI;
    }
  }
  FUN_00018280();
  FUN_00d50b20();
LAB_0140a5ce:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


