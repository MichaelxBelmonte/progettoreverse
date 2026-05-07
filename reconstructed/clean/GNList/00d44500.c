// Function: FUN_00d44500
// Address: 00d44500
// Size: 994 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d44500(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  uint8_t uVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  void*arg1;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar8;
  
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x380))();
  lVar2 = g_027c6f78;
  lVar6 = g_027652d0;
  plVar1 = (int64_t *)*arg1;
  if (cVar3 != '\0') {
    if (g_027652d0 != 0) {
      FUN_00d50b00();
    }
    uVar4 = (**(code **)(*plVar1 + 0x518))();
    *(void*)(this_ptr + 0xc) = uVar4;
    if (lVar6 != 0) {
      FUN_00d50b20();
      uVar4 = *(void*)(this_ptr + 0xc);
    }
    lVar6 = g_027e7c20;
    switch(uVar4) {
    case 0x49:
      plVar1 = (int64_t *)*arg1;
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      uVar8 = (**(code **)(*plVar1 + 0x520))();
      *(void*)(this_ptr + 0x10) = uVar8;
      if (lVar6 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    default:
      return;
    case 0x62:
      plVar1 = (int64_t *)*arg1;
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*plVar1 + 0x510))();
      *(void*)(this_ptr + 0x10) = uVar4;
      if (lVar6 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    case 100:
      goto switchD_00d445a6_caseD_64;
    case 0x66:
      plVar1 = (int64_t *)*arg1;
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      uVar8 = (**(code **)(*plVar1 + 0x538))();
      *(void*)(this_ptr + 0x10) = uVar8;
      if (lVar6 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    case 0x69:
      plVar1 = (int64_t *)*arg1;
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      uVar8 = (**(code **)(*plVar1 + 0x528))();
      *(void*)(this_ptr + 0x10) = uVar8;
      if (lVar6 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    case 0x6c:
      plVar1 = (int64_t *)*arg1;
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      uVar7 = (**(code **)(*plVar1 + 0x530))();
      *(void*)(this_ptr + 0x10) = uVar7;
      if (lVar6 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  if (g_027c6f78 != 0) {
    FUN_00d50b00();
  }
  iVar5 = (**(code **)(*plVar1 + 0x598))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x420))();
  *(char *)(this_ptr + 0xc) = cVar3;
  if (iVar5 < 2) {
    if ((cVar3 == 'd') || (cVar3 == 'l')) {
      lVar6 = *(int64_t *)*arg1;
      uVar7 = 8;
    }
    else {
      if (cVar3 != 'f') goto LAB_00d44892;
      lVar6 = *(int64_t *)*arg1;
      uVar7 = 4;
    }
    (**(code **)(lVar6 + 0x478))(extraout_XMM0_Da,uVar7);
  }
  else if (cVar3 == 'd') {
    uVar7 = (**(code **)(*(int64_t *)*arg1 + 0x438))();
    *(void*)(this_ptr + 0x10) = uVar7;
  }
  else if (cVar3 == 'l') {
    uVar7 = (**(code **)(*(int64_t *)*arg1 + 0x440))();
    *(void*)(this_ptr + 0x10) = uVar7;
  }
  else {
    if (cVar3 != 'f') goto LAB_00d44892;
    uVar8 = (**(code **)(*(int64_t *)*arg1 + 0x430))();
    *(void*)(this_ptr + 0x10) = uVar8;
  }
  cVar3 = *(char *)(this_ptr + 0xc);
LAB_00d44892:
  if (cVar3 == 'I') {
    uVar8 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
    *(void*)(this_ptr + 0x10) = uVar8;
  }
  else if (cVar3 == 'b') {
    uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
    *(void*)(this_ptr + 0x10) = uVar4;
  }
  else if (cVar3 == 'i') {
    uVar8 = (**(code **)(*(int64_t *)*arg1 + 0x448))();
    *(void*)(this_ptr + 0x10) = uVar8;
  }
  return;
switchD_00d445a6_caseD_64:
  plVar1 = (int64_t *)*arg1;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  uVar7 = (**(code **)(*plVar1 + 0x540))();
  *(void*)(this_ptr + 0x10) = uVar7;
  if (lVar6 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
}

