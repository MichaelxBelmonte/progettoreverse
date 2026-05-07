// Function: FUN_0033b9c0
// Address: 0033b9c0
// Size: 1398 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0033b9c0(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong **pplVar4;
  int iVar5;
  longlong *unaff_RDI;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  undefined8 local_90;
  int local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_0009c8e0();
  uVar7 = (**(code **)(*unaff_RDI + 0x4a0))();
  plVar1 = local_a8;
  if (local_a0 == '\0') {
    if (local_a8 == (longlong *)0x0) goto LAB_0033bf2a;
    uVar7 = FUN_00d50b00();
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  else if (local_a8 == (longlong *)0x0) goto LAB_0033bf2a;
  local_a0 = '\0';
  local_a8 = (longlong *)0x0;
  local_98 = plVar1;
  local_90 = 0xffffffff;
  local_88 = 0;
  iVar5 = 0;
  while( true ) {
    iVar6 = 0;
    if (iVar5 != 0) {
      if (iVar5 < 1) {
        iVar6 = -iVar5;
      }
      else {
        local_90 = CONCAT44(local_90._4_4_,(int)local_90 - iVar5);
        FUN_00d23690(uVar7,iVar5);
        local_88 = local_88 + iVar5;
        iVar6 = 0;
      }
      local_90 = CONCAT44(iVar6,(int)local_90);
    }
    lVar3 = (longlong)(int)local_90;
    iVar5 = (int)local_90 + 1;
    local_90 = CONCAT44(local_90._4_4_,iVar5);
    if (*(int *)((longlong)local_98 + 0xc) <= iVar5) break;
    plVar1 = *(longlong **)(local_98[2] + 8 + lVar3 * 8);
    local_a8 = plVar1;
    local_40 = plVar1;
    uVar7 = FUN_000f5df0();
    pplVar4 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar4 = &local_40;
      uVar7 = extraout_XMM0_Da;
      if (cVar2 == '\0') {
        pplVar4 = (longlong **)&DAT_02802688;
      }
    }
    iVar5 = iVar6;
    if (*pplVar4 != (longlong *)0x0) {
      uVar7 = FUN_01e4ec80();
      lVar3 = DAT_02702950;
      if (DAT_02702950 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_c8 = lVar3;
      local_c0 = '\x01';
      FUN_000175c0(uVar7,&local_c8);
      plVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_40 = plVar1;
      local_38 = '\0';
      cVar2 = FUN_00d23d70();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_01e4ec80();
      uVar7 = FUN_00d46300();
      local_80 = local_60;
      local_78 = 0;
      plVar1 = DAT_02702958;
      if (local_58 == '\0') {
        if (local_60 != 0) {
          uVar7 = FUN_00d50b00();
          plVar1 = DAT_02702958;
        }
      }
      else {
        local_58 = '\0';
      }
      local_78 = '\x01';
      DAT_02702958 = plVar1;
      if (plVar1 != (longlong *)0x0) {
        local_78 = '\x01';
        uVar7 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar1;
      uVar7 = FUN_00ca0840(uVar7,&local_40);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        uVar7 = FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        uVar7 = FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        uVar7 = FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        uVar7 = FUN_01e4ec80();
        lVar3 = DAT_02702950;
        if (DAT_02702950 != 0) {
          uVar7 = FUN_00d50b00();
        }
        local_b8 = lVar3;
        local_b0 = '\x01';
        FUN_000175c0(uVar7,&local_b8);
        plVar1 = local_40;
        if ((DAT_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
        pplVar4 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar4 = &local_40;
          if (cVar2 == '\0') {
            pplVar4 = (longlong **)&DAT_02802688;
          }
        }
        local_68 = 0;
        plVar1 = *pplVar4;
        if (*(char *)(pplVar4 + 1) == '\0') {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar4 + 1) = 0;
        }
        local_68 = '\x01';
        local_70 = plVar1;
        uVar7 = FUN_0009ce00();
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          uVar7 = FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar7 = FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          uVar7 = FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          uVar7 = FUN_00d50b20();
        }
        iVar5 = local_90._4_4_;
      }
    }
  }
  FUN_0033c540();
  FUN_00d50b20();
LAB_0033bf2a:
  FUN_003372c0();
  return;
}


