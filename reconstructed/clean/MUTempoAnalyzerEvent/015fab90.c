// Function: FUN_015fab90
// Address: 015fab90
// Size: 524 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void* FUN_015fab90(void)

{
  uint uVar1;
  uint32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  byte bVar6;
  bool bVar7;
  void*puVar8;
  int64_t arg1;
  void*this_ptr;
  uint64_t uVar9;
  int64_t lVar10;
  bool bVar11;
  int64_t local_40;
  char local_38;
  
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  (*g_02572370)();
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  while( true ) {
    lVar3 = *(int64_t *)(arg1 + 0x10);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    uVar1 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar1 < 1) break;
    uVar9 = 0;
    bVar7 = false;
    do {
      lVar4 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + uVar9 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      lVar5 = *(int64_t *)(lVar4 + 0x78);
      lVar10 = arg1;
      if ((lVar5 == 0) || (*(int64_t *)(lVar5 + 0x10) != 0)) {
LAB_015fac5d:
        bVar6 = 0;
      }
      else {
        uVar2 = *(void*)(lVar5 + 0xc);
        *(void*)(lVar4 + 0x78) = 0;
        FUN_00d50b20();
        FUN_015faee0(uVar2,uVar9 & 0xffffffff);
        if (local_38 == '\0') {
          if (local_40 == 0) goto LAB_015fac5d;
          FUN_00d50b00();
        }
        else if (local_40 == 0) goto LAB_015fac5d;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_40 != arg1) && (FUN_00d50b00(), lVar10 = local_40, arg1 != 0)) {
          FUN_00d50b20();
        }
        bVar7 = true;
        FUN_00d50b20();
        bVar6 = 1;
        local_40 = arg1;
      }
      arg1 = lVar10;
      FUN_00d50b20();
      bVar11 = (uint64_t)uVar1 - 1 == uVar9;
      uVar9 = uVar9 + 1;
    } while (!(bool)(bVar6 | bVar11));
    if (!bVar7) break;
    FUN_00d50b20();
  }
  FUN_00d21140();
  FUN_00d50b20();
  *this_ptr = puVar8;
  *(void*)(this_ptr + 1) = 1;
  if (arg1 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

