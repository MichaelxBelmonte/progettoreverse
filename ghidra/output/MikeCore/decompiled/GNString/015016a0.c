// Function: FUN_015016a0
// Address: 015016a0
// Size: 1518 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015016a0(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined8 local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar3 = DAT_027c2518;
  if (*(longlong *)(unaff_RSI + 0x28) == 0) {
    if (*(longlong *)(unaff_RSI + 0x20) != 0) {
      if (DAT_027c2518 != 0) {
        FUN_00d50b00();
      }
      local_c0 = lVar3;
      local_b8 = '\x01';
      FUN_00e8a230(1,&local_c0,0);
      plVar9 = local_90;
      if ((DAT_026fdd40 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_026cd0e8 = FUN_00d4fe50();
        DAT_026cd0d0 = "GNDictionary";
        _DAT_026cd0d8 = 0x28;
        _DAT_026cd0e0 = FUN_00022d20;
        _DAT_026cd0f0 = 0;
        uRam00000000026cd0f8 = 0;
        _DAT_026cd100 = 0;
        _DAT_026cd178 = 0;
        uRam00000000026cd180 = 0;
        _DAT_026cd188 = 0;
        DAT_026cd18a = 6;
        _DAT_026cd108 = 0;
        uRam00000000026cd110 = 0;
        _DAT_026cd118 = 0;
        uRam00000000026cd120 = 0;
        _DAT_026cd128 = 0;
        uRam00000000026cd130 = 0;
        _DAT_026cd138 = 0;
        uRam00000000026cd140 = 0;
        _DAT_026cd148 = 0;
        uRam00000000026cd150 = 0;
        _DAT_026cd158 = 0;
        uRam00000000026cd160 = 0;
        _DAT_026cd168 = 0;
        uRam00000000026cd170 = 0;
        DAT_026cd193 = 0;
        _DAT_026cd18b = 0;
        ___cxa_guard_release();
      }
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 != '\0') {
          if ((DAT_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
          cVar5 = FUN_00e8db60();
          pplVar8 = &local_90;
          if (cVar5 == '\0') {
            pplVar8 = (longlong **)&DAT_02802688;
          }
        }
      }
      plVar9 = *pplVar8;
      if (plVar9 == (longlong *)0x0) {
        bVar2 = true;
        bVar1 = true;
        plVar9 = (longlong *)0x0;
      }
      else {
        if (*(char *)(pplVar8 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar8 + 1) = 0;
        }
        bVar2 = false;
        bVar1 = false;
      }
      if ((local_88 != '\0') && (bVar1 = bVar2, local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (longlong *)0x0) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (bVar1) {
          FUN_00d50b00();
          *unaff_RDI = (longlong)plVar9;
        }
        else {
          *unaff_RDI = (longlong)plVar9;
        }
        goto LAB_01501959;
      }
    }
    lVar3 = DAT_027c2520;
    if (DAT_027c2520 != 0) {
      FUN_00d50b00();
    }
    lVar4 = DAT_027c2528;
    local_b0 = lVar3;
    local_a8 = '\x01';
    if (DAT_027c2528 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_027c24e8;
    local_a0 = lVar4;
    local_98 = '\x01';
    if (DAT_027c24e8 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar3;
    local_c8 = *(undefined8 *)(unaff_RSI + 0x10);
    uVar10 = FUN_00083ea0(2,&local_c8);
    FUN_00e972c0(uVar10,&local_90);
    local_90 = (longlong *)&DAT_0253d630;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    local_90 = &DAT_024c5048;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar7 + 0x18))();
    uVar10 = FUN_00bdfdc0();
    local_60 = local_40;
    local_58 = 0;
    plVar9 = DAT_027c2508;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        uVar10 = FUN_00d50b00();
        plVar9 = DAT_027c2508;
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    DAT_027c2508 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      local_58 = '\x01';
      uVar10 = FUN_00d50b00();
    }
    local_88 = '\0';
    local_90 = plVar9;
    FUN_00ca0840(uVar10,&local_90);
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar10 = FUN_00bdfdf0();
    local_50 = local_40;
    local_48 = 0;
    plVar9 = DAT_027c2510;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        uVar10 = FUN_00d50b00();
        plVar9 = DAT_027c2510;
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    DAT_027c2510 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      local_48 = '\x01';
      uVar10 = FUN_00d50b00();
    }
    local_88 = '\0';
    local_90 = plVar9;
    FUN_00ca0840(uVar10,&local_90);
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    *unaff_RDI = (longlong)plVar7;
LAB_01501959:
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}


