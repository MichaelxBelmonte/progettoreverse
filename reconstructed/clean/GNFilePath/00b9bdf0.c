// Function: FUN_00b9bdf0
// Address: 00b9bdf0
// Size: 2126 bytes
// Class: GNFilePath

void* FUN_00b9bdf0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  
  if ((g_028a56a0 == (void*)0x0) || (g_028a56a9 == '\0')) {
    FUN_00e8cb50();
    if (g_028a56a0 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      if (g_028a56a0 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028a56a0 != (void*)0x0;
        g_028a56a0 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028a56a8 == '\0') {
        g_028a56a8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_02764ac8;
      if (g_02764ac8 != 0) {
        FUN_00d50b00();
      }
      FUN_00c80cd0();
      if ((local_58 == '\0') && (local_60 != 0)) {
        FUN_00d50b00();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      FUN_00d21140();
      lVar3 = g_02764ad0;
      if (g_02764ad0 != 0) {
        FUN_00d50b00();
      }
      FUN_00c80cd0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      FUN_00d21140();
      lVar3 = g_02764ad8;
      if (g_02764ad8 != 0) {
        FUN_00d50b00();
      }
      FUN_00c80cd0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      FUN_00d21140();
      lVar3 = g_02764ae0;
      if (g_02764ae0 != 0) {
        FUN_00d50b00();
      }
      FUN_00c80cd0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d21140();
      }
      lVar3 = g_02764ae8;
      if (g_02764ae8 != 0) {
        FUN_00d50b00();
      }
      FUN_00c80cd0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d21140();
      }
      lVar3 = g_02764af0;
      if (g_02764af0 != 0) {
        FUN_00d50b00();
      }
      FUN_00c80cd0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d21140();
      }
      lVar3 = g_02764af8;
      if (g_02764af8 != 0) {
        FUN_00d50b00();
      }
      FUN_00c80cd0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d21140();
        FUN_00d50b20();
      }
      g_028a56a9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a56a9 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar3 = g_02764880;
  if (g_028a56a0 != (void*)0x0) {
    if (0 < *(int *)((int64_t)g_028a56a0 + 0xc)) {
      FUN_00c811e0();
      if ((local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      (**(code **)(*local_70 + 0x18))();
      (**(code **)(*local_70 + 0x368))();
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = local_70;
      *(void*)(this_ptr + 1) = 1;
      FUN_00e2c740();
      return this_ptr;
    }
    FUN_00e2c740();
    lVar3 = g_02764880;
  }
  g_02764880 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_00cc78b0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

