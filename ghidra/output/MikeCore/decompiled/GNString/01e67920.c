// Function: FUN_01e67920
// Address: 01e67920
// Size: 1588 bytes
// Class: GNString
// String references:
//   "%@MouseOver"


/* WARNING: Removing unreachable block (ram,0x01e67a86) */
/* WARNING: Removing unreachable block (ram,0x01e67a92) */

void FUN_01e67920(undefined4 param_1,undefined4 param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 in_ECX;
  undefined4 in_EDX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar4;
  undefined4 local_res8;
  undefined1 local_res10;
  longlong local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  uint local_48;
  longlong *local_40;
  char local_38;
  
  local_70 = param_4;
  local_6c = in_ECX;
  cVar3 = FUN_01d53b40();
  if (cVar3 != '\0') {
    FUN_01e63b70(local_res8,in_EDX,local_res10);
    plVar2 = local_50;
    if (((((char)local_48 == '\0') && (local_50 != (longlong *)0x0)) &&
        (FUN_00d50b00(), (char)local_48 != '\0')) && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_110 = *param_3;
    local_108 = '\0';
    local_100 = plVar2;
    local_f8 = '\0';
    FUN_01cc2320(param_1,param_2,&local_110,local_70,&local_100);
    if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if (*(float *)(unaff_RDI + 0x34) <= 0.0) goto LAB_01e67e9b;
  (**(code **)(*(longlong *)*param_3 + 0x148))();
  plVar2 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 == (longlong *)0x0) goto LAB_01e67e9b;
    FUN_00d50b00();
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_50 == (longlong *)0x0) goto LAB_01e67e9b;
  lVar1 = DAT_027f4008;
  local_78 = plVar2;
  if (DAT_027f4008 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar1;
  local_e8 = '\x01';
  cVar3 = (**(code **)(*local_78 + 0x50))();
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = local_78;
  if (cVar3 != '\0') {
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    local_58 = param_3;
    uVar4 = FUN_00d50b00();
    local_40 = plVar2;
    local_38 = '\x01';
    FUN_00d8cb40(uVar4,&local_50);
    local_60 = local_90;
    if (local_88 == '\0') {
      if (((local_90 != 0) && (FUN_00d50b00(), local_88 != '\0')) && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_88 = '\0';
    }
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_e0 = local_60;
    local_d8 = '\0';
    FUN_01d51a40();
    param_3 = local_58;
    local_68 = local_50;
    if ((char)local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != (longlong *)0x0) {
      uVar4 = FUN_01d526f0();
      FUN_01d4ed90(uVar4,DAT_02390124);
      plVar2 = local_50;
      if (((char)local_48 == '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d52700();
      FUN_01d52740();
      local_d0 = *local_58;
      local_c8 = '\0';
      (**(code **)(*local_50 + 0x400))(0);
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      FUN_01d489d0(*(undefined4 *)(unaff_RDI + 0x34));
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      local_c0 = local_68;
      local_b8 = '\0';
      (**(code **)(*local_50 + 0x400))(0);
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52770();
      local_80 = (longlong *)*local_58;
      lVar1 = local_58[1];
      if (local_80 == plVar2) {
        if (((char)lVar1 != '\0') || (plVar2 == (longlong *)0x0)) goto LAB_01e67dd8;
        FUN_00d50b00();
        *(undefined1 *)(local_58 + 1) = 1;
LAB_01e67e73:
        param_3 = local_58;
        FUN_00d50b20();
      }
      else {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *local_58 = (longlong)plVar2;
        if (((char)lVar1 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        *(undefined1 *)(local_58 + 1) = 1;
LAB_01e67dd8:
        param_3 = local_58;
        if (plVar2 != (longlong *)0x0) goto LAB_01e67e73;
      }
      FUN_00d50b20();
    }
    if (local_60 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01e67e9b:
  local_b0 = *unaff_RSI;
  local_a8 = '\0';
  local_a0 = *param_3;
  local_98 = '\0';
  FUN_01cc21a0(param_1,param_2,&local_a0,local_70);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  return;
}


