// Function: FUN_00655020
// Address: 00655020
// Size: 562 bytes
// Class: MDWorkspaceView


/* WARNING: Removing unreachable block (ram,0x00655132) */
/* WARNING: Removing unreachable block (ram,0x0065513b) */

ulonglong FUN_00655020(undefined8 param_1,byte param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x5e0))();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00655080;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_00655080:
    (**(code **)(*plVar1 + 0x468))();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (longlong *)0x0) {
LAB_00655165:
      uVar5 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x478))();
      uVar5 = (ulonglong)uVar3;
      if ((param_2 & (byte)uVar3) == 1) {
        (**(code **)(*unaff_RDI + 0x5d8))();
        plVar2 = local_40;
        if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01f27fe0();
        iVar4 = (**(code **)(*local_40 + 0x5c0))();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar4 != 0) {
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_00655165;
        }
        FUN_00612250();
        (**(code **)(*plVar1 + 0x468))();
        local_48 = 0;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_48 = '\x01';
        local_50 = local_60;
        (**(code **)(*local_40 + 0x610))(1,&local_50);
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
        uVar5 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
    goto LAB_00655173;
  }
  uVar5 = 0;
LAB_00655173:
  return uVar5 & 0xffffffff;
}


