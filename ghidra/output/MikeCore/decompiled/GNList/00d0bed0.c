// Function: FUN_00d0bed0
// Address: 00d0bed0
// Size: 886 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d0c0ed) */
/* WARNING: Removing unreachable block (ram,0x00d0c0f6) */
/* WARNING: Removing unreachable block (ram,0x00d0c0ad) */
/* WARNING: Removing unreachable block (ram,0x00d0c0b6) */
/* WARNING: Removing unreachable block (ram,0x00d0c1f9) */
/* WARNING: Removing unreachable block (ram,0x00d0c202) */
/* WARNING: Removing unreachable block (ram,0x00d0bf45) */
/* WARNING: Removing unreachable block (ram,0x00d0bf52) */
/* WARNING: Removing unreachable block (ram,0x00d0c099) */
/* WARNING: Removing unreachable block (ram,0x00d0c0a2) */
/* WARNING: Removing unreachable block (ram,0x00d0bfa6) */
/* WARNING: Removing unreachable block (ram,0x00d0bfb3) */
/* WARNING: Removing unreachable block (ram,0x00d0c0d9) */
/* WARNING: Removing unreachable block (ram,0x00d0c0e2) */

void FUN_00d0bed0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar3;
  longlong *local_88;
  char local_80;
  longlong local_40;
  char local_38;
  
  if (*param_2 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  lVar3 = local_40;
  switch((int)unaff_RSI[0xc]) {
  case 0:
    FUN_00ca5c10();
    if (local_40 == 0) {
LAB_00d0c061:
      bVar1 = false;
      lVar3 = 0;
    }
    else {
      bVar1 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    break;
  case 1:
    FUN_00ca91d0();
    if (local_40 == 0) goto LAB_00d0c061;
    bVar1 = true;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    break;
  case 2:
    plVar2 = (longlong *)FUN_00e8fc40();
    FUN_00026420();
    (**(code **)(*plVar2 + 0x18))();
    (**(code **)(*plVar2 + 0x5f0))();
    if (local_40 == 0) {
      lVar3 = 0;
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    FUN_00d50b20();
    break;
  case 3:
    FUN_00dc0c90();
    if (local_40 == 0) {
      lVar3 = 0;
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    break;
  default:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar3 = 0;
    goto LAB_00d0c220;
  }
  if (lVar3 != 0) {
    (**(code **)(*unaff_RSI + 0x608))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      (**(code **)(*unaff_RSI + 0x608))();
      (**(code **)(*local_88 + 0x368))();
      if (local_40 == lVar3) {
        if (!bVar1) {
          if (local_38 != '\0') goto LAB_00d0c1f3;
          FUN_00d50b00();
        }
LAB_00d0c1d1:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        lVar3 = local_40;
        if (bVar1) {
          FUN_00d50b20();
          goto LAB_00d0c1d1;
        }
      }
      else {
        lVar3 = local_40;
        if (bVar1) {
          FUN_00d50b20();
        }
      }
LAB_00d0c1f3:
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto LAB_00d0c220;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (!bVar1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_00d50b00();
    }
  }
LAB_00d0c220:
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


