// Function: FUN_00d981d0
// Address: 00d981d0
// Size: 1502 bytes
// Class: Unknown

void* FUN_00d981d0(void)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  int64_t arg1;
  void*this_ptr;
  int64_t *local_40;
  char local_38;
  
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  FUN_00ddb860();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (arg1 != 0) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025795a8;
  FUN_00d500e0();
LAB_00d982a0:
  do {
    cVar2 = (**(code **)(*local_40 + 0x388))();
    lVar1 = g_0276ce70;
    if (cVar2 != '\0') {
      *(byte *)((int64_t)puVar3 + 0x24) = *(byte *)((int64_t)puVar3 + 0x24) & 0xfe;
LAB_00d986e7:
      *this_ptr = puVar3;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      return this_ptr;
    }
    if (g_0276ce70 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_40 + 0x3c8))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((cVar2 != '\0') || (cVar2 = (**(code **)(*local_40 + 0x388))(), cVar2 == '\0')) {
      lVar1 = g_0276ce70;
      if (g_0276ce70 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*local_40 + 0x3e0))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      cVar2 = (**(code **)(*local_40 + 0x388))();
      if (cVar2 != '\0') {
        FUN_00d8dbf0();
        goto LAB_00d986e7;
      }
      (**(code **)(*local_40 + 0x3d0))();
      if (segment_command_00000020.cmd == 0xffffffff) {
        FUN_00d931c0();
      }
      if ((ushort)(*(short *)MACH_HEADER._24_8_ - 0x31U) < 9) {
        FUN_00d8dbf0();
      }
      else {
        FUN_00d8dbf0();
        FUN_00d8dbf0();
      }
      goto LAB_00d982a0;
    }
    cVar2 = (**(code **)(*local_40 + 0x3d8))();
    if (cVar2 != '\0') {
      FUN_00d8dbf0();
    }
  } while( true );
}

