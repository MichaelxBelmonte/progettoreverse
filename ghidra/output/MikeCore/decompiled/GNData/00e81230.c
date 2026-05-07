// Function: FUN_00e81230
// Address: 00e81230
// Size: 1084 bytes
// Class: GNData
// String references:
//   "GNData"


/* WARNING: Removing unreachable block (ram,0x00e814a1) */
/* WARNING: Removing unreachable block (ram,0x00e8159c) */
/* WARNING: Removing unreachable block (ram,0x00e8151f) */
/* WARNING: Removing unreachable block (ram,0x00e81500) */
/* WARNING: Removing unreachable block (ram,0x00e81512) */
/* WARNING: Removing unreachable block (ram,0x00e81580) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_00e81230(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar2 = (**(code **)(*(longlong *)*param_2 + 0x140))();
  if (cVar2 == '\0') {
LAB_00e812ff:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar1 = param_2[1];
    *unaff_RDI = *param_2;
    plVar4 = unaff_RDI + 1;
    if ((char)lVar1 != '\0') {
      plVar4 = param_2 + 1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    *(undefined1 *)plVar4 = 0;
  }
  else {
    plVar4 = (longlong *)*param_2;
    uVar5 = extraout_XMM0_Da;
    if ((DAT_026d0220 == '\0') &&
       (iVar3 = ___cxa_guard_acquire(), uVar5 = extraout_XMM0_Da_02, iVar3 != 0)) {
      _DAT_02789148 = FUN_00d4fe50();
      DAT_02789130 = "GNData";
      _DAT_02789138 = 0x28;
      _DAT_02789140 = FUN_000378a0;
      _DAT_02789150 = 0;
      uRam0000000002789158 = 0;
      _DAT_02789160 = 0;
      uRam0000000002789168 = 0;
      _DAT_02789170 = 0;
      uRam0000000002789178 = 0;
      _DAT_02789180 = 0;
      uRam0000000002789188 = 0;
      _DAT_02789190 = 0;
      uRam0000000002789198 = 0;
      _DAT_027891a0 = 0;
      uRam00000000027891a8 = 0;
      _DAT_027891b0 = 0;
      uRam00000000027891b8 = 0;
      _DAT_027891c0 = 0;
      uRam00000000027891c8 = 0;
      _DAT_027891d0 = 0;
      uRam00000000027891d8 = 0;
      _DAT_027891e0 = 0;
      uRam00000000027891e8 = 0;
      _DAT_027891f0 = 0;
      uVar5 = ___cxa_guard_release();
    }
    if (plVar4 == (longlong *)0x0) {
LAB_00e8129d:
      plVar4 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar4 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar4 = param_2;
      uVar5 = extraout_XMM0_Da_00;
      if (cVar2 == '\0') goto LAB_00e8129d;
    }
    lVar1 = *plVar4;
    if (lVar1 != 0) {
      plVar4 = (longlong *)*param_1;
      uVar5 = FUN_00e8b690();
      if (plVar4 == (longlong *)0x0) {
LAB_00e812ea:
        param_1 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar4 + 0x360))();
        cVar2 = FUN_00e85ea0();
        uVar5 = extraout_XMM0_Da_01;
        if (cVar2 == '\0') goto LAB_00e812ea;
      }
      if (*param_1 != 0) goto LAB_00e812ff;
    }
    local_a0 = *param_2;
    local_98 = '\0';
    FUN_019a54a0(uVar5,&local_a0);
    local_38[0] = local_40[0];
    plVar4 = (longlong *)local_40;
    if (local_40[0] == '\0') {
      plVar4 = (longlong *)local_38;
    }
    *(undefined1 *)plVar4 = 0;
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      if (lVar1 == 0) {
        if (*(longlong **)(unaff_RSI + 0x50) == (longlong *)0x0) {
          FUN_00e7ebe0(0);
          plVar4 = unaff_RDI + 1;
          *(undefined1 *)(unaff_RDI + 1) = 0;
          *unaff_RDI = 0;
          if (local_40[0] != '\0') {
            *(undefined1 *)plVar4 = 1;
            plVar4 = (longlong *)local_40;
          }
          *(undefined1 *)plVar4 = 0;
        }
        else {
          local_60 = *param_2;
          local_58 = '\0';
          (**(code **)(**(longlong **)(unaff_RSI + 0x50) + 0x28))(&local_60);
          plVar4 = unaff_RDI + 1;
          *(undefined1 *)(unaff_RDI + 1) = 0;
          *unaff_RDI = 0;
          if (local_40[0] != '\0') {
            *(undefined1 *)plVar4 = 1;
            plVar4 = (longlong *)local_40;
          }
          *(undefined1 *)plVar4 = 0;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_90 = *param_2;
        local_88 = '\0';
        uVar5 = FUN_00c8e4f0();
        if (local_40[0] != '\0') {
          local_40[0] = '\0';
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          uVar5 = FUN_00d50b20();
        }
        local_80 = local_48;
        local_78 = '\0';
        local_70 = *param_2;
        local_68 = '\0';
        FUN_019b43b0(uVar5,&local_70);
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        *unaff_RDI = 0;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = local_48;
      if (local_38[0] == '\0') {
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
    }
  }
  return unaff_RDI;
}


