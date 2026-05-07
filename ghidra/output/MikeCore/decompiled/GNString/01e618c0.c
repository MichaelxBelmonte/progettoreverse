// Function: FUN_01e618c0
// Address: 01e618c0
// Size: 738 bytes
// Class: GNString


void FUN_01e618c0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  longlong local_28;
  char local_20;
  
  lVar4 = DAT_028ba060;
  if ((DAT_028ba060 == 0) || (DAT_028ba069 == '\0')) {
    FUN_00e8cb50();
    lVar4 = DAT_027f3fb0;
    if (DAT_028ba060 == 0) {
      if (DAT_027f3fb0 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_027fecc0;
      if (DAT_027fecc0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d43f00(DAT_02390d28,0);
      lVar3 = DAT_028ba060;
      if (DAT_028ba060 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_00d50b00();
            lVar3 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar3 = local_28;
        }
        bVar1 = DAT_028ba060 != 0;
        DAT_028ba060 = lVar3;
        if (bVar1) {
          FUN_00d50b20();
          lVar3 = local_28;
        }
      }
      if ((lVar3 != 0) && (DAT_028ba068 == '\0')) {
        DAT_028ba068 = '\x01';
        FUN_00e8cb90();
        lVar3 = local_28;
      }
      if ((local_20 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_027f3fb8;
      if (DAT_028ba060 == 0) {
        if (DAT_027f3fb8 != 0) {
          FUN_00d50b00();
        }
        lVar2 = DAT_027fecc0;
        if (DAT_027fecc0 != 0) {
          FUN_00d50b00();
        }
        FUN_01d43f00(DAT_023b160c,0);
        lVar3 = DAT_028ba060;
        if (DAT_028ba060 != local_28) {
          if (local_20 == '\0') {
            if (local_28 == 0) {
              lVar3 = 0;
            }
            else {
              FUN_00d50b00();
              lVar3 = local_28;
            }
          }
          else {
            local_20 = '\0';
            lVar3 = local_28;
          }
          bVar1 = DAT_028ba060 != 0;
          DAT_028ba060 = lVar3;
          if (bVar1) {
            FUN_00d50b20();
            lVar3 = local_28;
          }
        }
        if ((lVar3 != 0) && (DAT_028ba068 == '\0')) {
          DAT_028ba068 = '\x01';
          FUN_00e8cb90();
          lVar3 = local_28;
        }
        if ((local_20 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        *(undefined4 *)(DAT_028ba060 + 0x28) = 0;
      }
      DAT_028ba069 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ba069 = '\x01';
      FUN_00e8cb70();
    }
    lVar4 = DAT_028ba060;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar4 == 0) {
      lVar4 = 0;
      goto LAB_01e61a5a;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01e61a5a:
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


