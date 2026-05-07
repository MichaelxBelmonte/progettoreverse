// Function: FUN_01671370
// Address: 01671370
// Size: 1437 bytes
// Class: MUAraAudioSource
// String references:
//   "GNList"
//   "MUAraAudioSource"
//   "_musicalContextData"


/* WARNING: Removing unreachable block (ram,0x016713b0) */
/* WARNING: Removing unreachable block (ram,0x016713bc) */
/* WARNING: Removing unreachable block (ram,0x0167146a) */
/* WARNING: Removing unreachable block (ram,0x01671476) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01671370(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong **pplVar7;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00d61ea0();
  uVar8 = FUN_016be450();
  lVar6 = FUN_00e85ef0(uVar8,1);
  if (lVar6 == 0) {
    FUN_00e858c0(extraout_XMM0_Da,1);
  }
  FUN_00d74120();
  plVar3 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x590))();
  if (cVar4 != '\0') {
    local_b0 = plVar3;
    local_a8 = '\0';
    (**(code **)(*(longlong *)*unaff_RSI + 0x578))(extraout_XMM0_Da_00,&local_b0);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    local_a0 = plVar3;
    local_98 = '\0';
    (**(code **)(*unaff_RDI + 0x1f0))(0,&local_a0,0);
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar6 = DAT_027c8380;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027c8380 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar6;
  local_88 = '\x01';
  iVar5 = (**(code **)(*plVar1 + 0x598))();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = DAT_026fce90;
  if (iVar5 < 3) {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_026fce90 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar6;
    local_78 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x590))();
    uVar8 = extraout_XMM0_Da_01;
    if ((local_78 != '\0') && (local_80 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    lVar6 = DAT_026fce90;
    if (cVar4 != '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_026fce90 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_70 = lVar6;
      local_68 = '\x01';
      (**(code **)(*plVar1 + 0x578))(uVar8,&local_70);
      plVar1 = local_40;
      if ((DAT_027048b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        _DAT_026cd478 = FUN_00d4fe50();
        DAT_026cd460 = "GNList";
        _DAT_026cd468 = 0x20;
        _DAT_026cd470 = FUN_00018210;
        _DAT_026cd480 = 0;
        uRam00000000026cd488 = 0;
        _DAT_026cd490 = 0;
        _DAT_026cd508 = 0;
        uRam00000000026cd510 = 0;
        _DAT_026cd518 = 0;
        DAT_026cd51a = 6;
        _DAT_026cd498 = 0;
        uRam00000000026cd4a0 = 0;
        _DAT_026cd4a8 = 0;
        uRam00000000026cd4b0 = 0;
        _DAT_026cd4b8 = 0;
        uRam00000000026cd4c0 = 0;
        _DAT_026cd4c8 = 0;
        uRam00000000026cd4d0 = 0;
        _DAT_026cd4d8 = 0;
        uRam00000000026cd4e0 = 0;
        _DAT_026cd4e8 = 0;
        uRam00000000026cd4f0 = 0;
        _DAT_026cd4f8 = 0;
        uRam00000000026cd500 = 0;
        DAT_026cd523 = 0;
        _DAT_026cd51b = 0;
        ___cxa_guard_release();
      }
      pplVar7 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 != '\0') {
          if ((DAT_0272a630 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
            _DAT_02708978 = FUN_0049c750();
            _DAT_02708960 = "MUAraAudioSource";
            _DAT_02708968 = 0x138;
            _DAT_02708970 = FUN_0049c720;
            _DAT_02708980 = 0;
            uRam0000000002708988 = 0;
            _DAT_02708990 = 0;
            uRam0000000002708998 = 0;
            _DAT_027089a0 = 0;
            uRam00000000027089a8 = 0;
            _DAT_027089b0 = 0;
            uRam00000000027089b8 = 0;
            _DAT_027089c0 = 0;
            uRam00000000027089c8 = 0;
            _DAT_027089d0 = 0;
            uRam00000000027089d8 = 0;
            _DAT_027089e0 = 0;
            uRam00000000027089e8 = 0;
            _DAT_027089f0 = 0;
            uRam00000000027089f8 = 0;
            _DAT_02708a00 = 0;
            uRam0000000002708a08 = 0;
            _DAT_02708a10 = 0;
            uRam0000000002708a18 = 0;
            _DAT_02708a20 = 0;
            ___cxa_guard_release();
          }
          cVar4 = FUN_00e8da30();
          pplVar7 = &local_40;
          if (cVar4 == '\0') {
            pplVar7 = (longlong **)&DAT_02802688;
          }
        }
      }
      plVar2 = (longlong *)unaff_RDI[9];
      plVar1 = *pplVar7;
      if (plVar2 != plVar1) {
        if (*(char *)(pplVar7 + 1) == '\0') {
          if (plVar1 == (longlong *)0x0) {
            unaff_RDI[9] = 0;
          }
          else {
            FUN_00d50b00();
            plVar2 = (longlong *)unaff_RDI[9];
            unaff_RDI[9] = (longlong)*pplVar7;
          }
        }
        else {
          *(undefined1 *)(pplVar7 + 1) = 0;
          unaff_RDI[9] = (longlong)plVar1;
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  lVar6 = DAT_027c8380;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027c8380 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar6;
  local_58 = '\x01';
  iVar5 = (**(code **)(*plVar1 + 0x598))();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (iVar5 < 2) {
    *(undefined1 *)((longlong)unaff_RDI + 0x51) = 1;
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


