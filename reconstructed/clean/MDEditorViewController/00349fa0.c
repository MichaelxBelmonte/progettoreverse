// Function: FUN_00349fa0
// Address: 00349fa0
// Size: 906 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00349fa0(uint64_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  char *pcVar3;
  void *pvVar4;
  uint64_t uVar5;
  char *pcVar6;
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((char)this_ptr[0xc3] == unaff_SIL) {
    return;
  }
  *(char *)(this_ptr + 0xc3) = unaff_SIL;
  (**(code **)(*this_ptr + 0x9b0))(param_1,0);
  if (local_40[0] == '\0') {
    if (local_48 == 0) goto LAB_0034a08f;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == 0) {
LAB_0034a08f:
    bVar1 = true;
    goto LAB_0034a252;
  }
  if (0 < *(int *)(local_48 + 0xc)) {
    FUN_00d23310();
    local_38[0] = local_40[0];
    pcVar6 = local_38;
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = pcVar6;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((void*)pcVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_012762c0((double)(int)(char)this_ptr[0xc3]);
    if (unaff_SIL == '\0') {
      uVar5 = FUN_00e7bdb0();
      FUN_01294af0(1,uVar5,1);
    }
    FUN_00d23310();
    pcVar6 = local_38;
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = pcVar6;
    }
    local_38[0] = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((void*)pcVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  bVar1 = false;
LAB_0034a252:
  FUN_00d403d0();
  lVar2 = g_02702dc0;
  if (g_02702dc0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_78 = 0;
  local_70 = '\0';
  FUN_00d40470(&local_78,&stack0xffffffffffffff98,1,3);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}

