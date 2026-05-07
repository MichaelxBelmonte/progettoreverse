// Function: FUN_00b3df40
// Address: 00b3df40
// Size: 1000 bytes
// Class: GNAudioProcessor


/* WARNING: Removing unreachable block (ram,0x00b3e13b) */
/* WARNING: Removing unreachable block (ram,0x00b3e14b) */

ulonglong FUN_00b3df40(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong unaff_RDI;
  longlong **pplVar9;
  undefined4 extraout_XMM0_Da;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01cae990();
  plVar1 = local_40;
  lVar3 = DAT_0275e918;
  if (DAT_0275e918 != 0) {
    FUN_00d50b00();
  }
  uVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar5 != '\0') {
    uVar8 = CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
    if (param_2 != '\0') {
      plVar1 = *(longlong **)(unaff_RDI + 0x78);
      uVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x930))();
      local_58 = (longlong *)CONCAT44(local_58._4_4_,uVar5);
      FUN_00b3d240();
      local_78 = local_40;
      local_70 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70 = '\x01';
      FUN_01caecd0();
      lVar3 = *plVar1;
      (**(code **)(lVar3 + 0x5e0))(local_58._0_4_,&local_78);
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    goto LAB_00b3e314;
  }
  FUN_01cae990();
  plVar1 = local_40;
  lVar3 = DAT_0275e920;
  if (DAT_0275e920 != 0) {
    FUN_00d50b00();
  }
  uVar6 = (**(code **)(*plVar1 + 0x50))();
  uVar5 = extraout_XMM0_Da;
  if (lVar3 != 0) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((char)uVar6 == '\0') {
    uVar7 = FUN_01e54290(uVar5,param_2);
    uVar8 = (ulonglong)uVar7;
    goto LAB_00b3e314;
  }
  uVar8 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
  if (param_2 == '\0') goto LAB_00b3e314;
  pplVar9 = &local_40;
  (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x5d0))();
  plVar1 = local_40;
  FUN_00b10020();
  if (plVar1 == (longlong *)0x0) {
LAB_00b3e0ec:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00b3e0ec;
  }
  plVar2 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  uVar8 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    local_58 = plVar2;
    uVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x970))();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar5 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    uVar5 = FUN_00bf87d0(uVar5,*(undefined4 *)(unaff_RDI + 0x70));
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x78);
    FUN_00b3d240();
    local_68 = local_40;
    local_60 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_60 = '\x01';
    FUN_01caecd0();
    lVar3 = *plVar1;
    (**(code **)(lVar3 + 0x5e0))(uVar5,&local_68);
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_00b3e314:
  return uVar8 & 0xffffffff;
}


