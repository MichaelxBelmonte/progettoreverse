// Function: FUN_007fbb40
// Address: 007fbb40
// Size: 573 bytes
// Class: MDExportAudioController

void FUN_007fbb40(void)

{
  int iVar1;
  void*puVar2;
  int64_t this_ptr;
  int64_t lVar3;
  char cVar4;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar5;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  int64_t *local_28;
  char local_20;
  
  if (*(int64_t *)(this_ptr + 0x98) != 0) {
    *(void*)(this_ptr + 0x98) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xa8) != 0) {
    FUN_00b881a0();
  }
  lVar3 = 0;
  if (*(int64_t **)(this_ptr + 0xa0) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x370))();
    lVar3 = *(int64_t *)(this_ptr + 0xa0);
  }
  if (lVar3 != 0) {
    *(void*)(this_ptr + 0xa0) = 0;
    FUN_00d50b20();
  }
  FUN_00aea540(2,g_0280d348);
  if (*(int64_t *)(this_ptr + 0xa8) != 0) {
    *(void*)(this_ptr + 0xa8) = 0;
    FUN_00d50b20();
  }
  if (*(char *)(this_ptr + 0xd4) == '\0') {
    *(int *)(this_ptr + 0xd8) = *(int *)(this_ptr + 0xd8) + 1;
    *(void*)(this_ptr + 0xe8) = 0x3f800000;
    puVar2 = (void*)(this_ptr + 0xd0);
    if ((*(char *)(this_ptr + 0xd0) == '\0') && (g_02390124 < *(float *)(this_ptr + 0xe0))) {
      *(void*)(this_ptr + 0xec) = 1;
      if (*(char *)(this_ptr + 0xd2) == '\0') {
        cVar4 = *(char *)(this_ptr + 0xd1);
      }
      else {
        *(void*)(this_ptr + 0xd2) = 0;
        iVar1 = (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x28))();
        local_38 = g_0272faf8;
        lVar3 = g_0272faf0;
        if (iVar1 == 0x44) {
          uVar5 = extraout_XMM0_Da;
          if (g_0272faf0 != 0) {
            uVar5 = FUN_00d50b00();
          }
          local_48 = lVar3;
          local_40 = '\x01';
          FUN_01e57490(uVar5,&local_48);
          iVar1 = (**(code **)(*local_28 + 0x5e0))();
          if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar5 = extraout_XMM0_Da;
          if (g_0272faf8 != 0) {
            uVar5 = FUN_00d50b00();
          }
          local_30 = '\x01';
          FUN_01e57490(uVar5,&local_38);
          iVar1 = (**(code **)(*local_28 + 0x5e0))();
          if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_30 != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
        cVar4 = iVar1 == 0;
        *(char *)(this_ptr + 0xd1) = cVar4;
      }
      puVar2 = (void*)(this_ptr + 0xec);
      if (cVar4 != '\0') {
        *(void*)(this_ptr + 0xd0) = 1;
        *(int *)(this_ptr + 0xd8) = *(int *)(this_ptr + 0xd8) + -1;
        *(float *)(this_ptr + 0xe8) = (g_02390124 / *(float *)(this_ptr + 0xe0)) * g_0239428c;
      }
    }
    *puVar2 = 0;
  }
  return;
}

