// Function: FUN_014d5a80
// Address: 014d5a80
// Size: 789 bytes
// Class: MUAudioSourcePrincipalItem
// String references:
//   "MUAudioSourcePrincipalItem"

void* FUN_014d5a80(float param_1,int64_t *param_2)

{
  char cVar1;
  int iVar2;
  void*puVar3;
  int64_t lVar4;
  void *pvVar5;
  void* pVar6;
  int64_t **pplVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar8;
  int64_t *plVar9;
  float fVar10;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  int64_t *local_68;
  uint8_t local_60;
  int64_t local_58;
  int local_50;
  int iStack_4c;
  int local_48;
  float local_40;
  float local_3c;
  void*local_38;
  
  local_40 = param_1;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  local_38 = puVar3;
  (*g_02572370)();
  fVar10 = (float)(**(code **)(*arg1 + 0x3e0))();
  local_3c = fVar10;
  if (*param_2 != 0) {
    local_60 = 0;
    local_68 = (int64_t *)0x0;
    local_58 = *param_2;
    local_50 = -1;
    iStack_4c = 0;
    local_48 = 0;
    while( true ) {
      iVar2 = iStack_4c;
      if (iStack_4c != 0) {
        if (iStack_4c < 1) {
          iStack_4c = -iStack_4c;
        }
        else {
          local_50 = local_50 - iStack_4c;
          fVar10 = (float)FUN_00d23690(fVar10,iStack_4c);
          local_48 = local_48 + iVar2;
          iStack_4c = 0;
        }
      }
      lVar4 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(local_58 + 0xc) <= local_50) break;
      plVar9 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + 8 + lVar4 * 8);
      local_68 = plVar9;
      if ((g_027c0170 == '\0') &&
         (iVar2 = ___cxa_guard_acquire(), fVar10 = extraout_XMM0_Da_02, iVar2 != 0)) {
        g_02790158 = FUN_007ef2d0();
        g_02790140 = "MUAudioSourcePrincipalItem";
        g_02790148 = 0x138;
        g_02790150 = FUN_010fe5c0;
        g_02790160 = 0;
        ram_0000000002790168 = 0;
        g_02790170 = 0;
        ram_0000000002790178 = 0;
        g_02790180 = 0;
        ram_0000000002790188 = 0;
        g_02790190 = 0;
        ram_0000000002790198 = 0;
        g_027901a0 = 0;
        ram_00000000027901a8 = 0;
        g_027901b0 = 0;
        ram_00000000027901b8 = 0;
        g_027901c0 = 0;
        ram_00000000027901c8 = 0;
        g_027901d0 = 0;
        ram_00000000027901d8 = 0;
        g_027901e0 = 0;
        ram_00000000027901e8 = 0;
        g_027901f0 = 0;
        ram_00000000027901f8 = 0;
        g_02790200 = 0;
        fVar10 = (float)___cxa_guard_release();
      }
      pplVar7 = (int64_t **)&g_02802688;
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar7 = &local_68;
        fVar10 = extraout_XMM0_Da;
        if (cVar1 == '\0') {
          pplVar7 = (int64_t **)&g_02802688;
        }
      }
      plVar9 = *pplVar7;
      if ((plVar9 != (int64_t *)0x0) && (plVar9 != arg1)) {
        pvVar5 = _pthread_getspecific((void*)pplVar7);
        pVar6 = (void*)pplVar7;
        plVar8 = plVar9;
        if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar8 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        cVar1 = (**(code **)(*plVar8 + 1000))();
        fVar10 = extraout_XMM0_Da_00;
        if (cVar1 != '\0') {
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_014bc070();
          fVar10 = extraout_XMM0_Da_01;
          if (cVar1 == '\0') {
            pvVar5 = _pthread_getspecific(pVar6);
            if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
            fVar10 = (float)(**(code **)(*plVar9 + 0x3e0))();
            fVar10 = (float)((uint)(fVar10 - local_3c) & g_02390140);
            if (fVar10 < local_40) {
              fVar10 = (float)FUN_00d21140();
            }
          }
        }
      }
    }
    FUN_01481520();
  }
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

