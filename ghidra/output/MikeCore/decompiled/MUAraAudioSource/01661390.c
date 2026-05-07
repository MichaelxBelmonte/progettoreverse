// Function: FUN_01661390
// Address: 01661390
// Size: 1102 bytes
// Class: MUAraAudioSource
// String references:
//   "GNList"
//   "MUAraAudioSource"
//   "_audioModifications"
//   "MUAraAudioModification"


/* WARNING: Removing unreachable block (ram,0x016613c1) */
/* WARNING: Removing unreachable block (ram,0x016613ca) */
/* WARNING: Removing unreachable block (ram,0x0166147a) */
/* WARNING: Removing unreachable block (ram,0x01661483) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01661390(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar8 = FUN_00d61ea0();
  if ((DAT_0272a630 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_01, iVar5 != 0)) {
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
    uVar8 = ___cxa_guard_release();
  }
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
    local_50 = plVar3;
    local_48 = '\0';
    (**(code **)(*(longlong *)*unaff_RSI + 0x578))(extraout_XMM0_Da_00,&local_50);
    plVar2 = local_40;
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
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 != '\0') {
        if ((DAT_027c8358 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          _DAT_027c82a8 = FUN_0049c750();
          _DAT_027c8290 = "MUAraAudioModification";
          _DAT_027c8298 = 0xb8;
          _DAT_027c82a0 = FUN_0166fbe0;
          _DAT_027c82b0 = 0;
          uRam00000000027c82b8 = 0;
          _DAT_027c82c0 = 0;
          uRam00000000027c82c8 = 0;
          _DAT_027c82d0 = 0;
          uRam00000000027c82d8 = 0;
          _DAT_027c82e0 = 0;
          uRam00000000027c82e8 = 0;
          _DAT_027c82f0 = 0;
          uRam00000000027c82f8 = 0;
          _DAT_027c8300 = 0;
          uRam00000000027c8308 = 0;
          _DAT_027c8310 = 0;
          uRam00000000027c8318 = 0;
          _DAT_027c8320 = 0;
          uRam00000000027c8328 = 0;
          _DAT_027c8330 = 0;
          uRam00000000027c8338 = 0;
          _DAT_027c8340 = 0;
          uRam00000000027c8348 = 0;
          _DAT_027c8350 = 0;
          ___cxa_guard_release();
        }
        cVar4 = FUN_00e8da30();
        pplVar7 = &local_40;
        if (cVar4 == '\0') {
          pplVar7 = (longlong **)&DAT_02802688;
        }
      }
    }
    plVar1 = *(longlong **)(unaff_RDI + 0xb0);
    plVar2 = *pplVar7;
    if (plVar1 != plVar2) {
      if (*(char *)(pplVar7 + 1) == '\0') {
        if (plVar2 == (longlong *)0x0) {
          *(undefined8 *)(unaff_RDI + 0xb0) = 0;
        }
        else {
          FUN_00d50b00();
          plVar1 = *(longlong **)(unaff_RDI + 0xb0);
          *(longlong **)(unaff_RDI + 0xb0) = *pplVar7;
        }
      }
      else {
        *(undefined1 *)(pplVar7 + 1) = 0;
        *(longlong **)(unaff_RDI + 0xb0) = plVar2;
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


