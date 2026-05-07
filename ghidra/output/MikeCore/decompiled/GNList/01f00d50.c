// Function: FUN_01f00d50
// Address: 01f00d50
// Size: 882 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNInspector"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_01f00d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong **pplVar6;
  undefined8 *unaff_RDI;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong in_stack_ffffffffffffff98;
  longlong *plVar8;
  char local_60 [8];
  longlong local_58;
  int local_50;
  int iStack_4c;
  int local_48;
  longlong *local_40;
  char local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  uVar7 = FUN_00ca1380();
  local_40 = (longlong *)CONCAT71(local_40._1_7_,local_60[0]);
  pplVar6 = (longlong **)local_60;
  if (local_60[0] == '\0') {
    pplVar6 = &local_40;
  }
  *(undefined1 *)pplVar6 = 0;
  if ((local_60[0] != '\0') && (in_stack_ffffffffffffff98 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((char)local_40 == '\0') {
    if (in_stack_ffffffffffffff98 == 0) goto LAB_01f010b8;
    uVar7 = FUN_00d50b00();
  }
  else if (in_stack_ffffffffffffff98 == 0) goto LAB_01f010b8;
  local_60[0] = 0;
  plVar8 = (longlong *)0x0;
  local_50 = -1;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = in_stack_ffffffffffffff98;
  while( true ) {
    iVar3 = iStack_4c;
    if (iStack_4c != 0) {
      if (iStack_4c < 1) {
        iStack_4c = -iStack_4c;
      }
      else {
        local_50 = local_50 - iStack_4c;
        uVar7 = FUN_00d23690(uVar7,iStack_4c,param_3,param_4,plVar8);
        local_48 = local_48 + iVar3;
        iStack_4c = 0;
      }
    }
    lVar5 = (longlong)local_50;
    local_50 = local_50 + 1;
    if (*(int *)(local_58 + 0xc) <= local_50) break;
    plVar1 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar5 * 8);
    local_40 = plVar1;
    plVar8 = plVar1;
    if ((DAT_027048b0 == '\0') &&
       (iVar3 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_01, iVar3 != 0)) {
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
      uVar7 = ___cxa_guard_release();
    }
    pplVar6 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar6 = (longlong **)&DAT_02802688;
      uVar7 = extraout_XMM0_Da;
      if (cVar2 != '\0') {
        if ((DAT_02704170 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          _DAT_026d91c8 = FUN_00015ff0();
          _DAT_026d91b0 = "GNInspector";
          _DAT_026d91b8 = 0xb8;
          _DAT_026d91c0 = FUN_00018410;
          _DAT_026d91d0 = 0;
          uRam00000000026d91d8 = 0;
          _DAT_026d91e0 = 0;
          uRam00000000026d91e8 = 0;
          _DAT_026d91f0 = 0;
          uRam00000000026d91f8 = 0;
          _DAT_026d9200 = 0;
          uRam00000000026d9208 = 0;
          _DAT_026d9210 = 0;
          uRam00000000026d9218 = 0;
          _DAT_026d9220 = 0;
          uRam00000000026d9228 = 0;
          _DAT_026d9230 = 0;
          uRam00000000026d9238 = 0;
          _DAT_026d9240 = 0;
          uRam00000000026d9248 = 0;
          _DAT_026d9250 = 0;
          uRam00000000026d9258 = 0;
          _DAT_026d9260 = 0;
          uRam00000000026d9268 = 0;
          _DAT_026d9270 = 0;
          ___cxa_guard_release();
        }
        cVar2 = FUN_00e8da30();
        pplVar6 = &local_40;
        uVar7 = extraout_XMM0_Da_00;
        if (cVar2 == '\0') {
          pplVar6 = (longlong **)&DAT_02802688;
        }
      }
    }
    if (*pplVar6 != (longlong *)0x0) {
      local_38 = '\0';
      local_40 = plVar8;
      uVar7 = FUN_00d23480();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
    }
  }
  FUN_01f01470();
  FUN_00d50b20();
LAB_01f010b8:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


