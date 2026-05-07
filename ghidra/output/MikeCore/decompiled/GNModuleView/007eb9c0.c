// Function: FUN_007eb9c0
// Address: 007eb9c0
// Size: 790 bytes
// Class: GNModuleView
// String references:
//   "GNModuleView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007eb9c0(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong **pplVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01e534b0();
  FUN_01e53c20();
  uVar6 = (**(code **)(*local_40 + 0x4a0))();
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (longlong *)0x0) && (uVar6 = FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    local_60 = '\0';
    local_68 = (longlong *)0x0;
    local_58 = plVar1;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar5 = 0;
    while( true ) {
      if (iVar5 != 0) {
        if (iVar5 < 1) {
          iVar5 = -iVar5;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar5);
          uVar6 = FUN_00d23690(uVar6,iVar5);
          local_48 = local_48 + iVar5;
          iVar5 = 0;
        }
        local_50 = CONCAT44(iVar5,(int)local_50);
      }
      lVar3 = (longlong)(int)local_50;
      iVar5 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar5);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar5) break;
      plVar1 = *(longlong **)(local_58[2] + 8 + lVar3 * 8);
      local_68 = plVar1;
      if ((DAT_026e5340 == '\0') &&
         (iVar5 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_00, iVar5 != 0)) {
        _DAT_027e7718 = FUN_0006d940();
        _DAT_027e7700 = "GNModuleView";
        _DAT_027e7708 = 0x178;
        _DAT_027e7710 = FUN_00191170;
        _DAT_027e7720 = 0;
        uRam00000000027e7728 = 0;
        _DAT_027e7730 = 0;
        uRam00000000027e7738 = 0;
        _DAT_027e7740 = 0;
        uRam00000000027e7748 = 0;
        _DAT_027e7750 = 0;
        uRam00000000027e7758 = 0;
        _DAT_027e7760 = 0;
        uRam00000000027e7768 = 0;
        _DAT_027e7770 = 0;
        uRam00000000027e7778 = 0;
        _DAT_027e7780 = 0;
        uRam00000000027e7788 = 0;
        _DAT_027e7790 = 0;
        uRam00000000027e7798 = 0;
        _DAT_027e77a0 = 0;
        uRam00000000027e77a8 = 0;
        _DAT_027e77b0 = 0;
        uRam00000000027e77b8 = 0;
        _DAT_027e77c0 = 0;
        uVar6 = ___cxa_guard_release();
      }
      pplVar4 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar4 = &local_68;
        uVar6 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          pplVar4 = (longlong **)&DAT_02802688;
        }
      }
      if (*(char *)(pplVar4 + 1) == '\0') {
        if (*pplVar4 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_007ebb21;
        }
      }
      else {
        *(undefined1 *)(pplVar4 + 1) = 0;
        if (*pplVar4 != (longlong *)0x0) {
LAB_007ebb21:
          FUN_01ebbf20();
          plVar1 = local_78;
          FUN_00335590();
          pplVar4 = (longlong **)&DAT_02802688;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar4 = &local_78;
            if (cVar2 == '\0') {
              pplVar4 = (longlong **)&DAT_02802688;
            }
          }
          plVar1 = *pplVar4;
          if (*(char *)(pplVar4 + 1) == '\0') {
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pplVar4 + 1) = 0;
          }
          local_38 = '\0';
          local_40 = plVar1;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar6 = FUN_00d50b20();
        }
      }
      iVar5 = local_50._4_4_;
    }
    FUN_000a9680();
    FUN_00d50b20();
  }
  FUN_007ebe20();
  return;
}


