// Function: FUN_0124e860
// Address: 0124e860
// Size: 927 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void FUN_0124e860(int64_t param_1,int64_t *param_2)

{
  char cVar1;
  uint32_t uVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t *this_ptr;
  int iVar11;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  
  plVar9 = (int64_t *)*param_2;
  if ((g_026fdd70 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026e3238 = FUN_00115af0();
    g_026e3220 = "MUAudioFileSource";
    g_026e3228 = 0xa0;
    g_026e3230 = FUN_00136df0;
    g_026e3240 = 0;
    ram_00000000026e3248 = 0;
    g_026e3250 = 0;
    ram_00000000026e3258 = 0;
    g_026e3260 = 0;
    ram_00000000026e3268 = 0;
    g_026e3270 = 0;
    ram_00000000026e3278 = 0;
    g_026e3280 = 0;
    ram_00000000026e3288 = 0;
    g_026e3290 = 0;
    ram_00000000026e3298 = 0;
    g_026e32a0 = 0;
    ram_00000000026e32a8 = 0;
    g_026e32b0 = 0;
    ram_00000000026e32b8 = 0;
    g_026e32c0 = 0;
    ram_00000000026e32c8 = 0;
    g_026e32d0 = 0;
    ram_00000000026e32d8 = 0;
    g_026e32e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (int64_t *)0x0) {
    plVar9 = &g_02802688;
    lVar5 = g_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar1 = FUN_00e85ea0();
    plVar9 = param_2;
    if (cVar1 == '\0') {
      plVar9 = &g_02802688;
    }
    lVar5 = *plVar9;
  }
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    pvVar4 = _pthread_getspecific((void*)plVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar5 = FUN_0123c2d0();
  }
  iVar11 = 0;
  uVar2 = (**(code **)(*this_ptr + 0x380))();
  iVar3 = 0x1000;
  uVar6 = FUN_00aea410(extraout_XMM0_Da,uVar2);
  while( true ) {
    plVar10 = (int64_t *)*param_2;
    pvVar4 = _pthread_getspecific((void*)plVar9);
    if (pvVar4 != (void *)0x0) {
      plVar10 = (int64_t *)*param_2;
      lVar7 = FUN_00e8b990();
      if (lVar7 != 0) {
        plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
    }
    lVar7 = (**(code **)(*plVar10 + 0x378))();
    if (lVar7 <= iVar11) break;
    plVar10 = (int64_t *)*param_2;
    pvVar4 = _pthread_getspecific((void*)plVar9);
    if (pvVar4 != (void *)0x0) {
      plVar10 = (int64_t *)*param_2;
      lVar7 = FUN_00e8b990();
      if (lVar7 != 0) {
        plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
    }
    lVar7 = (**(code **)(*plVar10 + 0x378))();
    uVar2 = extraout_XMM0_Da_00;
    if (lVar7 < iVar3 + iVar11) {
      plVar10 = (int64_t *)*param_2;
      pvVar4 = _pthread_getspecific((void*)plVar9);
      if (pvVar4 != (void *)0x0) {
        plVar10 = (int64_t *)*param_2;
        lVar7 = FUN_00e8b990();
        if (lVar7 != 0) {
          plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
      }
      iVar3 = (**(code **)(*plVar10 + 0x378))();
      iVar3 = iVar3 - iVar11;
      uVar2 = extraout_XMM0_Da_01;
    }
    lVar7 = iVar11 + lVar5;
    cVar1 = (**(code **)(*this_ptr + 0x3b0))(uVar2,(int64_t)iVar3);
    if (cVar1 != '\0') {
      plVar10 = (int64_t *)*param_2;
      pvVar4 = _pthread_getspecific((void*)plVar9);
      if (pvVar4 != (void *)0x0) {
        plVar10 = (int64_t *)*param_2;
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
      }
      uVar2 = (**(code **)(*this_ptr + 0x3a0))();
      (**(code **)(*plVar10 + 0x388))(0,(int)g_0238fee8,uVar2,lVar7);
      uVar2 = (**(code **)(*this_ptr + 0x3a0))();
      plVar9 = (int64_t *)0x0;
      (**(code **)(*this_ptr + 0x440))(0,uVar6,uVar2,param_1 + lVar7);
    }
    iVar11 = iVar11 + iVar3;
  }
  uVar2 = (**(code **)(*this_ptr + 0x380))();
  FUN_00aea540(uVar2,iVar3);
  return;
}

