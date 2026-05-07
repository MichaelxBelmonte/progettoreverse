// Function: FUN_00e9a240
// Address: 00e9a240
// Size: 645 bytes
// Class: GNError
// String references:
//   "%@ %@"


void FUN_00e9a240(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined8 *unaff_RDI;
  bool bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_90;
  longlong local_88;
  char local_80;
  undefined4 local_74;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar6 = FUN_00e991a0();
  if ((longlong *)*param_1 == (longlong *)0x0) {
    local_74 = uVar6;
    FUN_00d8d630();
    (**(code **)(*local_40 + 0x378))(local_74);
    plVar5 = local_70;
    if (local_70 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      bVar4 = false;
    }
    else if (local_68 == '\0') {
      FUN_00d50b00();
      bVar4 = true;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
      bVar4 = true;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*(longlong *)*param_1 + 0x378))();
    plVar5 = local_70;
    if (local_70 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      bVar4 = false;
    }
    else {
      bVar4 = true;
      if (((local_68 == '\0') && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (plVar5 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    iVar3 = FUN_00d8c7a0();
    if (iVar3 != 0) {
      FUN_00d933c0();
      local_90 = plVar5;
      uVar6 = FUN_00083ea0(2,&local_90);
      FUN_00d8cb40(uVar6,&local_70);
      plVar1 = local_40;
      if (local_40 == plVar5) {
        bVar2 = bVar4;
        if ((!bVar4) && (local_40 != (longlong *)0x0)) {
          if (local_38 != '\0') goto LAB_00e9a425;
          FUN_00d50b00();
          bVar2 = true;
        }
joined_r0x00e9a410:
        bVar4 = bVar2;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          plVar5 = plVar1;
          bVar2 = true;
          if (bVar4) {
            FUN_00d50b20();
            bVar2 = true;
          }
          goto joined_r0x00e9a410;
        }
        plVar5 = local_40;
        if (bVar4) {
          FUN_00d50b20();
        }
LAB_00e9a425:
        local_38 = '\0';
        bVar4 = true;
      }
      local_70 = (longlong *)&DAT_0253d630;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_70 = &DAT_024c5048;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar4) goto LAB_00e9a499;
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00e9a499;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_00e9a499:
  *unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


