// Function: FUN_00331550
// Address: 00331550
// Size: 1389 bytes
// Class: GNModuleView
// String references:
//   "GNModuleView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00331550(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong **pplVar5;
  int iVar6;
  longlong *unaff_RDI;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  FUN_01e534b0();
  FUN_01e53c20();
  (**(code **)(*local_68 + 0x4a0))();
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_48 = plVar1;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar6 = -local_40._4_4_;
        }
        else {
          iVar6 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar6);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar6 = 0;
        }
        local_40 = CONCAT44(iVar6,(int)local_40);
      }
      lVar3 = (longlong)(int)local_40;
      iVar6 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (*(int *)((longlong)local_48 + 0xc) <= iVar6) break;
      plVar1 = *(longlong **)(local_48[2] + 8 + lVar3 * 8);
      local_58 = plVar1;
      if ((DAT_026e5340 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
        ___cxa_guard_release();
      }
      pplVar5 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_58;
        if (cVar2 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
      }
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (*pplVar5 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_003316c1;
        }
      }
      else {
        *(undefined1 *)(pplVar5 + 1) = 0;
        if (*pplVar5 != (longlong *)0x0) {
LAB_003316c1:
          FUN_01ebbf20();
          plVar1 = local_d8;
          FUN_00335590();
          pplVar5 = (longlong **)&DAT_02802688;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar5 = &local_d8;
            if (cVar2 == '\0') {
              pplVar5 = (longlong **)&DAT_02802688;
            }
          }
          plVar1 = *pplVar5;
          if (*(char *)(pplVar5 + 1) == '\0') {
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pplVar5 + 1) = 0;
          }
          local_60 = '\0';
          local_68 = plVar1;
          FUN_00d21140();
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
    }
    FUN_000a9680();
    FUN_00d50b20();
  }
  if ((longlong *)unaff_RDI[0x1d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x1d] + 0x998))();
  }
  (**(code **)(*unaff_RDI + 0x5d8))();
  plVar1 = local_58;
  local_c8 = DAT_026e3e50;
  if (DAT_026e3e50 != 0) {
    FUN_00d50b00();
  }
  local_c0 = '\x01';
  cVar2 = (**(code **)(*plVar1 + 0x50))();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    local_b0 = '\0';
    local_b8 = 0;
    (**(code **)(*unaff_RDI + 0x5e0))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  local_70 = 0;
  FUN_00d50b00();
  local_a8 = DAT_026d88e0;
  local_70 = '\x01';
  local_78 = unaff_RDI;
  if (DAT_026d88e0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026f6cf0;
  local_a0 = '\x01';
  if (DAT_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar3;
  local_90 = '\x01';
  local_88 = 0;
  local_80 = '\0';
  FUN_000bf690(&local_98,&local_a8,&local_88);
  plVar1 = (longlong *)unaff_RDI[0x29];
  plVar4 = plVar1;
  if (plVar1 == local_58) goto LAB_00331a4d;
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      goto LAB_003319d0;
    }
    FUN_00d50b00();
    plVar1 = (longlong *)unaff_RDI[0x29];
    unaff_RDI[0x29] = (longlong)local_58;
    plVar4 = local_58;
  }
  else {
    local_50 = '\0';
    plVar4 = local_58;
LAB_003319d0:
    unaff_RDI[0x29] = (longlong)plVar4;
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar4 = local_58;
  }
LAB_00331a4d:
  if ((local_50 != '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00331e40();
  return;
}


