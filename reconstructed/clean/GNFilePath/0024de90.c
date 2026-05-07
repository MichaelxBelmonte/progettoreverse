// Function: FUN_0024de90
// Address: 0024de90
// Size: 564 bytes
// Class: GNFilePath

void FUN_0024de90(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t this_ptr;
  int64_t *local_58;
  char local_50;
  int64_t *local_38;
  char local_30;
  
  if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 != (int64_t *)0x0) {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      (**(code **)(&UNK_00001828 + *local_38))();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar2 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar2 + 0x18))();
      lVar1 = g_026f6de8;
      if (g_026f6de8 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      lVar1 = g_026f6d80;
      if (g_026f6d80 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      local_50 = '\0';
      local_58 = plVar2;
      FUN_00d40470(&local_58,&stack0xffffffffffffffb8,3,3);
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
}

