// Function: FUN_00722260
// Address: 00722260
// Size: 704 bytes
// Class: MUTempoEditorView
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


int64_t * FUN_00722260(int64_t *param_1,void*param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  void*puVar4;
  void *pvVar5;
  void*puVar6;
  int64_t *this_ptr;
  int64_t lVar7;
  uint64_t local_b8;
  uint8_t local_b0;
  void*local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint64_t local_80;
  uint32_t local_78;
  int64_t local_58;
  char local_50;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &g_02572358;
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar1 = *param_1;
  if (lVar1 != 0) {
    local_90 = 0;
    local_98 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
        local_98 = lVar2;
        cVar3 = FUN_00d23d70();
        if (cVar3 != '\0') {
          *(void*)(this_ptr + 1) = 0;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          *this_ptr = lVar2;
          *(void*)(this_ptr + 1) = 1;
          FUN_000be170();
          if (puVar4 == (void*)0x0) {
            return this_ptr;
          }
          goto LAB_007224e5;
        }
        pvVar5 = _pthread_getspecific((void*)puVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        if (lVar2 != 0) {
          pvVar5 = _pthread_getspecific((void*)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          FUN_00d214d0();
          if (local_58 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar7 = lVar7 + 1;
        local_80 = CONCAT44(local_80._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
  }
  local_b8 = *param_2;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = puVar4;
  FUN_00722260(&local_a8,&local_b8);
  if (puVar4 != (void*)0x0) {
LAB_007224e5:
    FUN_00d50b20();
  }
  return this_ptr;
}

