// Function: FUN_0043ed80
// Address: 0043ed80
// Size: 504 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x0043ef1c) */
/* WARNING: Removing unreachable block (ram,0x0043ef25) */
/* WARNING: Removing unreachable block (ram,0x0043ee9a) */
/* WARNING: Removing unreachable block (ram,0x0043eea3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043ed80(void)

{
  char cVar1;
  longlong lVar2;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  bool bVar3;
  longlong local_30;
  char local_28;
  
  cVar1 = FUN_0043e2f0();
  lVar2 = DAT_028085b0;
  if ((cVar1 == '\0') || (*(char *)(unaff_RSI + 0x139) == '\0')) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  if ((DAT_028085b0 == 0) || (DAT_028085b9 == '\0')) {
    FUN_00e8cb50();
    lVar2 = DAT_027058f8;
    if (DAT_028085b0 == 0) {
      if (DAT_027058f8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_30 != 0) {
        FUN_01d20ca0(_DAT_023b2d60);
        lVar2 = DAT_028085b0;
        if (DAT_028085b0 != local_30) {
          if (local_28 == '\0') {
            if (local_30 == 0) {
              lVar2 = 0;
            }
            else {
              FUN_00d50b00();
              lVar2 = local_30;
            }
          }
          else {
            local_28 = '\0';
            lVar2 = local_30;
          }
          bVar3 = DAT_028085b0 != 0;
          DAT_028085b0 = lVar2;
          if (bVar3) {
            FUN_00d50b20();
            lVar2 = local_30;
          }
        }
        if ((lVar2 != 0) && (DAT_028085b8 == '\0')) {
          DAT_028085b8 = '\x01';
          FUN_00e8cb90();
          lVar2 = local_30;
        }
        if ((local_28 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      DAT_028085b9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028085b9 = '\x01';
      FUN_00e8cb70();
    }
    lVar2 = DAT_028085b0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar2 == 0) {
      lVar2 = 0;
      goto LAB_0043ef57;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_0043ef57:
  *unaff_RDI = lVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


