// Function: FUN_006311f0
// Address: 006311f0
// Size: 890 bytes
// Class: MDPluginWindowResizeView
// String references:
//   "MDPluginWindowResizeView"


/* WARNING: Removing unreachable block (ram,0x006312a1) */
/* WARNING: Removing unreachable block (ram,0x0063153b) */
/* WARNING: Removing unreachable block (ram,0x00631544) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006311f0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong **pplVar8;
  int iVar9;
  longlong unaff_RDI;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 in_XMM1_Dc;
  undefined4 uVar14;
  undefined4 in_XMM1_Dd;
  undefined4 uVar15;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  uVar12 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar10 = (undefined4)param_2;
  plVar1 = *(longlong **)(unaff_RDI + 0x10);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0x4a0))();
  plVar7 = local_58;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00631265;
    }
  }
  else if (local_58 != (longlong *)0x0) {
LAB_00631265:
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_48 = plVar7;
    local_40 = 0xffffffff;
    local_38 = 0;
    while( true ) {
      lVar6 = (longlong)(int)local_40;
      iVar9 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar9);
      if (*(int *)((longlong)local_48 + 0xc) <= iVar9) break;
      plVar7 = *(longlong **)(local_48[2] + 8 + lVar6 * 8);
      local_58 = plVar7;
      if ((DAT_0271d930 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
        _DAT_02726368 = FUN_0006d940();
        _DAT_02726350 = "MDPluginWindowResizeView";
        _DAT_02726358 = 0x140;
        _DAT_02726360 = FUN_0043f230;
        _DAT_02726370 = 0;
        uRam0000000002726378 = 0;
        _DAT_02726380 = 0;
        _DAT_027263f8 = 0;
        uRam0000000002726400 = 0;
        _DAT_02726408 = 0;
        DAT_0272640a = 1;
        _DAT_02726388 = 0;
        uRam0000000002726390 = 0;
        _DAT_02726398 = 0;
        uRam00000000027263a0 = 0;
        _DAT_027263a8 = 0;
        uRam00000000027263b0 = 0;
        _DAT_027263b8 = 0;
        uRam00000000027263c0 = 0;
        _DAT_027263c8 = 0;
        uRam00000000027263d0 = 0;
        _DAT_027263d8 = 0;
        uRam00000000027263e0 = 0;
        _DAT_027263e8 = 0;
        uRam00000000027263f0 = 0;
        DAT_02726413 = 0;
        _DAT_0272640b = 0;
        ___cxa_guard_release();
      }
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar8 = &local_58;
        if (cVar5 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar7 = *pplVar8;
      if (plVar7 != (longlong *)0x0) {
        if (*(char *)(pplVar8 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar8 + 1) = 0;
        }
        bVar4 = true;
        goto LAB_0063142b;
      }
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar9 = -local_40._4_4_;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar9 = 0;
        }
        local_40 = CONCAT44(iVar9,(int)local_40);
      }
    }
    bVar4 = false;
    plVar7 = (longlong *)0x0;
LAB_0063142b:
    FUN_000a9680();
    FUN_00d50b20();
    if (plVar7 != (longlong *)0x0) {
      if (*(char *)(unaff_RDI + 0x108) != '\0') {
        (**(code **)(*plVar7 + 0x478))();
      }
      goto LAB_00631549;
    }
  }
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *plVar7 = (longlong)&DAT_024f39b0;
  plVar7[2] = (longlong)&DAT_024f42d8;
  *(undefined2 *)(plVar7 + 0x27) = 0;
  *(undefined1 *)((longlong)plVar7 + 0x13a) = 0;
  (*DAT_024f39c8)();
  FUN_0043f070();
  (**(code **)(*plVar1 + 0x4d8))();
  uVar11 = uVar10;
  uVar13 = uVar12;
  uVar14 = in_XMM1_Dc;
  uVar15 = in_XMM1_Dd;
  (**(code **)(*plVar1 + 0x4d8))();
  auVar3._4_4_ = uVar12;
  auVar3._0_4_ = uVar10;
  auVar3._8_4_ = in_XMM1_Dc;
  auVar3._12_4_ = in_XMM1_Dd;
  auVar2._4_4_ = uVar13;
  auVar2._0_4_ = uVar11;
  auVar2._8_4_ = uVar14;
  auVar2._12_4_ = uVar15;
  blendps(auVar3,auVar2,2);
  (**(code **)(*plVar7 + 0x4d0))();
  (**(code **)(*plVar7 + 0x558))();
  FUN_0043f090();
  (**(code **)(*plVar1 + 0x450))();
  bVar4 = true;
LAB_00631549:
  if (bVar4) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


