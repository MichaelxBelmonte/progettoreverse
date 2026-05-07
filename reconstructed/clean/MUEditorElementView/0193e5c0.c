// Function: FUN_0193e5c0
// Address: 0193e5c0
// Size: 980 bytes
// Class: MUEditorElementView

uint32_t FUN_0193e5c0(void)

{
  int64_t lVar1;
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
  uint32_t local_98;
  int64_t local_58;
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
  (**(code **)(*this_ptr + 0x3f8))();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d243f0();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_98 = 0;
  do {
    (**(code **)(*this_ptr + 0x658))();
    lVar1 = *arg1;
    if (lVar1 == local_58) {
      if (((char)arg1[1] == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
        goto LAB_0193e76c;
      }
      lVar1 = *arg1;
    }
    else {
      lVar2 = arg1[1];
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_58;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_0193e76c:
      *(void*)(arg1 + 1) = 1;
      lVar1 = *arg1;
    }
    if ((lVar1 == 0) || (iVar4 = FUN_01d3a5a0(), iVar4 == 6)) {
      (**(code **)(*this_ptr + 0xdf0))((int)g_023dccec,(int)g_023dccf4);
      if (puVar6 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
      return local_98;
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
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_00d23480();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      uVar7 = (**(code **)(*(int64_t *)this_ptr[0x41] + 0x50))();
      local_98 = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      if ((char)uVar7 == '\0') {
        (**(code **)(&g_00001710 + *this_ptr))();
      }
    }
  } while( true );
}

