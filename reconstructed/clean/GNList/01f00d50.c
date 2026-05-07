// Function: FUN_01f00d50
// Address: 01f00d50
// Size: 882 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNInspector"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void*
FUN_01f00d50(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  void*this_ptr;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t in_stack_ffffffffffffff98;
  int64_t *plVar8;
  char local_60 [8];
  int64_t local_58;
  int local_50;
  int iStack_4c;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  uVar7 = FUN_00ca1380();
  local_40 = (int64_t *)CONCAT71(local_40._1_7_,local_60[0]);
  pplVar6 = (int64_t **)local_60;
  if (local_60[0] == '\0') {
    pplVar6 = &local_40;
  }
  *(void*)pplVar6 = 0;
  if ((local_60[0] != '\0') && (in_stack_ffffffffffffff98 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((char)local_40 == '\0') {
    if (in_stack_ffffffffffffff98 == 0) goto LAB_01f010b8;
    uVar7 = FUN_00d50b00();
  }
  else if (in_stack_ffffffffffffff98 == 0) goto LAB_01f010b8;
  local_60[0] = 0;
  plVar8 = (int64_t *)0x0;
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
    lVar5 = (int64_t)local_50;
    local_50 = local_50 + 1;
    if (*(int *)(local_58 + 0xc) <= local_50) break;
    plVar1 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + 8 + lVar5 * 8);
    local_40 = plVar1;
    plVar8 = plVar1;
    if ((g_027048b0 == '\0') &&
       (iVar3 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_01, iVar3 != 0)) {
      g_026cd478 = FUN_00d4fe50();
      g_026cd460 = "GNList";
      g_026cd468 = 0x20;
      g_026cd470 = FUN_00018210;
      g_026cd480 = 0;
      ram_00000000026cd488 = 0;
      g_026cd490 = 0;
      g_026cd508 = 0;
      ram_00000000026cd510 = 0;
      g_026cd518 = 0;
      g_026cd51a = 6;
      g_026cd498 = 0;
      ram_00000000026cd4a0 = 0;
      g_026cd4a8 = 0;
      ram_00000000026cd4b0 = 0;
      g_026cd4b8 = 0;
      ram_00000000026cd4c0 = 0;
      g_026cd4c8 = 0;
      ram_00000000026cd4d0 = 0;
      g_026cd4d8 = 0;
      ram_00000000026cd4e0 = 0;
      g_026cd4e8 = 0;
      ram_00000000026cd4f0 = 0;
      g_026cd4f8 = 0;
      ram_00000000026cd500 = 0;
      g_026cd523 = 0;
      g_026cd51b = 0;
      uVar7 = ___cxa_guard_release();
    }
    pplVar6 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar6 = (int64_t **)&g_02802688;
      uVar7 = extraout_XMM0_Da;
      if (cVar2 != '\0') {
        if ((g_02704170 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_026d91c8 = FUN_00015ff0();
          g_026d91b0 = "GNInspector";
          g_026d91b8 = 0xb8;
          g_026d91c0 = FUN_00018410;
          g_026d91d0 = 0;
          ram_00000000026d91d8 = 0;
          g_026d91e0 = 0;
          ram_00000000026d91e8 = 0;
          g_026d91f0 = 0;
          ram_00000000026d91f8 = 0;
          g_026d9200 = 0;
          ram_00000000026d9208 = 0;
          g_026d9210 = 0;
          ram_00000000026d9218 = 0;
          g_026d9220 = 0;
          ram_00000000026d9228 = 0;
          g_026d9230 = 0;
          ram_00000000026d9238 = 0;
          g_026d9240 = 0;
          ram_00000000026d9248 = 0;
          g_026d9250 = 0;
          ram_00000000026d9258 = 0;
          g_026d9260 = 0;
          ram_00000000026d9268 = 0;
          g_026d9270 = 0;
          ___cxa_guard_release();
        }
        cVar2 = FUN_00e8da30();
        pplVar6 = &local_40;
        uVar7 = extraout_XMM0_Da_00;
        if (cVar2 == '\0') {
          pplVar6 = (int64_t **)&g_02802688;
        }
      }
    }
    if (*pplVar6 != (int64_t *)0x0) {
      local_38 = '\0';
      local_40 = plVar8;
      uVar7 = FUN_00d23480();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
    }
  }
  FUN_01f01470();
  FUN_00d50b20();
LAB_01f010b8:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

