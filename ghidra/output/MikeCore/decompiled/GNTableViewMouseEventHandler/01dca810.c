// Function: FUN_01dca810
// Address: 01dca810
// Size: 1258 bytes
// Class: GNTableViewMouseEventHandler
// String references:
//   "GNTableViewMouseEventHandler"


/* WARNING: Removing unreachable block (ram,0x01dca850) */
/* WARNING: Removing unreachable block (ram,0x01dca85c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dca810(void)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong **pplVar4;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar5;
  longlong lVar6;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  
  FUN_00d50f50();
  FUN_01dcafc0();
  if ((char)unaff_RDI[0x46] != '\0') {
    FUN_01ca6a90();
    lVar6 = DAT_027f29d0;
    if (DAT_027f29d0 != 0) {
      FUN_00d50b00();
    }
    FUN_01cadf40();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar6 = DAT_027f29d8;
  plVar3 = (longlong *)*unaff_RSI;
  if (DAT_027f29d8 != 0) {
    FUN_00d50b00();
  }
  iVar2 = (**(code **)(*plVar3 + 0x598))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (iVar2 < 1) {
    (**(code **)(*unaff_RDI + 0x4a0))();
    uVar5 = *(uint *)((longlong)local_68 + 0xc);
    if (local_60 != '\0') {
      FUN_00d50b20();
    }
    if (0 < (int)uVar5) {
      lVar6 = (ulonglong)uVar5 + 1;
      do {
        uVar5 = uVar5 - 1;
        (**(code **)(*unaff_RDI + 0x4a0))();
        plVar3 = *(longlong **)(*(longlong *)(local_40 + 0x10) + (ulonglong)uVar5 * 8);
        local_68 = plVar3;
        local_60 = '\0';
        if ((DAT_027f2b30 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
          _DAT_027f2a80 = FUN_0006d940();
          _DAT_027f2a68 = "GNTableViewMouseEventHandler";
          _DAT_027f2a70 = 0x138;
          _DAT_027f2a78 = FUN_01de67d0;
          _DAT_027f2a88 = 0;
          uRam00000000027f2a90 = 0;
          _DAT_027f2a98 = 0;
          uRam00000000027f2aa0 = 0;
          _DAT_027f2aa8 = 0;
          uRam00000000027f2ab0 = 0;
          _DAT_027f2ab8 = 0;
          uRam00000000027f2ac0 = 0;
          _DAT_027f2ac8 = 0;
          uRam00000000027f2ad0 = 0;
          _DAT_027f2ad8 = 0;
          uRam00000000027f2ae0 = 0;
          _DAT_027f2ae8 = 0;
          uRam00000000027f2af0 = 0;
          _DAT_027f2af8 = 0;
          uRam00000000027f2b00 = 0;
          _DAT_027f2b08 = 0;
          uRam00000000027f2b10 = 0;
          _DAT_027f2b18 = 0;
          uRam00000000027f2b20 = 0;
          _DAT_027f2b28 = 0;
          ___cxa_guard_release();
        }
        pplVar4 = (longlong **)&DAT_02802688;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x360))();
          cVar1 = FUN_00e85ea0();
          pplVar4 = &local_68;
          if (cVar1 == '\0') {
            pplVar4 = (longlong **)&DAT_02802688;
          }
        }
        plVar3 = *pplVar4;
        if (*(char *)(pplVar4 + 1) == '\0') {
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar4 + 1) = 0;
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x478))();
          FUN_00d50b20();
        }
        lVar6 = lVar6 + -1;
      } while (1 < lVar6);
    }
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    *plVar3 = (longlong)&DAT_026990a0;
    plVar3[2] = (longlong)&DAT_026999c8;
    FUN_00d500e0();
    lVar6 = unaff_RDI[0x53];
    unaff_RDI[0x53] = (longlong)plVar3;
    if (lVar6 != 0) {
      FUN_00d50b20();
      plVar3 = (longlong *)unaff_RDI[0x53];
    }
    FUN_01e3f820();
    (**(code **)(*plVar3 + 0x4d0))();
    lVar6 = unaff_RDI[0x53];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0x450))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  if (0 < *(int *)(unaff_RDI[7] + 0xc)) {
    (**(code **)(*unaff_RDI + 0x4a0))();
    lVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01dcb110();
    plVar3 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      local_60 = 0;
      local_68 = (longlong *)0x0;
      local_58 = plVar3;
      local_48 = 0;
      local_50 = 0;
      if (0 < *(int *)((longlong)plVar3 + 0xc)) {
        lVar6 = 0;
        do {
          local_68 = *(longlong **)(plVar3[2] + lVar6 * 8);
          if (local_68 != (longlong *)unaff_RDI[0x53]) {
            (**(code **)(*local_68 + 0x478))();
          }
          lVar6 = lVar6 + 1;
          local_50 = CONCAT44(local_50._4_4_,(int)lVar6);
        } while ((int)lVar6 < *(int *)((longlong)plVar3 + 0xc));
      }
      FUN_000a9680();
      FUN_00d50b20();
    }
  }
  return;
}


