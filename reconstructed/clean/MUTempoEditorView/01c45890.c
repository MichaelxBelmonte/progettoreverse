// Function: FUN_01c45890
// Address: 01c45890
// Size: 513 bytes
// Class: MUTempoEditorView
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_01c45890(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar2 = local_58;
  FUN_01c45b80();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  local_58 = *param_2;
  cVar3 = FUN_00d23d70();
  lVar5 = lVar2;
  if (cVar3 == '\0') {
    lVar1 = arg1[0x40];
    if (lVar1 != 0) {
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_40) break;
        local_58 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
        FUN_01c82aa0();
        FUN_01c82ae0();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01c79df0();
    }
    (**(code **)(*arg1 + 0x620))();
    FUN_01c45dc0();
    FUN_01c464b0();
    FUN_01c465e0();
    if (lVar2 != local_58) {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      lVar5 = local_58;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *this_ptr = lVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

