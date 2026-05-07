// Function: FUN_01430250
// Address: 01430250
// Size: 1331 bytes
// Class: MUSpectrumShaper
// String references:
//   "MUSpectrumShaperDisplayInfo"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01430250(undefined4 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  longlong **pplVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *unaff_RDI;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_80;
  char local_78 [8];
  longlong *local_70;
  char local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  undefined4 local_3c;
  char local_38 [8];
  
  lVar3 = unaff_RDI[0x1d];
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x650))();
  local_48 = local_70;
  if (local_70 == (longlong *)0x0) {
    local_3c = 1;
    local_48 = (longlong *)0x0;
  }
  else {
    if (local_68 == '\0') {
      FUN_00d50b00();
      local_3c = 0;
      if ((local_68 == '\0') || (local_70 == (longlong *)0x0)) goto LAB_014302fc;
      FUN_00d50b20();
    }
    else {
      local_68 = '\0';
    }
    local_3c = 0;
  }
LAB_014302fc:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d216c0();
  if (local_48 != (longlong *)0x0) {
    local_68 = '\0';
    local_70 = (longlong *)0x0;
    local_60 = local_48;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar7 = -local_58._4_4_;
        }
        else {
          iVar7 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar7);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar7 = 0;
        }
        local_58 = CONCAT44(iVar7,(int)local_58);
      }
      lVar3 = (longlong)(int)local_58;
      iVar7 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar7);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar7) break;
      plVar1 = *(longlong **)(local_60[2] + 8 + lVar3 * 8);
      local_70 = plVar1;
      local_80 = plVar1;
      if ((DAT_027b2588 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        _DAT_027b24d8 = FUN_00d4fe50();
        _DAT_027b24c0 = "MUSpectrumShaperDisplayInfo";
        _DAT_027b24c8 = 0x20;
        _DAT_027b24d0 = FUN_011b1f40;
        _DAT_027b24e0 = 0;
        uRam00000000027b24e8 = 0;
        _DAT_027b24f0 = 0;
        _DAT_027b2568 = 0;
        uRam00000000027b2570 = 0;
        _DAT_027b2578 = 0;
        DAT_027b257a = 1;
        _DAT_027b24f8 = 0;
        uRam00000000027b2500 = 0;
        _DAT_027b2508 = 0;
        uRam00000000027b2510 = 0;
        _DAT_027b2518 = 0;
        uRam00000000027b2520 = 0;
        _DAT_027b2528 = 0;
        uRam00000000027b2530 = 0;
        _DAT_027b2538 = 0;
        uRam00000000027b2540 = 0;
        _DAT_027b2548 = 0;
        uRam00000000027b2550 = 0;
        _DAT_027b2558 = 0;
        uRam00000000027b2560 = 0;
        DAT_027b2583 = 0;
        _DAT_027b257b = 0;
        ___cxa_guard_release();
      }
      pplVar5 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_80;
        if (cVar2 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar5 != (longlong *)0x0) {
        FUN_01415140();
        plVar1 = local_80;
        local_38[0] = local_78[0];
        pcVar4 = local_78;
        if (local_78[0] == '\0') {
          pcVar4 = local_38;
        }
        *pcVar4 = '\0';
        if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_014148f0();
        local_78[0] = '\0';
        local_80 = plVar1;
        FUN_00d21140();
        if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01431fb0();
  }
  for (uVar6 = (ulonglong)*(uint *)(unaff_RDI[0x1e] + 0xc); 0 < (int)uVar6; uVar6 = uVar6 - 1) {
    (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI[0x1e] + 0x10) + -8 + uVar6 * 8) + 0x400))
              (param_1,param_2);
  }
  FUN_00e7b4e0();
  uVar8 = (**(code **)(*unaff_RDI + 0x408))();
  if (local_48 != (longlong *)0x0) {
    local_68 = 0;
    local_70 = (longlong *)0x0;
    local_60 = local_48;
    local_58._0_4_ = -1;
    local_58._4_4_ = 0;
    local_50 = 0;
    while( true ) {
      iVar7 = local_58._4_4_;
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          local_58._4_4_ = -local_58._4_4_;
        }
        else {
          local_58._0_4_ = (int)local_58 - local_58._4_4_;
          uVar8 = FUN_00d23690(uVar8,local_58._4_4_);
          local_50 = local_50 + iVar7;
          local_58._4_4_ = 0;
        }
      }
      lVar3 = (longlong)(int)local_58;
      local_58._0_4_ = (int)local_58 + 1;
      if (*(int *)((longlong)local_60 + 0xc) <= (int)local_58) break;
      plVar1 = *(longlong **)(local_60[2] + 8 + lVar3 * 8);
      local_70 = plVar1;
      local_80 = plVar1;
      if ((DAT_027b2588 == '\0') &&
         (iVar7 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_00, iVar7 != 0)) {
        _DAT_027b24d8 = FUN_00d4fe50();
        _DAT_027b24c0 = "MUSpectrumShaperDisplayInfo";
        _DAT_027b24c8 = 0x20;
        _DAT_027b24d0 = FUN_011b1f40;
        _DAT_027b24e0 = 0;
        uRam00000000027b24e8 = 0;
        _DAT_027b24f0 = 0;
        _DAT_027b2568 = 0;
        uRam00000000027b2570 = 0;
        _DAT_027b2578 = 0;
        DAT_027b257a = 1;
        _DAT_027b24f8 = 0;
        uRam00000000027b2500 = 0;
        _DAT_027b2508 = 0;
        uRam00000000027b2510 = 0;
        _DAT_027b2518 = 0;
        uRam00000000027b2520 = 0;
        _DAT_027b2528 = 0;
        uRam00000000027b2530 = 0;
        _DAT_027b2538 = 0;
        uRam00000000027b2540 = 0;
        _DAT_027b2548 = 0;
        uRam00000000027b2550 = 0;
        _DAT_027b2558 = 0;
        uRam00000000027b2560 = 0;
        DAT_027b2583 = 0;
        _DAT_027b257b = 0;
        uVar8 = ___cxa_guard_release();
      }
      pplVar5 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_80;
        uVar8 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar5 != (longlong *)0x0) {
        uVar8 = FUN_01415190();
      }
    }
    FUN_01431fb0();
    if ((char)local_3c == '\0') {
      FUN_00d50b20();
    }
  }
  return;
}


