// Function: FUN_004832f0
// Address: 004832f0
// Size: 1232 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_004832f0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined8 unaff_RBX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  double dVar7;
  undefined8 uVar8;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar3 = DAT_026f6f08;
  lVar2 = DAT_026e1810;
  lVar1 = *unaff_RSI;
  if (lVar1 == *(longlong *)(unaff_RDI + 0x200)) {
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_58 + 0x450))();
    lVar1 = DAT_026e1810;
    if (cVar4 == '\0') {
      uVar6 = 0;
    }
    else {
      if (DAT_026e1810 != 0) {
        FUN_00d50b00();
      }
      dVar7 = (double)FUN_00e7d6f0();
      uVar6 = (ulonglong)(dVar7 * DAT_023907c0);
      dVar7 = dVar7 * DAT_023907c0 - _DAT_023907c8;
      uVar8 = FUN_0071a120();
      if ((local_30 == '\0') && (local_38 != 0)) {
        uVar8 = FUN_00d50b00();
        if ((local_30 != '\0') && (local_38 != 0)) {
          uVar8 = FUN_00d50b20();
        }
      }
      bVar5 = (byte)(((longlong)dVar7 & (longlong)uVar6 >> 0x3f | uVar6) / 3);
      local_48 = lVar1;
      local_40 = '\0';
      FUN_000175c0(uVar8,&local_48);
      lVar2 = local_38;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
          if ((local_30 != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_30 = '\0';
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        local_30 = '\0';
        local_38 = lVar2;
        bVar5 = FUN_00c70bc0();
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      uVar6 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 != 0 & bVar5);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (lVar1 == *(longlong *)(unaff_RDI + 0x1b0)) {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else if (lVar1 == *(longlong *)(unaff_RDI + 0x288)) {
    if (DAT_026e1810 != 0) {
      FUN_00d50b00();
    }
    dVar7 = (double)FUN_00e7d6f0();
    uVar6 = (ulonglong)(dVar7 * DAT_023907c0);
    dVar7 = dVar7 * DAT_023907c0 - _DAT_023907c8;
    uVar8 = FUN_0071a120();
    if ((local_30 == '\0') && (local_38 != 0)) {
      uVar8 = FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != 0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    bVar5 = (byte)(((longlong)dVar7 & (longlong)uVar6 >> 0x3f | uVar6) / 3);
    local_48 = lVar2;
    local_40 = '\0';
    FUN_000175c0(uVar8,&local_48);
    lVar1 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_30 = '\0';
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      local_30 = '\0';
      local_38 = lVar1;
      bVar5 = FUN_00c70bc0();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar6 = CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != 0 & bVar5);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  else if (lVar1 == *(longlong *)(unaff_RDI + 0x1b8)) {
    if (DAT_026f6f08 != 0) {
      FUN_00d50b00();
    }
    dVar7 = (double)FUN_00e7d6f0();
    uVar6 = (ulonglong)(dVar7 * DAT_023907c0);
    dVar7 = dVar7 * DAT_023907c0 - _DAT_023907c8;
    uVar8 = FUN_0071a120();
    if ((local_30 == '\0') && (local_38 != 0)) {
      uVar8 = FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != 0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    bVar5 = (byte)(((longlong)dVar7 & (longlong)uVar6 >> 0x3f | uVar6) / 3);
    local_48 = lVar3;
    local_40 = '\0';
    FUN_000175c0(uVar8,&local_48);
    lVar1 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_30 = '\0';
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      local_30 = '\0';
      local_38 = lVar1;
      bVar5 = FUN_00c70bc0();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar6 = CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != 0 & bVar5);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6 & 0xffffffff;
}


