// Function: FUN_00d14ff0
// Address: 00d14ff0
// Size: 1420 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d153a0) */
/* WARNING: Removing unreachable block (ram,0x00d153b0) */
/* WARNING: Removing unreachable block (ram,0x00d15510) */
/* WARNING: Removing unreachable block (ram,0x00d15519) */
/* WARNING: Removing unreachable block (ram,0x00d153e0) */
/* WARNING: Removing unreachable block (ram,0x00d153ed) */
/* WARNING: Removing unreachable block (ram,0x00d1544a) */
/* WARNING: Removing unreachable block (ram,0x00d15457) */
/* WARNING: Removing unreachable block (ram,0x00d15542) */
/* WARNING: Removing unreachable block (ram,0x00d1554b) */
/* WARNING: Removing unreachable block (ram,0x00d154db) */
/* WARNING: Removing unreachable block (ram,0x00d154e7) */
/* WARNING: Removing unreachable block (ram,0x00d15307) */
/* WARNING: Removing unreachable block (ram,0x00d15317) */
/* WARNING: Removing unreachable block (ram,0x00d15493) */
/* WARNING: Removing unreachable block (ram,0x00d154a3) */
/* WARNING: Removing unreachable block (ram,0x00d1534f) */
/* WARNING: Removing unreachable block (ram,0x00d1535c) */

undefined4 FUN_00d14ff0(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar5;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  iVar1 = *(int *)(unaff_RDI + 0x28);
  if ((iVar1 == 9) || (iVar1 == 7)) {
    if (*unaff_RSI == 0) {
      FUN_00d8ede0();
      lVar5 = *unaff_RSI;
      if (lVar5 == local_40) {
        if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
          if (local_38 != '\0') goto LAB_00d1515e;
          FUN_00d50b00();
          goto LAB_00d151fb;
        }
LAB_00d15202:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar3 = unaff_RSI[1];
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *unaff_RSI = local_40;
          if (((char)lVar3 != '\0') && (lVar5 != 0)) {
            FUN_00d50b20();
          }
LAB_00d151fb:
          local_48 = unaff_RSI + 1;
          *(undefined1 *)local_48 = 1;
          goto LAB_00d15202;
        }
        *unaff_RSI = local_40;
        if (((char)lVar3 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_00d1515e:
        local_48 = unaff_RSI + 1;
        *(undefined1 *)local_48 = 1;
      }
      iVar1 = *(int *)(unaff_RDI + 0x28);
    }
    if (iVar1 == 9) {
      plVar2 = (longlong *)*unaff_RSI;
      lVar5 = *(longlong *)(unaff_RDI + 0x20);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*plVar2 + 0x310))();
      if (lVar5 == 0) {
        return uVar4;
      }
      FUN_00d50b20();
      return uVar4;
    }
    if (iVar1 == 7) {
      plVar2 = (longlong *)*unaff_RSI;
      lVar5 = *(longlong *)(unaff_RDI + 0x20);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*plVar2 + 0x308))();
      if (lVar5 == 0) {
        return uVar4;
      }
      FUN_00d50b20();
      return uVar4;
    }
  }
  if (*unaff_RSI == 0) {
    FUN_00d43000();
    lVar5 = *unaff_RSI;
    if (lVar5 == local_40) {
      if (((char)unaff_RSI[1] != '\0') || (local_40 == 0)) goto LAB_00d15292;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_00d1528b;
      }
    }
    else {
      lVar3 = unaff_RSI[1];
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = local_40;
        if (((char)lVar3 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_00d1528b:
        local_48 = unaff_RSI + 1;
        *(undefined1 *)local_48 = 1;
LAB_00d15292:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00d152a6;
      }
      *unaff_RSI = local_40;
      if (((char)lVar3 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
    }
    local_48 = unaff_RSI + 1;
    *(undefined1 *)local_48 = 1;
  }
LAB_00d152a6:
  lVar5 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar5 == 0) {
    FUN_00d43000();
    if (local_40 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    FUN_00d50b00();
  }
  uVar4 = 0;
  switch(*(undefined4 *)(unaff_RDI + 0x28)) {
  case 0:
    uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x50))();
    break;
  case 1:
    uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x2f8))();
    break;
  case 2:
    uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x2d8))();
    break;
  case 3:
    uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x2f0))();
    break;
  case 4:
    uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x2e0))();
    break;
  case 5:
    uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x2e8))();
    break;
  case 6:
    FUN_00d43000();
    lVar3 = *unaff_RSI;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != lVar3) {
      uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x300))();
      break;
    }
    uVar4 = 0;
    if (lVar5 == 0) {
      return 0;
    }
    goto LAB_00d15555;
  case 8:
    uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x318))();
  }
  if (lVar5 != 0) {
LAB_00d15555:
    FUN_00d50b20();
  }
  return uVar4;
}


