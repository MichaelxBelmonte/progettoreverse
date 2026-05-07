// Function: FUN_003bb820
// Address: 003bb820
// Size: 863 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_003bb820(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar7;
  longlong local_a0;
  char local_98;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong in_stack_ffffffffffffffb8;
  char local_40;
  char local_38 [8];
  
  FUN_01bbfb40();
  FUN_002eb090();
  plVar1 = local_70;
  if (local_68[0] == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_40 != '\0') && (in_stack_ffffffffffffffb8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_38[0] = '\0';
  do {
    (**(code **)(*unaff_RSI + 0x370))();
    plVar5 = local_70;
    if (local_70 == unaff_RSI) {
      if (((local_38[0] == '\0') && (local_70 != (longlong *)0x0)) && (local_68[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_003bb8f7;
      }
    }
    else {
      if (local_68[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar4 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar4 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
        unaff_RSI = plVar5;
LAB_003bb8f7:
        local_38[0] = '\x01';
        pcVar4 = local_68;
        plVar5 = unaff_RSI;
      }
      *pcVar4 = '\0';
      unaff_RSI = plVar5;
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (DAT_026fddb0 == '\0') {
      iVar3 = ___cxa_guard_acquire();
      if (iVar3 != 0) {
        _DAT_026e0ab8 = FUN_00015ff0();
        _DAT_026e0aa0 = "MDMetaWindowController";
        _DAT_026e0aa8 = 0x198;
        _DAT_026e0ab0 = FUN_0006dea0;
        _DAT_026e0ac0 = 0;
        uRam00000000026e0ac8 = 0;
        _DAT_026e0ad0 = 0;
        _DAT_026e0b48 = 0;
        uRam00000000026e0b50 = 0;
        _DAT_026e0b58 = 0;
        DAT_026e0b5a = 1;
        _DAT_026e0ad8 = 0;
        uRam00000000026e0ae0 = 0;
        _DAT_026e0ae8 = 0;
        uRam00000000026e0af0 = 0;
        _DAT_026e0af8 = 0;
        uRam00000000026e0b00 = 0;
        _DAT_026e0b08 = 0;
        uRam00000000026e0b10 = 0;
        _DAT_026e0b18 = 0;
        uRam00000000026e0b20 = 0;
        _DAT_026e0b28 = 0;
        uRam00000000026e0b30 = 0;
        _DAT_026e0b38 = 0;
        uRam00000000026e0b40 = 0;
        DAT_026e0b63 = 0;
        _DAT_026e0b5b = 0;
        ___cxa_guard_release();
      }
    }
    plVar5 = &DAT_02802688;
    if (unaff_RSI != (longlong *)0x0) {
      (**(code **)(*unaff_RSI + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar5 = (longlong *)&stack0xffffffffffffffb8;
      if (cVar2 == '\0') {
        plVar5 = &DAT_02802688;
      }
    }
    if (*plVar5 != 0) {
      if ((local_38[0] == '\0') && (unaff_RSI != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_003bba6c;
    }
    if (unaff_RSI == (longlong *)0x0) {
      unaff_RSI = (longlong *)0x0;
LAB_003bba6c:
      uVar7 = FUN_00d50b20();
      if ((unaff_RSI != (longlong *)0x0) && (plVar1 != (longlong *)0x0)) {
        local_68[0] = '\0';
        local_70 = (longlong *)0x0;
        local_60 = plVar1;
        local_50 = 0;
        local_58 = 0;
        if (0 < *(int *)((longlong)plVar1 + 0xc)) {
          lVar6 = 0;
          do {
            local_80 = *(longlong **)(plVar1[2] + lVar6 * 8);
            local_78 = '\0';
            local_70 = local_80;
            uVar7 = FUN_006500a0(uVar7,&local_80);
            if ((local_98 != '\0') && (local_a0 != 0)) {
              uVar7 = FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
              uVar7 = FUN_00d50b20();
            }
            lVar6 = lVar6 + 1;
            local_58 = CONCAT44(local_58._4_4_,(int)lVar6);
          } while ((int)lVar6 < *(int *)((longlong)plVar1 + 0xc));
        }
        FUN_000be170();
      }
      *unaff_RDI = plVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (unaff_RSI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      return unaff_RDI;
    }
  } while( true );
}


