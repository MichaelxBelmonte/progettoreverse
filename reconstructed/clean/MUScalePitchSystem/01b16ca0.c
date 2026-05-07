// Function: FUN_01b16ca0
// Address: 01b16ca0
// Size: 615 bytes
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


uint64_t FUN_01b16ca0(void* param_1,char param_2)

{
  char cVar1;
  uint32_t uVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t this_ptr;
  uint64_t unaff_R15;
  float fVar7;
  int64_t local_70;
  char local_68;
  int64_t *in_stack_ffffffffffffffa0;
  char local_58;
  
  lVar3 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  cVar1 = *(char *)(this_ptr + 0x315);
  if (cVar1 == '\0') goto LAB_01b16ee0;
  FUN_01ad3cb0();
  if (local_58 == '\0') {
    if (in_stack_ffffffffffffffa0 == (int64_t *)0x0) goto LAB_01b16ee0;
    FUN_00d50b00();
    if (in_stack_ffffffffffffffa0 != (int64_t *)0x0) goto LAB_01b16d0e;
LAB_01b16d9f:
    if (in_stack_ffffffffffffffa0 == (int64_t *)0x0) goto LAB_01b16ee0;
  }
  else {
    if (in_stack_ffffffffffffffa0 == (int64_t *)0x0) goto LAB_01b16d9f;
LAB_01b16d0e:
    if ((param_2 == '\0') || (*(int64_t *)(this_ptr + 0x220) == 0)) goto LAB_01b16d9f;
    FUN_00d50b00();
    *(int *)(this_ptr + 0x2fc) = *(int *)(this_ptr + 0x2fc) + 1;
    if (*(int *)(this_ptr + 0x184) != *(int *)(this_ptr + 400)) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b790();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = *(void*)(this_ptr + 400);
      (**(code **)(**(int64_t **)(this_ptr + 0x220) + 0x930))();
      fVar7 = (float)_logf();
      cVar4 = FUN_017766f0(fVar7 * g_02394208,uVar2);
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        FUN_01ad6540();
        FUN_01b07460();
        FUN_01b06a50();
        pvVar5 = _pthread_getspecific(param_1);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          in_stack_ffffffffffffffa0 =
               (int64_t *)in_stack_ffffffffffffffa0[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        (**(code **)(*in_stack_ffffffffffffffa0 + 0x3a0))();
        FUN_01aada00();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01af6500();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01b16ee0:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar3) {
                        ___stack_chk_fail();
  }
  return CONCAT71((int7)((uint64_t)unaff_R15 >> 8),cVar1) & 0xffffffff;
}

