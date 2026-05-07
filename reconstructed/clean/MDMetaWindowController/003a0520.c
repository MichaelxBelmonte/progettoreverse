// Function: FUN_003a0520
// Address: 003a0520
// Size: 894 bytes
// Class: MDMetaWindowController

void FUN_003a0520(int64_t param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int64_t *this_ptr;
  int iVar6;
  float fVar7;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int local_48;
  float local_34;
  
  lVar4 = local_60;
  (**(code **)(*this_ptr + 0x988))();
  iVar5 = *(int *)(local_60 + 0xc);
  FUN_019a47c0();
  iVar5 = iVar5 + *(int *)(local_70 + 0xc);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (iVar5 == 0) {
    return;
  }
  (**(code **)(*this_ptr + 0x988))();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_003a0731;
    FUN_00d50b00();
LAB_003a05d1:
    local_58 = '\0';
    local_60 = 0;
    local_48 = -1;
    local_34 = 0.0;
    while( true ) {
      lVar1 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar4 + 0xc) <= local_48) break;
      lVar3 = *(int64_t *)(lVar4 + 0x10);
      local_60 = *(int64_t *)(lVar3 + 8 + lVar1 * 8);
      FUN_004f9670();
      pvVar2 = _pthread_getspecific((void*)lVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar7 = (float)FUN_004faf50();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      local_34 = local_34 + fVar7;
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  else {
    if (local_60 != 0) goto LAB_003a05d1;
LAB_003a0731:
    local_34 = 0.0;
    lVar4 = param_1;
  }
  FUN_019a47c0();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_003a0891;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_003a0891;
  if (0 < *(int *)(local_60 + 0xc)) {
    iVar6 = 0;
    do {
      FUN_004f9670();
      pvVar2 = _pthread_getspecific((void*)lVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar7 = (float)FUN_004faf50();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      local_34 = local_34 + fVar7;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(local_60 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_003a0891:
  (**(code **)(&UNK_00001488 + *this_ptr))(local_34 / (float)iVar5);
  return;
}

