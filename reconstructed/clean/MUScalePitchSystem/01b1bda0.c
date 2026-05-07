// Function: FUN_01b1bda0
// Address: 01b1bda0
// Size: 727 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


uint64_t FUN_01b1bda0(void* param_1,char param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined7 uVar7;
  uint64_t uVar6;
  int64_t this_ptr;
  int64_t in_stack_ffffffffffffffa0;
  char local_58;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)(this_ptr + 0x316) == '\0') || (*(char *)(this_ptr + 0x315) == '\0')) {
LAB_01b1be54:
    uVar6 = 0;
  }
  else {
    FUN_01ad3cb0();
    if (local_58 == '\0') {
      if (in_stack_ffffffffffffffa0 == 0) goto LAB_01b1be54;
      FUN_00d50b00();
      if (*(int *)(this_ptr + 400) == -1000000) goto LAB_01b1be02;
LAB_01b1be22:
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      if ((local_58 == '\0') && (in_stack_ffffffffffffffa0 != 0)) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_0174a9c0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b790();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_01770ea0();
      if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != 0)) {
        FUN_00d50b20();
      }
      uVar7 = (undefined7)((uint64_t)this_ptr >> 8);
      if (param_2 == '\0') {
        if (*(int64_t *)(this_ptr + 0x1a0) == 0) {
          uVar6 = 0;
        }
        else {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01736e30();
          lVar2 = *(int64_t *)(this_ptr + 0x1a0);
          if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != 0)) {
            FUN_00d50b20();
          }
          uVar6 = CONCAT71(uVar7,lVar2 != in_stack_ffffffffffffffa0 && iVar3 != iVar4);
        }
      }
      else {
        FUN_00d50b00();
        *(int *)(this_ptr + 0x2fc) = *(int *)(this_ptr + 0x2fc) + 1;
        FUN_01b05670();
        FUN_01af6500();
        FUN_00d50b20();
        uVar6 = CONCAT71(uVar7,1);
      }
      if (in_stack_ffffffffffffffa0 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (in_stack_ffffffffffffffa0 == 0) goto LAB_01b1be54;
      if (*(int *)(this_ptr + 400) != -1000000) goto LAB_01b1be22;
LAB_01b1be02:
      uVar6 = 0;
    }
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar1) {
                        ___stack_chk_fail();
  }
  return uVar6 & 0xffffffff;
}

