// Function: FUN_00e30120
// Address: 00e30120
// Size: 834 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00e303e6) */
/* WARNING: Removing unreachable block (ram,0x00e303ef) */
/* WARNING: Removing unreachable block (ram,0x00e303b8) */
/* WARNING: Removing unreachable block (ram,0x00e303c1) */
/* WARNING: Removing unreachable block (ram,0x00e302ed) */
/* WARNING: Removing unreachable block (ram,0x00e302f6) */

void FUN_00e30120(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *unaff_RDI;
  longlong lVar4;
  int iVar5;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  lVar1 = DAT_028a8b98;
  if (*unaff_RDI == 0) {
    if (DAT_028a8b98 != 0) {
      FUN_00d50b00();
    }
    FUN_00e2f480();
    if (DAT_028a8b98 != local_68) {
      lVar4 = DAT_028a8b98;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
          lVar4 = DAT_028a8b98;
        }
      }
      else {
        local_60 = '\0';
      }
      DAT_028a8b98 = local_68;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_68 != 0) && (DAT_028a8ba0 == '\0')) {
      DAT_028a8ba0 = '\x01';
      FUN_00e8cb90();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 == 0) {
      return;
    }
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar5 = 0;
      do {
        cVar2 = FUN_00d23d70();
        lVar4 = DAT_027862d0;
        if (cVar2 == '\0') {
          if (DAT_027862d0 != 0) {
            FUN_00d50b00();
          }
          FUN_00e2f880();
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_00e30ff0();
    FUN_00d50b20();
    return;
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02589080;
  puVar3[2] = 0;
  FUN_00d500e0();
  FUN_00db9a70();
  FUN_00dbbbf0();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_00e301eb;
    }
    if (puVar3[2] == 0) goto LAB_00e3038a;
    puVar3[2] = 0;
LAB_00e30375:
    FUN_00d50b20();
  }
  else {
    local_60 = '\0';
LAB_00e301eb:
    lVar1 = puVar3[2];
    if (lVar1 != local_68) {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      puVar3[2] = local_68;
      if (lVar1 != 0) goto LAB_00e30375;
    }
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
LAB_00e3038a:
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  cVar2 = FUN_00d23f50();
  lVar1 = DAT_027862d0;
  if (cVar2 != '\0') {
    if (DAT_027862d0 != 0) {
      FUN_00d50b00();
    }
    FUN_00e2f880();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}


