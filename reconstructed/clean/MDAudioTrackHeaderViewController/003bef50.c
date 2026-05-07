// Function: FUN_003bef50
// Address: 003bef50
// Size: 786 bytes
// Class: MDAudioTrackHeaderViewController
// String references:
//   "MDAudioTrackHeaderViewController"

void*
FUN_003bef50(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  char cVar2;
  void*puVar3;
  int64_t **pplVar4;
  int iVar5;
  void*this_ptr;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_90;
  char local_88;
  int64_t in_stack_ffffffffffffff88;
  uint64_t uVar7;
  char in_stack_ffffffffffffff90;
  uint8_t uVar8;
  int iVar9;
  uint64_t uVar10;
  int iVar11;
  int64_t lVar12;
  int64_t *local_40;
  char local_38;
  
  FUN_003c0750();
  if ((in_stack_ffffffffffffff90 == '\0') && (in_stack_ffffffffffffff88 != 0)) {
    FUN_00d50b00();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  uVar6 = (*g_02572370)();
  if (in_stack_ffffffffffffff88 == 0) {
    *this_ptr = puVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    uVar10 = 0xffffffff;
    iVar11 = 0;
    iVar5 = 0;
    lVar12 = in_stack_ffffffffffffff88;
    while( true ) {
      if (iVar5 != 0) {
        if (iVar5 < 1) {
          iVar5 = -iVar5;
        }
        else {
          uVar10 = (uint64_t)(uint)((int)uVar10 - iVar5);
          FUN_00d23690(uVar6,iVar5,param_3,param_4,uVar7,uVar8,in_stack_ffffffffffffff88,uVar10,
                       iVar11,puVar3,lVar12);
          iVar11 = iVar11 + iVar5;
          iVar5 = 0;
        }
        uVar10 = CONCAT44(iVar5,(int)uVar10);
      }
      iVar9 = (int)uVar10;
      iVar5 = iVar9 + 1;
      uVar10 = CONCAT44((int)(uVar10 >> 0x20),iVar5);
      if (*(int *)(in_stack_ffffffffffffff88 + 0xc) <= iVar5) break;
      uVar7 = *(void*)
               (*(int64_t *)(in_stack_ffffffffffffff88 + 0x10) + 8 + (int64_t)iVar9 * 8);
      uVar6 = FUN_01bc1260();
      plVar1 = local_40;
      // [STATIC_INIT: property registration]
      pplVar4 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar4 = &local_40;
        uVar6 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          pplVar4 = (int64_t **)&g_02802688;
        }
      }
      plVar1 = *pplVar4;
      if (*(char *)(pplVar4 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          uVar6 = FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar4 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar6 = FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_003ba530();
        plVar1 = local_40;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_003ba530();
          if (local_88 == '\0') {
            if (local_90 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          local_40 = local_90;
          local_38 = '\0';
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_90 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        uVar6 = FUN_00d50b20();
      }
      iVar5 = (int)(uVar10 >> 0x20);
    }
    FUN_002e0650();
    *this_ptr = puVar3;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  return this_ptr;
}

