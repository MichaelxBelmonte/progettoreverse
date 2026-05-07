// Function: FUN_01685a90
// Address: 01685a90
// Size: 1281 bytes
// Class: Unknown
// String references:
//   "tuningsEntryCount == 1"
//   "tuningEntry != NULL"

void* FUN_01685a90(void* param_1)

{
  void* pVar1;
  code *pcVar2;
  int iVar3;
  void*puVar4;
  int64_t *plVar5;
  void *pvVar6;
  void*puVar7;
  int64_t lVar8;
  int64_t *plVar9;
  uint uVar10;
  void* pVar11;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_98;
  char local_90;
  
  lVar12 = *(int64_t *)(*(int64_t *)(arg1 + 0x30) + 0x30);
  iVar3 = (**(code **)(lVar12 + 0x38))();
  uVar13 = extraout_XMM0_Da;
  if ((iVar3 == 1) || (uVar13 = FUN_016aea20(extraout_XMM0_Da,"tuningsEntryCount == 1"), 0 < iVar3))
  {
    puVar4 = (void*)(**(code **)(lVar12 + 0x40))(uVar13,0);
    if (puVar4 != (void*)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_01a016a0();
      (**(code **)(*plVar5 + 0x18))();
      iVar3 = puVar4[1];
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = iVar3 * 7;
      iVar3 = iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 1) - (iVar3 >> 0x1f)) * -0xc;
      uVar10 = iVar3 >> 0x1f & 0xc;
      plVar9 = (int64_t *)(uint64_t)uVar10;
      FUN_01770300();
      pvVar6 = _pthread_getspecific((void*)plVar9);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01770230((float)(int)(uVar10 + iVar3 + 0x3c) * g_023908e0);
      pcVar2 = g_025ffd78;
      lVar12 = 0;
      do {
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &g_025ffd60;
        puVar7[7] = 0;
        puVar7[8] = 0;
        (*pcVar2)();
        pvVar6 = _pthread_getspecific((void*)plVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01779ed0((float)(int)lVar12 * g_023908e0 + (float)puVar4[lVar12 + 2]);
        pvVar6 = _pthread_getspecific((void*)plVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01779f40();
        pvVar6 = _pthread_getspecific((void*)plVar9);
        if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar9 = plVar5;
        }
        FUN_0176fde0();
        FUN_00d50b20();
        pVar11 = (void*)plVar9;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0xc);
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_025ffd60;
      puVar7[7] = 0;
      puVar7[8] = 0;
      (*pcVar2)();
      pvVar6 = _pthread_getspecific(pVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779ed0((float)puVar4[2] + g_0239394c);
      pvVar6 = _pthread_getspecific(pVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f40();
      pvVar6 = _pthread_getspecific(pVar11);
      pVar1 = (void*)plVar5;
      if ((pvVar6 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        pVar11 = pVar1;
      }
      FUN_0176fde0();
      pvVar6 = _pthread_getspecific(pVar11);
      if ((pvVar6 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        pVar11 = pVar1;
      }
      FUN_01774240(*puVar4);
      pvVar6 = _pthread_getspecific(pVar11);
      if ((pvVar6 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        pVar11 = pVar1;
      }
      FUN_016843a0();
      if ((local_90 == '\0') && (local_98 != 0)) {
        FUN_00d50b00();
      }
      FUN_0176fd70();
      if (local_98 != 0) {
        FUN_00d50b20();
      }
      plVar9 = (int64_t *)FUN_018238e0();
      (**(code **)(*plVar9 + 0x18))();
      pvVar6 = _pthread_getspecific(pVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822eb0();
      *this_ptr = plVar9;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      if (plVar5 == (int64_t *)0x0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
    FUN_016aea20(extraout_XMM0_Da_00,"tuningEntry != NULL");
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

