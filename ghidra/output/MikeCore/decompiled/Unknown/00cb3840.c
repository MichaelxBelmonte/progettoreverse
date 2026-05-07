// Function: FUN_00cb3840
// Address: 00cb3840
// Size: 658 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00cb38ac) */
/* WARNING: Removing unreachable block (ram,0x00cb38b5) */

longlong * FUN_00cb3840(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar4;
  undefined8 local_a8;
  undefined1 local_a0;
  longlong *local_98;
  char local_90;
  undefined8 *local_88;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_88 = param_2;
  (**(code **)(*(longlong *)*param_1 + 0x60))();
  if (local_40 == 0) {
    cVar1 = '\0';
  }
  else {
    (**(code **)(*(longlong *)*param_1 + 0x60))();
    cVar1 = (**(code **)(*local_98 + 0x50))();
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    local_60 = *param_1;
    local_58 = '\0';
    (**(code **)(*unaff_RSI + 0x400))(0,&local_60,0);
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      iVar2 = FUN_00c8d620();
      if (iVar2 < 1) {
        iVar2 = 0;
      }
      iVar4 = -1;
      do {
        if (iVar4 == iVar2 + -1) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          *unaff_RDI = 0;
          goto LAB_00cb3abf;
        }
        iVar4 = iVar4 + 1;
        do {
          lVar3 = FUN_00c8df10();
        } while (lVar3 == 0);
        local_a8 = *local_88;
        local_a0 = 0;
        local_48 = '\0';
        local_50 = lVar3;
        FUN_00cb3840(&local_50,&local_a8);
        lVar3 = local_40;
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      } while (lVar3 == 0);
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_00cb3abf:
      FUN_00d50b20();
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar3 = *param_1;
    if ((char)param_1[1] == '\0') {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  return unaff_RDI;
}


