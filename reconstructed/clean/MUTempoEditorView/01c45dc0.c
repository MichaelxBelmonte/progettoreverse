// Function: FUN_01c45dc0
// Address: 01c45dc0
// Size: 1191 bytes
// Class: MUTempoEditorView
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_01c45dc0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  void *pvVar5;
  void* pVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t this_ptr;
  void* pVar9;
  uint64_t uVar10;
  void* pVar11;
  int64_t *local_40;
  char local_38;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar4 = (int64_t)&g_02572358;
  (*g_02572370)();
  plVar1 = *(int64_t **)(this_ptr + 0x1f8);
  if (*(int *)((int64_t)plVar1 + 0xc) != 0) {
    FUN_00d50b00();
    local_38 = '\0';
    FUN_00d214d0();
    FUN_00d50b20();
    local_40 = plVar1;
  }
  FUN_00d216c0();
  if ((*(int *)(this_ptr + 0x1c8) == 1) && (0 < *(int *)(*(int64_t *)(this_ptr + 0x200) + 0xc)))
  {
    pVar11 = 0xffffffff;
    uVar7 = 0;
    uVar10 = 0xffffffff;
    do {
      cVar3 = FUN_01c82ad0();
      pVar9 = pVar11;
      if (pVar11 == 0xffffffff) {
        pVar9 = (void*)uVar7;
      }
      if (cVar3 != '\0') {
        uVar10 = uVar7 & 0xffffffff;
        pVar11 = pVar9;
      }
      uVar7 = uVar7 + 1;
    } while ((int64_t)uVar7 < (int64_t)*(int *)(*(int64_t *)(this_ptr + 0x200) + 0xc));
    if (pVar11 != 0xffffffff) {
      pVar9 = (void*)uVar10;
      if ((int)pVar11 <= (int)pVar9) {
        iVar8 = (pVar9 - pVar11) + 1;
        do {
          FUN_01c82ae0();
          FUN_01c82aa0();
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d21140();
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      pVar6 = pVar11;
      FUN_01c82aa0();
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01909dc0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar2 = *(int64_t *)(this_ptr + 0x188);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016caaa0();
      FUN_016bf1f0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (pVar9 == *(int *)(*(int64_t *)(this_ptr + 0x200) + 0xc) - 1U) {
        FUN_016bf540();
      }
      else {
        FUN_01c82aa0();
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01909dc0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar2 = *(int64_t *)(this_ptr + 0x188);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (int64_t *)FUN_016caaa0();
        FUN_00e7c280();
        FUN_016bf260();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if (pVar11 == 0) {
        FUN_016bf510();
      }
    }
  }
  lVar2 = *(int64_t *)(this_ptr + 0x1f8);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar4 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_01f27fe0();
    (**(code **)(*local_40 + 0x400))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}

