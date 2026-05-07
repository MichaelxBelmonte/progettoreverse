// Function: FUN_01f50410
// Address: 01f50410
// Size: 1303 bytes
// Class: Unknown
// String references:
//   "objectAtIndex:"

void FUN_01f50410(void)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  void*puVar4;
  uint64_t uVar5;
  int64_t lVar6;
  void*puVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  bool bVar10;
  int64_t local_68;
  char local_60;
  
  puVar4 = g_028baa90;
  if ((g_028baaa0 != '\x01') || (g_028baa90 == (void*)0x0)) {
    if (g_028baa90 != (void*)0x0) {
      FUN_00d50b00();
    }
    FUN_01f50b10();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    (*g_02572370)();
    bVar10 = g_028baa90 == (void*)0x0;
    g_028baa90 = puVar4;
    if (((bVar10) || (FUN_00d50b20(), g_028baa90 != (void*)0x0)) && (g_028baa98 == '\0'))
    {
      g_028baa98 = '\x01';
      FUN_00e8cb90();
    }
    _objc_alloc();
    (*PTR__objc_msgSend_024a9998)();
    (*PTR__objc_msgSend_024a9998)();
    if (local_68 == 0) {
      bVar2 = 1;
      bVar10 = false;
      puVar4 = (void*)0x0;
      for (uVar9 = 0; uVar5 = (*PTR__objc_msgSend_024a9998)(), uVar9 < uVar5;
          uVar9 = uVar9 + 1) {
        uVar8 = (*PTR__objc_msgSend_024a9998)();
        if (!(bool)(puVar4 == (void*)0x0 | bVar2)) {
          FUN_00d50b20();
        }
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_026bab48;
        *(void*)(puVar4 + 3) = 0;
        FUN_00d500e0();
        *(bool *)(puVar4 + 3) = uVar9 == 0;
        puVar4[2] = uVar8;
        _objc_alloc();
        (*PTR__objc_msgSend_024a9998)();
        (*PTR__objc_retain_024a99a8)();
        (*PTR__objc_release_024a99a0)();
        FUN_00d21140();
        bVar10 = true;
        bVar2 = 0;
      }
    }
    else {
      bVar10 = false;
      puVar4 = (void*)0x0;
      for (uVar9 = 0; uVar5 = (*PTR__objc_msgSend_024a9998)(), uVar9 < uVar5;
          uVar9 = uVar9 + 1) {
        lVar6 = (*PTR__objc_msgSend_024a9998)();
        uVar1 = *(uint *)(local_68 + 0xc);
        if ((int)*(uint *)(local_68 + 0xc) < 1) {
          uVar1 = 0;
        }
        uVar5 = 0;
        do {
          if (uVar1 == uVar5) {
            FUN_0065c9a0();
            if ((puVar4 != (void*)0x0) && (bVar10)) {
              FUN_00d50b20();
            }
            goto LAB_01f50665;
          }
          puVar7 = *(void**)(*(int64_t *)(local_68 + 0x10) + uVar5 * 8);
          uVar5 = uVar5 + 1;
        } while (puVar7[2] != lVar6);
        FUN_00d50b00();
        FUN_0065c9a0();
        if (puVar7 == puVar4) {
          puVar7 = puVar4;
          if (bVar10) {
            FUN_00d50b20();
            bVar3 = bVar10;
          }
          else {
            bVar3 = true;
          }
        }
        else {
          bVar3 = true;
          if ((bVar10) && (puVar4 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar10 = bVar3;
        puVar4 = puVar7;
        if (puVar4 == (void*)0x0) {
LAB_01f50665:
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_026bab48;
          *(void*)(puVar4 + 3) = 0;
          FUN_00d500e0();
          bVar10 = true;
        }
        *(bool *)(puVar4 + 3) = uVar9 == 0;
        puVar4[2] = lVar6;
        _objc_alloc();
        (*PTR__objc_msgSend_024a9998)();
        (*PTR__objc_retain_024a99a8)();
        (*PTR__objc_release_024a99a0)();
        FUN_00d21140();
      }
    }
    (*PTR__objc_release_024a99a0)();
    if (*(int *)((int64_t)g_028baa90 + 0xc) == 0) {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_026bab48;
      *(void*)(puVar7 + 3) = 0;
      FUN_00d500e0();
      FUN_00d21140();
      FUN_00d50b20();
    }
    g_028baaa0 = '\x01';
    if ((bVar10) && (puVar4 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

