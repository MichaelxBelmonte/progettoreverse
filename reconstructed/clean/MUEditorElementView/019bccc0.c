// Function: FUN_019bccc0
// Address: 019bccc0
// Size: 1093 bytes
// Class: MUEditorElementView

uint32_t FUN_019bccc0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  code *pcVar3;
  int iVar4;
  void*puVar5;
  void*puVar6;
  uint64_t uVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t local_64;
  int64_t *local_58;
  char local_50;
  
  FUN_01d3abf0();
  uVar8 = FUN_01e466c0();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*pcVar3)();
  (**(code **)(*this_ptr + 0xe20))();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d243f0();
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((int64_t *)this_ptr[0x59] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x59] + 0x490))();
  }
  local_64 = 0;
  do {
    (**(code **)(*this_ptr + 0x658))();
    plVar1 = (int64_t *)*arg1;
    if (plVar1 == local_58) {
      if (((char)arg1[1] == '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b00();
        goto LAB_019bce7c;
      }
      lVar2 = *arg1;
    }
    else {
      lVar2 = arg1[1];
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_58;
      if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_019bce7c:
      *(void*)(arg1 + 1) = 1;
      lVar2 = *arg1;
    }
    if ((lVar2 == 0) || (iVar4 = FUN_01d3a5a0(), iVar4 == 6)) {
      if ((int64_t *)this_ptr[0x59] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)this_ptr[0x59] + 0x4a0))();
      }
      (**(code **)(*this_ptr + 0xdf0))((int)g_023dccec,(int)g_023dccf4);
      if (puVar6 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
      return local_64;
    }
    iVar4 = FUN_01d3a5a0();
    if (iVar4 == 5) {
      FUN_01d3abf0();
      uVar9 = FUN_01e466c0();
      uVar10 = FUN_00d05580(uVar8);
      (**(code **)(*this_ptr + 0xdf0))();
      FUN_00d216c0();
      FUN_00d23480();
      (**(code **)(*this_ptr + 0xb38))(uVar10,uVar9);
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_00d23480();
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0xe20))();
      uVar7 = (**(code **)(*local_58 + 0x50))();
      if ((char)uVar7 == '\0') {
        uVar7 = (**(code **)(*this_ptr + 0xdc8))(extraout_XMM0_Da,1);
      }
      plVar1 = (int64_t *)this_ptr[0x59];
      local_64 = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      if (plVar1 != (int64_t *)0x0) {
        FUN_01d3b590();
        (**(code **)(*plVar1 + 0x498))(uVar10,uVar9);
      }
    }
  } while( true );
}

