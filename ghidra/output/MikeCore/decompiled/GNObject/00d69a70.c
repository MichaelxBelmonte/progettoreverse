// Function: FUN_00d69a70
// Address: 00d69a70
// Size: 795 bytes
// Class: GNObject


/* WARNING: Removing unreachable block (ram,0x00d69c67) */
/* WARNING: Removing unreachable block (ram,0x00d69c72) */
/* WARNING: Removing unreachable block (ram,0x00d69cde) */
/* WARNING: Removing unreachable block (ram,0x00d69ce9) */
/* WARNING: Removing unreachable block (ram,0x00d69be7) */
/* WARNING: Removing unreachable block (ram,0x00d69bf0) */
/* WARNING: Removing unreachable block (ram,0x00d69aea) */
/* WARNING: Removing unreachable block (ram,0x00d69af6) */
/* WARNING: Removing unreachable block (ram,0x00d69c88) */
/* WARNING: Removing unreachable block (ram,0x00d69ce0) */
/* WARNING: Removing unreachable block (ram,0x00d69c91) */

longlong * FUN_00d69a70(void)

{
  longlong *plVar1;
  bool bVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar3;
  longlong lVar4;
  longlong local_98;
  char local_90;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  if (*(int *)(unaff_RSI[3] + 0xc) != 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  (**(code **)(*unaff_RSI + 0x3d8))();
  if (local_90 == '\0') {
    if (local_98 == 0) goto LAB_00d69ceb;
    FUN_00d50b00();
LAB_00d69afb:
    if (*(int *)(local_98 + 0xc) < 1) {
      bVar2 = false;
      lVar3 = 0;
    }
    else {
      lVar4 = 0;
      lVar3 = 0;
      bVar2 = false;
      do {
        plVar1 = *(longlong **)(*(longlong *)(local_98 + 0x10) + lVar4 * 8);
        if (lVar3 == 0) {
          (**(code **)(*plVar1 + 0x3c8))();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_00c6f510();
          if (local_58 == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = local_58;
            if (local_50 == '\0') {
              FUN_00d50b00();
              bVar2 = true;
            }
            else {
              local_50 = '\0';
              bVar2 = true;
            }
          }
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          (**(code **)(*plVar1 + 0x3c8))();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_58 = local_48;
          local_50 = '\0';
          FUN_00d7ad40();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(local_98 + 0xc));
    }
    FUN_00c6f7c0();
    FUN_00d50b20();
  }
  else {
    if (local_98 != 0) goto LAB_00d69afb;
LAB_00d69ceb:
    lVar3 = 0;
    bVar2 = false;
  }
  lVar4 = unaff_RSI[4];
  if (lVar4 != lVar3) {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    unaff_RSI[4] = lVar3;
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar4 = unaff_RSI[4];
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto joined_r0x00d69d69;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar4 = lVar3;
joined_r0x00d69d69:
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar2) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


