// Function: FUN_00543a00
// Address: 00543a00
// Size: 909 bytes
// Class: MURenderSliceTimeContext


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00543a00(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_38;
  char local_30;
  longlong local_28;
  char local_20;
  
  if (*(char *)(unaff_RSI + 0x188) == '\0') {
    if ((DAT_0280a1f8 == 0) || (lVar3 = DAT_0280a1f8, DAT_0280a201 == '\0')) {
      FUN_00e8cb50();
      lVar3 = DAT_0270ca80;
      if (DAT_0280a1f8 == 0) {
        if (DAT_0270ca80 != 0) {
          FUN_00d50b00();
        }
        FUN_01d51a40();
        if (local_30 == '\0') {
          if (local_38 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30 = '\0';
        }
        FUN_01d20ca0(_DAT_023b1900);
        lVar2 = DAT_0280a1f8;
        if (DAT_0280a1f8 != local_28) {
          if (local_20 == '\0') {
            if (local_28 == 0) {
              lVar2 = 0;
            }
            else {
              FUN_00d50b00();
              lVar2 = local_28;
            }
          }
          else {
            local_20 = '\0';
            lVar2 = local_28;
          }
          bVar1 = DAT_0280a1f8 != 0;
          DAT_0280a1f8 = lVar2;
          if (bVar1) {
            FUN_00d50b20();
            lVar2 = local_28;
          }
        }
        if ((lVar2 != 0) && (DAT_0280a200 == '\0')) {
          DAT_0280a200 = '\x01';
          FUN_00e8cb90();
          lVar2 = local_28;
        }
        if ((local_20 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        DAT_0280a201 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_0280a201 = '\x01';
        FUN_00e8cb70();
      }
      lVar3 = DAT_0280a1f8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto joined_r0x00543d72;
    }
LAB_00543a61:
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    if ((DAT_0280a1e8 != 0) && (lVar3 = DAT_0280a1e8, DAT_0280a1f1 != '\0')) goto LAB_00543a61;
    FUN_00e8cb50();
    lVar3 = DAT_027ebc10;
    if (DAT_0280a1e8 == 0) {
      if (DAT_027ebc10 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d20ca0(_DAT_023b1900);
      lVar2 = DAT_0280a1e8;
      if (DAT_0280a1e8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar2 = local_28;
        }
        bVar1 = DAT_0280a1e8 != 0;
        DAT_0280a1e8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_28;
        }
      }
      if ((lVar2 != 0) && (DAT_0280a1f0 == '\0')) {
        DAT_0280a1f0 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_28;
      }
      if ((local_20 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_0280a1f1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_0280a1f1 = '\x01';
      FUN_00e8cb70();
    }
    lVar3 = DAT_0280a1e8;
    *(undefined1 *)(unaff_RDI + 1) = 0;
joined_r0x00543d72:
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_00543c44;
    }
  }
  FUN_00d50b00();
LAB_00543c44:
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


